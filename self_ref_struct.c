#include <stdio.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
void printBook( struct Books *book );
int main( ) {

   struct Books Book1;
   struct Books Book2;

   printf("Prajapati Tarun Jayantibhai\n");
   printf("ER-NO:206120316008\n");

   strcpy( Book1.title, "Computer Programming");
   strcpy( Book1.author, "M.T.Savaliya");
   strcpy( Book1.subject, "C Programming Basic");
   Book1.book_id = 395006;

   strcpy( Book2.title, "Data Structure");
   strcpy( Book2.author, "M.J.Desai");
   strcpy( Book2.subject, "Concept Of Data Structure");
   Book2.book_id = 356789;

   printBook( &Book1 );
   printBook( &Book2 );

   return 0;
}

void printBook( struct Books *book ) {

   printf( "\nBook title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}
