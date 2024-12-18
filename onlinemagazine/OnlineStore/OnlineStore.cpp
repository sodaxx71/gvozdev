#include <iostream>
#include <vector>
#include "Product.h"
#include "Category.h"
#include "Discount.h"
#include "Review.h"
#include "OrderStatus.h"
#include "Payment.h"
#include "Delivery.h"
#include "Order.h"



using namespace std;

int main() {
    Product product1(1, "Laptop", "Powerful gaming laptop", 1500.0, 10);
    Product product2(2, "Headphones", "Noise-cancelling headphones", 200.0, 20);

    Discount discount1(1, 10.0, time(0), time(0) + 7 * 24 * 3600);
    product1.setDiscount(&discount1);

    Category electronics(1, "Electronics", "Electronic devices");
    electronics.addProduct(&product1);
    electronics.addProduct(&product2);

    cout << "Product: " << product1.getName()
        << " | Discounted Price: $" << product1.getDiscountedPrice() << endl;

    
    electronics.displayProducts();

    Customer customer1(1, "John Doe", "john@example.com");
    Review review1(1, &customer1, &product1, 5, "Great product!");
    product1.addReview(&review1);
    
    product1.displayReviews();
   
    
    Order order(1, &customer1, {}, 0.0);
    Payment payment1(1, &order, product1.getDiscountedPrice());
    payment1.setStatus("Completed");
    payment1.display();

    Delivery delivery1(1, &order, "123 Main Street");
    delivery1.setStatus("Delivered");
    delivery1.display();

    return 0;
}
