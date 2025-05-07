//week12_1_happy_bubble_3D_part3
//用mousePressed 按下去,對應陣列,再來畫
void setup(){
  size(300,300,P3D);//開啟3D功能
}
int[][] state=new int[6][6];//state狀況
void draw(){
  background(255,255,0);//黃色的背景
  ortho();//垂直投影
  lights();//打光
  noStroke();//不要有線
  fill(#FF8BEA);//球畫粉色
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){    
      pushMatrix();
      translate(25+j*50, 25+i*50);
      if(state[i][j]==0)sphere(23);//沒按
      else sphere(10);//有按
      popMatrix();
    }  
  }
} 
void mousePressed(){
  int j =(mouseX)/50,i=(mouseY)/50;//座標換算:案哪一個
  state[i][j]=1-state[i][j];
}  
