/ week11_5_happy_bubble_part1
PImage toy1, toy2, toy3; // �ܼƫŧi
PImage [] toys = new PImage[200];//Java���}�C,�}�ܦh
int N=0;//�{�b��N�i�p�Ϥ��A�ϥ�
int [] x=new int[200];//200�ӹϤ����y��
int [] y=new int[200];//200�ӹϤ����y��
// int a, b; �ܹ����e�йL�� int ��ƫŧi
void setup(){
  size(400, 495);
  toy1 = loadImage("toy1.jpg");
  toy2 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1); // ���1�i�Ϸ�I��,���e�n�ۦP
  for(int i=0;i<N;i++){//�w��C�i�p�Ϥ��Ӯy�жK�W��
    image(toys[i],x[i]-25,y[i]-25);
  }
  //if(mousePressed && toy3 != null) image(toy3, mouseX-25, mouseY-25);
}
void mousePressed(){
  x[N]=mouseX;
  y[N]=mouseY;
  toys[N]=toy2.get(mouseX-25,mouseY-25,50,50);
  N++;
  //toy3 = toy2.get(mouseX-25, mouseY-25, 50, 50);
}
