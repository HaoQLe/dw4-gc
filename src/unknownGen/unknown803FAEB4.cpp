#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803C66A0();
void *fn_803C6700();
void fn_803C6980(int,int);
void *fn_803C6994();
void fn_803C69E0();
void fn_803FA27C(void *,...);
void *fn_803FE1A4();
void fn_803FAF24(int,int,int,int,int,int);
}
extern "C" {
int fn_803FAEB4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+172);}
void *fn_803FAEBC(){return fn_803C66A0();}
void *fn_803FAEDC(){return fn_803C6700();}
int fn_803FAEFC(){return 12319;}
void *fn_803FAF04(){return fn_803C6994();}
void fn_803FAF24(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_803FA27C((void *)p1,(void *)p1,(void *)p2,(void *)p3,(void *)p4,(void *)p5);
}
void fn_803FAF4C(){
 fn_803C69E0();
 fn_803C6980((int)fn_803FAF24,0);
}
void fn_803FAF7C(int p0,int p1,int p2){
 void *value0=fn_803FE1A4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+40)=(void *)p0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+44)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+48)=(void *)p2;
}
}
#pragma pop
