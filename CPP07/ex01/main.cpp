
#include "iter.hpp"
#include <string>

// int main(void){
//   int arr[] = {10, 20, 30};
//   std::string words[] = {"ismael", "henrique", "da", "silva"};

//   iter(arr, 3, triple<int>);
//   iter(arr, 3, show<int>);

//   iter(words, 4, show<std::string>);
  
//   return(0);
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}