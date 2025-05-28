//week15_3_zongzi_??
PImage zongzi;
void setup(){
  size(600,400);
  zongzi=loadImage("zongzi.png");
  imageMode(CENTER);
}
float x,y;
void draw(){
  background(#COffee);//模仿week04
  image(zongzi,x,y,120,100);
  y++;
} 
void mousePressed(){
  x=mouseX;
  y=mouseY;
}  
