import React, { useState } from "react";
import "./App.css";

function App() {
  const [cart, setCart] = useState(0);

  const products = [
    {
      id: 1,
      name: "Wireless Headphones",
      price: "$49.99",
      image: "https://via.placeholder.com/200"
    },
    {
      id: 2,
      name: "Smart Watch",
      price: "$89.99",
      image: "https://via.placeholder.com/200"
    },
    {
      id: 3,
      name: "Bluetooth Speaker",
      price: "$39.99",
      image: "https://via.placeholder.com/200"
    }
  ];

  const addToCart = () => {
    setCart(cart + 1);
  };

  return (
    <div>
      <header className="navbar">
        <h1>Amazon Clone</h1>
        <div className="cart">
          🛒 Cart: {cart}
        </div>
      </header>

      <div className="products">
        {products.map((product) => (
          <div className="card" key={product.id}>
            <img src={product.image} alt={product.name} />
            <h3>{product.name}</h3>
            <p>{product.price}</p>
            <button onClick={addToCart}>
              Add to Cart
            </button>
          </div>
        ))}
      </div>
    </div>
  );
}

export default App;