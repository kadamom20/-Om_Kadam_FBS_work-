#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Book
{
    int id;
    char name[100];
    char author[100];
    char category[50];
    float price;
    float rating;
} Book;

Book *books=NULL;
int bookCount=0;
int capacity=0;

void initBooks();
void addBook();
void removeBook();
void searchByID();
void searchByName();
void showAuthorBooks();
void showCategoryBooks();
void updateBook();
void displaySortedByPrice();
void displaySortedByRating();
void displayAllBooks();
void freeAndExit();
int findIndexByID(int id);

int main()
{
	initBooks();
    int choice;
    
    while(1)
    {
      printf("\n===== BOOK MANAGEMENT SYSTEM =====\n");
      printf("1.Add Book\n");
      printf("2.Remove Book\n");
      printf("3.Search Book by ID\n");
      printf("4.Search Book by Name\n");
      printf("5.Show Books by Author\n");
      printf("6.Show Books by Category\n");
      printf("7.Update Book (Price/Rating)\n");
      printf("8.Display Books Sorted by Price\n");
      printf("9.Display Books Sorted by Rating\n");
      printf("10.Display All Books\n");
      printf("0.Exit\n");
    
      printf("\nEnter your choice: ");
	  scanf("%d",&choice);
	
	switch (choice) 
	{
        case 1:addBook();
		        break;
        case 2:removeBook();
		        break;
        case 3:searchByID(); 
		        break;
        case 4:searchByName(); 
		        break;
        case 5:showAuthorBooks(); 
		        break;
        case 6:showCategoryBooks(); 
	            break;
        case 7:updateBook(); 
		        break;
        case 8:displaySortedByPrice(); 
		        break;
        case 9:displaySortedByRating();
		        break;
        case 10:displayAllBooks(); 
		        break;
        case 0:freeAndExit(); 
		        break;
        default:printf("Invalid choice! Try again.\n");
        }
		
 }
}
void initBooks()
{
    capacity=5;
    books=(Book*)calloc(capacity,sizeof(Book));
    if(books==NULL) 
	{
        printf("Memory allocation failed!\n");
        exit(1);
    }
    bookCount=0;
}
int findIndexByID(int id) 
{
    for(int i=0;i<bookCount;i++)
	{
        if(books[i].id==id)
            return i;
    }
    return -1;
}
void addBook()
{
   if (bookCount==capacity) {
        capacity=capacity*2; 
        Book*temp=(Book*)realloc(books,capacity*sizeof(Book));
        if(temp==NULL) 
		{
            printf("Memory reallocation failed!\n");
            return;
        }
        books=temp;
    }

    Book newBook;
    printf("Enter Book ID: ");
    scanf("%d",&newBook.id);    

    if (findIndexByID(newBook.id)!=-1)
	{
        printf("A book with this ID already exists!\n");
        return;
    }

    printf("Enter Book Name: ");
    scanf(" %[^\n]",newBook.name);      
    printf("Enter Author Name: ");
    scanf(" %[^\n]",newBook.author);
    printf("Enter Category: ");
    scanf(" %[^\n]",newBook.category);
    printf("Enter Price: ");
    scanf(" %f",&newBook.price);
    printf("Enter Rating (0-5): ");
    scanf(" %f",&newBook.rating);

    books[bookCount]=newBook;
    bookCount++;

    printf("Book added successfully!\n");	
}
void removeBook()
{
	int id,index;
    printf("Enter Book ID to remove:");
    scanf("%d",&id);

    index=findIndexByID(id);
    if(index==-1)
	{
        printf("Book with ID %d not found\n",id);
        return;
    }
    for (int i=index;i<bookCount-1;i++) 
	{
        books[i]=books[i+1];
    }
    bookCount--;
    printf("Book removed successfully!\n");
}
void searchByID()
{
	int id,index;
    printf("Enter Book ID to search:");
    scanf("%d",&id);

    index = findIndexByID(id);
    if(index==-1) 
	{
        printf("Book not found\n");
        return;
    }

    Book b=books[index];
    printf("\nID:%d | Name:%s | Author:%s | Category:%s | Price:%.2f | Rating:%.1f\n",b.id,b.name,b.author,b.category,b.price,b.rating);


}
void searchByName()
{
	char name[100];
    int found=0;

    printf("Enter Book Name to search:");
    scanf("%[^\n]",name);

    for(int i=0;i<bookCount;i++) 
	{
        if(strcmp(books[i].name,name)==0) 
		{
            Book b=books[i];
            printf("ID:%d | Name:%s | Author:%s | Category:%s | Price:%.2f | Rating:%.1f\n",b.id, b.name, b.author, b.category, b.price, b.rating);       
            found = 1;
        }
    }

    if(!found) 
	{
        printf("No book found with that name.\n");
    }
	
}
void showAuthorBooks()
{
	char author[100];
    int found=0;

    printf("Enter Author Name:");
    scanf("%[^\n]",author);

    printf("\nBooks by %s:\n",author);
    for(int i=0;i<bookCount;i++) 
	{
        if(strcmp(books[i].author,author)==0) 
		{
            printf("ID:%d | Name:%s | Category:%s | Price:%.2f | Rating:%.1f\n",books[i].id, books[i].name, books[i].category,books[i].price, books[i].rating);      
            found=1;
        }
    }

    if(!found) 
	{
        printf("No books found for this author.\n");
    }
	
}
void showCategoryBooks()
{
	char category[50];
    int found=0;

    printf("Enter Category:");
    scanf("%[^\n]",category);

    printf("\nBooks in category'%s':\n",category);
    for (int i=0;i<bookCount;i++) 
	{
        if (strcmp(books[i].category,category)==0) 
		{
            printf("ID:%d|Name:%s|Author:%s|Price:%.2f|Rating:%.1f\n",books[i].id, books[i].name, books[i].author,books[i].price, books[i].rating);
            found = 1;
        }
    }

    if(!found) 
	{
        printf("No books found in this category.\n");
    }
	
}
void updateBook()
{
	int id,index;
    printf("Enter Book ID to update:");
    scanf("%d",&id);

    index=findIndexByID(id);
    if (index==-1) 
	{
        printf("Book not found.\n");
        return;
    }

    printf("Current Price:%.2f|Current Rating: %.1f\n",books[index].price,books[index].rating);

    printf("Enter new Price:");
    scanf("%f",&books[index].price);
    printf("Enter new Rating:");
    scanf("%f",&books[index].rating);

    printf("Book updated successfully!\n");
}
void displaySortedByPrice()
{
	if(bookCount==0) 
	{
        printf("No books to display.\n");
        return;
    }

    Book*temp=(Book*)malloc(bookCount*sizeof(Book));
    memcpy(temp,books,bookCount*sizeof(Book));

    for(int i=0;i<bookCount-1;i++) 
	{
        for (int j=0;j<bookCount-1-i;j++) 
		{
            if (temp[j].price>temp[j+1].price) 
			{
                Book swap=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=swap;
            }
        }
    }

    printf("\nBooks sorted by Price(Low to High):\n");
    for (int i=0;i<bookCount;i++) 
	{
        printf("ID: %d | Name: %s | Price: %.2f\n",temp[i].id,temp[i].name,temp[i].price);
               
    }

    free(temp);
}
void displaySortedByRating()
{
	if(bookCount==0) 
	{
        printf("No books to display.\n");
        return;
    }

    Book*temp=(Book*)malloc(bookCount*sizeof(Book));
    memcpy(temp,books,bookCount*sizeof(Book));

    for (int i=0;i<bookCount-1;i++) 
	{
        for (int j=0;j<bookCount-1-i;j++) 
		{
            if(temp[j].rating<temp[j+1].rating) 
			{
                Book swap=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=swap;
            }
        }
    }

    printf("\nBooks sorted by Rating (High to Low):\n");
    for(int i=0;i<bookCount;i++) 
	{
        printf("ID:%d|Name:%s|Rating:%.1f\n",temp[i].id, temp[i].name, temp[i].rating);
    }

    free(temp);
}
void displayAllBooks()
{
	if(bookCount==0) 
	{
        printf("No books in the database.\n");
        return;
    }

    printf("\n%-5s %-20s %-20s %-15s %-10s %-6s\n","ID","Name","Author","Category","Price","Rating");
           
    printf("--------------------------------------------------------------------\n");

    for(int i=0;i<bookCount;i++) 
	{
        printf("%-5d %-20s %-20s %-15s %-10.2f %-6.1f\n",books[i].id,books[i].name,books[i].author,books[i].category,books[i].price,books[i].rating);
    }
}
void freeAndExit()
{
	free(books);
    books=NULL;
    printf("Freeing memory...Goodbye!\n");
}


