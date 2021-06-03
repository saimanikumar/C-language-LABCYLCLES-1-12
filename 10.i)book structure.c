#include <stdio.h>
struct book_detail
{
    int id;
    float price;
    char author[10], title[10];
};
struct book_detail detail();
void main()
{
    struct book_detail book;
    book = detail();

    printf("Title of the book     :  %s\n", book.title);
    printf("Author of the book    :  %s\n", book.author);
    printf("The id of the book    :  %d\n", book.id);
    printf("The price of the book :  %.2f\n", book.price);
}
struct book_detail detail()
{
    struct book_detail book;
    printf("enter the title of the book\n");
    scanf(" %s", &book.title);
    fflush(stdin);
    printf("enter the author name of the book\n");
    scanf(" %s", &book.author);
    fflush(stdin);
    printf("enter the id of the book\n");
    scanf("%d", &book.id);
    fflush(stdin);
    printf("enter the price of the book\n");
    scanf("%f", &book.price);
    return book;
}
