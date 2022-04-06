// Q5: There are p white balls and q red balls, you need to put them into r bags such that:
// No bag should be empty
// A bag can contain only red balls or white balls, not both
// No red ball can be left alone in a bag
// Find the number of ways to put the balls in bags. All bags are identical, but each ball is unique (or
// numbered).
// Since the total number can be very large for larger values of p and q, you can take modulo 99,999,999
// Ex: White balls: 2, red balls: 1, bags: 4. Answer: 0
// White balls: 2, red balls: 4, bags: 4. Answer: 3

#include <iostream>

using namespace std;

int main()
{
    int w, r, bags;
    cout<<"Enter the no of white ball: ";
    cin >> w;
    cout << "Enter the no of red ball: ";
    cin >> r;
    cout << "Enter the no of bags: ";
    cin >> bags;
    
    if((w+r) < bags)
    {
        cout << "Choice: " << 0 << endl;
    }  
    else if(r % 2 != 0)
    {
        cout << "Choice: " << 0 << endl;
    } 
    else if(r % 2 == 0)
    {
        if((w + (r/2)) >= bags)
        {
            cout << "Choice: " << r-1 << endl;
        }
    }
    else
    {
      cout << "Choice: " << 0 << endl;
    }
    return 0;
}