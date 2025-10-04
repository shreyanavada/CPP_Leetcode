bool is_uppercase(const string &s) {
  for(int i=0;s[i]!='\0';i++)
    {
    if(s[i]<65 || s[i]>90)
      return false;
    }
  return true;
}
