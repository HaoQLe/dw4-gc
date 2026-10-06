#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void fn_8002BE48();
void fn_8002EABC();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80464CEC[];
extern char lbl_80471B6C[];
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_8055D2DC[8];
extern void *lbl_8056189C;
void *fn_8002BC58();
void *fn_8002BC94();
void fn_8002BD8C();
void fn_8002BDB4();
void *fn_8002BE28();
}
struct UnknownGenRoot8002BC94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002BC94(){fn_8006665C(this);}
};
struct UnknownGenObject8002BC94_0 : UnknownGenRoot8002BC94 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002BC94_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002BC94_1 : UnknownGenObject8002BC94_0 {
 inline ~UnknownGenObject8002BC94_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject8002BC94 : UnknownGenObject8002BC94_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8002BC94(){unknown00=lbl_80471B6C;}
};
extern "C" {
void *fn_8002BC20(void *object){
 fn_8002BD8C();
 return fn_8006546C(lbl_8056189C,object);
}
void *fn_8002BC58(){
 if(!lbl_8056189C || !(reinterpret_cast<unsigned int *>(lbl_8056189C)[0x24/4]&4)) fn_8002BD8C();
 return lbl_8056189C;
}
void *fn_8002BC94(){
 UnknownGenObject8002BC94 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_80471B6C;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002BD8C(){
 fn_80066188((int)fn_8002BDB4);
}
void fn_8002BDB4(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056189C,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_8002BE28,(int)lbl_80464CEC,24,(int)fn_8002BC94,(int)fn_8002BE48,0,(int)lbl_8055D2DC);
}
void *fn_8002BE28(){return fn_8002BC58();}
}
#pragma pop
