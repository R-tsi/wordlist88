#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream myfile("huawei.txt");
  string line = "";

  //65-90 (A-Z), 97-122 (a-z), 48-57 (0-9)
    
/*
  for( int j = 0; j<8 ; j++)
    {
    for(int i = 48; i <= 122; i++){
  
      line.append(i);

      if(j == 7)
        line+="\n";
    }
  }
*/

  char previous_char = 47, character = 48;
  char word[9] = {48, 49, 50, 51, 52, 53, 54, 55, '\0'};
  char allowed[63] = {"0123456789abcdefghijklmnopqestuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  char *cp0 = allowed;
  char *cp1 = allowed +1;
  char *cp2 = allowed + 2;
  char *cp3 = allowed + 3;
  char *cp4 = allowed + 4;
  char *cp5 = allowed + 5;
  char *cp6 = allowed + 6;
  char *cp7 = allowed + 7;

  int linenum = 0;

  int zero = 0, wedge0 = 0, skipped0 = 0;
 
  for(int s = 0 ; s < 62 ; s++)
  {    
    if(wedge0 == 61)
    {
      wedge0 = 0;
      wedge0 = skipped0++;
    }
    else if(skipped0 > 0) wedge0++;
    else wedge0 = s + zero;

    cp0 = allowed + wedge0;

    if(*cp0 == *cp1) continue;
    if(*cp0 == *cp2) continue;
    if(*cp0 == *cp3) continue;
    if(*cp0 == *cp4) continue;
    if(*cp0 == *cp5) continue;
    if(*cp0 == *cp6) continue;
    if(*cp0 == *cp7) continue;
    word[0] = *cp0;


    int one = 1, wedge1 = 0, skipped1 = 0;
 
    for(int r = 0 ; r < 62 ; r++)
    {
    
      if(wedge1 == 61)
      {
        wedge1 = 0;
        wedge1 = skipped1++;
      }
      else if(skipped1 > 0) wedge1++;
      else wedge1 = r + one;

      cp1 = allowed + wedge1;

      if(*cp1 == *cp0) continue;
      if(*cp1 == *cp2) continue;
      if(*cp1 == *cp3) continue;
      if(*cp1 == *cp4) continue;
      if(*cp1 == *cp5) continue;
      if(*cp1 == *cp6) continue;
      if(*cp1 == *cp7) continue;
      word[1] = *cp1;


      int two = 2, wedge2 = 0, skipped2 = 0;
 
      for(int q = 0 ; q < 62 ; q++)
      {
    
        if(wedge2 == 61)
        {
          wedge2 = 0;
          wedge2 = skipped2++;
        }
        else if(skipped2 > 0) wedge2++;
        else wedge2 = q + two;

        cp2 = allowed + wedge2;

        if(*cp2 == *cp0) continue;
        if(*cp2 == *cp1) continue;
        if(*cp2 == *cp3) continue;
        if(*cp2 == *cp4) continue;
        if(*cp2 == *cp5) continue;
        if(*cp2 == *cp6) continue;
        if(*cp2 == *cp7) continue;
        word[2] = *cp2;


        int three = 3, wedge3 = 0, skipped3 = 0;
 
        for(int p = 0 ; p < 62 ; p++)
        {
    
          if(wedge3 == 61)
          {
            wedge3 = 0;
            wedge3 = skipped3++;
          }
          else if(skipped3 > 0) wedge3++;
          else wedge3 = p + three;

          cp3 = allowed + wedge3;

          if(*cp3 == *cp0) continue;
          if(*cp3 == *cp1) continue;
          if(*cp3 == *cp2) continue;
          if(*cp3 == *cp4) continue;
          if(*cp3 == *cp5) continue;
          if(*cp3 == *cp6) continue;
          if(*cp3 == *cp7) continue;
          word[3] = *cp3;



          int four = 4, wedge4 = 0, skipped4 = 0;
 
          for(int m = 0 ; m < 62 ; m++)
          {
    
            if(wedge4 == 61)
            {
              wedge4 = 0;
              wedge4 = skipped4++;
            }
            else if(skipped4 > 0) wedge4++;
            else wedge4 = m + four;

            cp4 = allowed + wedge4;

            if(*cp4 == *cp0) continue;
            if(*cp4 == *cp1) continue;
            if(*cp4 == *cp2) continue;
            if(*cp4 == *cp3) continue;
            if(*cp4 == *cp5) continue;
            if(*cp4 == *cp6) continue;
            if(*cp4 == *cp7) continue;
            word[4] = *cp4;


            int five = 5, wedge5 = 0, skipped5 = 0;
  
            for(int k = 0 ; k < 62 ; k++)
            {
    
              if(wedge5 == 61)
              {
                wedge5 = 0;
                wedge5 = skipped5++;
              }
              else if(skipped5 > 0) wedge5++;
              else wedge5 = k + five;

              cp5 = allowed + wedge5;

              if(*cp5 == *cp0) continue;
              if(*cp5 == *cp1) continue;
              if(*cp5 == *cp2) continue;
              if(*cp5 == *cp3) continue;
              if(*cp5 == *cp4) continue;
              if(*cp5 == *cp6) continue;
              if(*cp5 == *cp7) continue;
              word[5] = *cp5;



              int six = 6, wedge6 = 0, skipped6 = 0;
  
              for(int j = 0 ; j < 62 ; j++)
              {
    
                if(wedge6 == 61)
                {
                  wedge6 = 0;
                  wedge6 = skipped6++;
                }
                else if(skipped6 > 0) wedge6++;
                else wedge6 = j + six;

                cp6 = allowed + wedge6;

                if(*cp6 == *cp5) continue;
                if(*cp6 == *cp7) continue;
                if(*cp6 == *cp1) continue;
                if(*cp6 == *cp3) continue;
                if(*cp6 == *cp4) continue;
                if(*cp6 == *cp2) continue;
                if(*cp0 == *cp6) continue;
                word[6] = *cp6;


                int seven = 7, wedge = 0, skipped = 0;
  
                for(int i = 0 ; i < 62 ; i++)
                {
                  //wedge = i + seven;
                  if(wedge == 61)
                  {
                    wedge = 0;
                    wedge = skipped++;
                  }
                  else if(skipped > 0) wedge++;
              else wedge = i + seven;

              cp7 = allowed + wedge;

              if(*cp7 == *cp6)continue;
              if(*cp7 == *cp5) continue;
              if (*cp7 == *cp4) continue;
              if (*cp7 == *cp3) continue;
              if (*cp7 == *cp2) continue;
              if (*cp7 == *cp1) continue;
              if (*cp7 == *cp0) continue;
              word[7] = *cp7;

              cout<<word<<"\n";
              myfile<<word<<"\n";
              linenum++;
            }
          }
        }
      }
    }
  }
  }
  }
  cout<<linenum<<" lines created"<< '\n';
  myfile.close();
  

  return 0;
}
