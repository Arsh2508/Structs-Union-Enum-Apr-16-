enum product{ 
	ELECTRONICS, 
 	FOOD, 
	CLOTHING 
}; 
  
struct Product{ 
	char name[20]; 
	enum product category; 
	float price; 
}; 
