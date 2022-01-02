
string encode(string src)
{     
  //Your code here 
  int n=src.length();
  
  string ans="";
//   int j=0;
  int count=0;
  char c=src[0];
  for(int i=0;i<n;i++){
      
      if(c!=src[i]){
          ans+=c;
          ans+=to_string(count);
          
          count=0;
          c=src[i];
      }
    
      count++;
      
      
  }
  ans+=c;
  ans+=to_string(count);
  return ans;
}     
 
