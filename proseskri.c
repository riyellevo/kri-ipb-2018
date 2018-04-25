19:55 Abdul Ghofur int i = 0;
int p=0;
String kode[250];
String kode1[100];
String h;
void setup() {
  Serial.begin(9600);
}

void loop() {
i=i+1;
 
  while (Serial.available() > 0)
  {
    p=p+1;
    kode[p]= Serial.readString();
    h=h+kode[p];
    Serial.print("data masuk :");
    Serial.print(h);
    Serial.println();
    
   
  
  }

    if(kode[i]== "b"){
      if (kode[i-1] == "r" && kode[i+1]=="r"){
          //s
          kode[i]="s";
          kode[i-1]="";
          kode[i+1]="";
          }
      if (kode[i-1] == "r" && kode[i+1]=="s"){
          //l
          kode[i]="l";
          kode[i-1]="";
          kode[i+1]="";
          }
      if (kode[i-1] == "r" && kode[i+1]=="l"){
          //b
          kode[i]="b";
          kode[i-1]="";
          kode[i+1]="";
          }
          
       if (kode[i-1] == "s" && kode[i+1]=="r"){
          //l
          kode[i]="l";
          kode[i-1]="";
          kode[i+1]="";
          }
       if (kode[i-1] == "s" && kode[i+1]=="s"){
          //b
          kode[i]="b";
          kode[i-1]="";
          kode[i+1]="";
          }
       if (kode[i-1] == "s" && kode[i+1]=="l"){
          //r
          kode[i]="r";
          kode[i-1]="";
          kode[i+1]="";
          }
          
       if (kode[i-1] == "l" && kode[i+1]=="r"){
          //b
          kode[i]="b";
          kode[i-1]="";
          kode[i+1]="";
          }
       if (kode[i-1] == "l" && kode[i+1]=="s"){
          //r
          kode[i]="r";
          kode[i-1]="";
          kode[i+1]="";
          }
       if (kode[i-1] == "l" && kode[i+1]=="l"){
          //s
          kode[i]="s";
          kode[i-1]="";
          kode[i+1]=""; 
          }
        }
    
Serial.print("History      :");
Serial.println(h);
Serial.print("Jalan Pintas :");
Serial.println(kode[1]+kode[2]+kode[3]+kode[4]+kode[5]+kode[6]);
if (i>=10){i=0;}
delay(100);
}
