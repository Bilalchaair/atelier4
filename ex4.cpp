#include <iostream>
#include <list>
using namespace std;
//foncton pour afficher la liste 
void afficher(list<string> malist)
{
    list<string>::iterator i;
    for (i = malist.begin(); i != malist.end(); ++i)
    {
        cout << *i << endl;
    }
}
main()
{
    // déclaration des variables
    int i;
    int l;
    string n;
      // déclaration de la liste
    list<string> p;
    cout<< "entrez le nombre des elements tu vas sasir"<<endl;
    cin >> l;
    cout << "Entrez les elements de la liste " << endl;
  for (i = 0;i<l; i++)
  {
    cin >> n;
    p.push_back(n);
  }
  p.sort();
  cout << "la liste triee est : ";
  afficher(p);
}
