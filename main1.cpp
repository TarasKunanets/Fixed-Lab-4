#include "Farm.h"
#include<iostream>

  int main(){
     Farm Willy;{
         Willy.Get();
         Willy.SetProtected(111, 100);
         Willy.GetPrivate();
         Willy.SetPublic("Willy",20);
         Willy.GetPublic();
     }
          Farm Billy;{
         Billy.Get();
         Billy.SetProtected(444, 120);
         Billy.GetPrivate();
         Billy.SetPublic("Billy",420);
         Billy.GetPublic();
          }
         Farm Dilly; {
          Dilly.Get();
         Dilly.SetProtected(3433, 1990);
         Dilly.GetPrivate();
         Dilly.SetPublic("Dilly",4420);
         Dilly.GetPublic();

     }
     system("pause");
     return 0;



}

