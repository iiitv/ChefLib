// Code written by Monal
#include <iostream>
#include <vector>
#include <map>
#include <deque>
 
 
 
using namespace std;
 
#define innum(n, k, p) cin>>n>>k>>p
#define inone(s) cin>>s
#define pb(tmp) push_back(tmp)
#define po() pop_back()
#define bk() back()
#define pf(tmp) push_front(tmp)
#define bg() begin()
#define er(tmp) erase(tmp)
#define fr() front()
#define cnt(tmp) count(tmp)
#define out(tmp) cout<<tmp<<"\n"
#define forn(n) for ( long int  i = 0; i < n; ++i)
 
map < long int ,  long int > :: iterator traversor;
deque <  long int  > mydequeue;
vector <  long int  > bits;
map < long int ,  long int > mymap;
 
int main() {
  ios::sync_with_stdio(false);
  long int  n, k, p;
  innum(n, k, p);
  forn(n) {
    long int  tmp;
    inone(tmp);
    bits.pb(tmp);
  }
  // Why such big input codechef?
  long int start = k - 1;       // start of left out part
  long int end = n - 1;         // end of left out part
  string query;
  inone(query);                 // string of ? and !
  long int  ones_in_frame = 0;
  forn(min(k, n)) {
    ones_in_frame += bits[i];
  }
  if (k >= n) {                       // Overflow case
    forn(p) {
      if (query[i] == '?')
        out(ones_in_frame);
    }
    return 0;                       // Never need rotation as it wont affect anything.
  }
  forn(n - k + 1) {
    mydequeue.pb(ones_in_frame);
    mymap[-1*ones_in_frame] = (mymap.cnt(-1*ones_in_frame) > 0)? (mymap[-1*ones_in_frame] + 1) : 1;
    if (i + k < n)                   // frame of last k elements
      ones_in_frame += (bits[i+k] - bits[i]);
  }
  forn(p) {                            // Normal cases
    if (query[i] == '!') {
      long int left = bits[start];
      start--;
      if(start == -1)              // rotation resulting out of bounds
        start = n - 1;
      long int right = bits[end];
      end--;
      if(end == -1)               // if out of bound
        end = n - 1;
      ones_in_frame = mydequeue.bk();
      mydequeue.po();
      mymap[-1*ones_in_frame] = mymap[-1*ones_in_frame] - 1;
      if(mymap[-1*ones_in_frame] == 0)
        mymap.er(-1*ones_in_frame);
      ones_in_frame = mydequeue.fr() + right - left;
      mymap[-1*ones_in_frame] = (mymap.cnt(-1*ones_in_frame) > 0)? (mymap[-1*ones_in_frame] + 1) : 1;
      mydequeue.pf(ones_in_frame);
    } else {
        traversor = mymap.bg();
        long int  ans = traversor->first;
        out(-1*ans);
    }
  }
  return 0;
}
