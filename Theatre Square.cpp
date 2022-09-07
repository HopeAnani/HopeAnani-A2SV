include <isotream>
using namespace std;

include main(){
  long n, m, a;
  long result = 0;
  cin >> n >> m >> a;
  
  if(n%a == 0)
    n = n/a;
  else
    n = n/a + 1;
  
  if(m%a == 0)
    m = m/a;
  else
    m = m/a + 1;
  
  result = n*m;
  
  cout << result ;
  
  return 0;
}
