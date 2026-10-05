#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D3634();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80489EDC[];
extern char lbl_80493908[];
extern char lbl_8049396C[];
extern char lbl_8055EC28[8];
extern void *lbl_805621F4;
extern void *lbl_80562FF4;
extern void *lbl_80562FF8;
void *fn_800D33A8();
void *fn_800D33E4();
void fn_800D3454();
void fn_800D347C();
void *fn_800D34E8();
}
struct UnknownGenObject800D33E4 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D3334(void *object){
 fn_800D3454();
 return fn_8006546C(lbl_80562FF4,object);
}
void *fn_800D336C(){
 if(!lbl_80562FF4) lbl_80562FF4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562FF4;
}
void *fn_800D33A8(){
 if(!lbl_80562FF4 || !(reinterpret_cast<unsigned int *>(lbl_80562FF4)[0x24/4]&4)) fn_800D3454();
 return lbl_80562FF4;
}
void *fn_800D33E4(){
 UnknownGenObject800D33E4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8049396C;
 object.unknown00=lbl_80493908;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D3454(){
 fn_80066188((int)fn_800D347C);
}
void fn_800D347C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FF4,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D34E8,(int)lbl_80489EDC,20,(int)fn_800D33E4,0,0,(int)lbl_8055EC28);
}
void *fn_800D34E8(){return fn_800D33A8();}
void *fn_800D3508(void *object){
 fn_800D3634();
 return fn_8006546C(lbl_80562FF8,object);
}
void *fn_800D3540(){
 if(!lbl_80562FF8 || !(reinterpret_cast<unsigned int *>(lbl_80562FF8)[0x24/4]&4)) fn_800D3634();
 return lbl_80562FF8;
}
}
#pragma pop
