class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;

        for(int &a: asteroids){

            // when collision happen?
          while(!st.empty() && a<0 && st.top() > 0){
              int sum = a + st.top();

             // sum < 0 means : left  direction
              if(sum  < 0){
                  st.pop(); // st mai jo hai nikal dege ku ki left ja rahe
              }
              else if( sum > 0){ // right side jaeye ku ki st.top mai jo wo bad hai
                  a=0;  // loop se bahar 
              }
              else{ // barabar dono destry 
                  st.pop();
                  a=0;   // loop ke bhara ayjayege
              }
          }
          if(a != 0){
              st.push(a); // sab push karte jao
          }
        }
        int s = st.size();
        vector<int> res(s);

        // stack se nikalenge to resverse ayega to ulta dalenge
        int i=s-1;
        while(!st.empty()){
            res[i] = st.top();
            st.pop();
            i--;
        }
        return res;
    }
};