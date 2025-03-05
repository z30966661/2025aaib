//week03_03void_setup_void_draw_if_mousepPressed_else
void setup(){//設定,做一次
  size(400,400);
}
void draw(){ //畫圖,每秒畫60次
  if(mousePressed) background(255,0,0);//紅色
  else background(0,255,0);//綠色
  
}  
