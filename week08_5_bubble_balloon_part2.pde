//week08_4_bubble_balloon
// 用mouse吹氣球(像泡泡一樣,慢慢變大)
void setup(){
  size(400, 400);//大小
}
int x, y, s;//氣球的座標and氣球的大小
void draw(){
  background(255);//白色的背景
  ellipse(x, y-s/2, s*0.7, s);//瘦瘦的氣球
  if(mousePressed) s++;//一直壓著,才會打氣
  else{
    if(y>s+1) y-=2;
  }
}  
void mousePressed(){//按下mouse改變氣球位置
  x = mouseX;
  y = mouseY;
  s= 1;//大小設成數字1
} 
  
