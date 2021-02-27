main(){

if(1) return 0;   //这行ok
while(1) return 0;  //ok
2+6;

return 0;    //这行结束
9+6;        //warming,这行代码不会被执行
}
