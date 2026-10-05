#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80047080();
void *fn_800470A0();
void *fn_8006546C(void *,void *);
void fn_80065D94(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_80466C34[];
extern char lbl_804759D8[];
extern void *lbl_80561C2C;
void *fn_800311D4();
void *fn_80031210();
void fn_80031250();
void fn_80031278();
void *fn_800312F0();
void fn_80031310();
void *fn_80031338();
void *fn_80031358();
}
struct UnknownGenObject80031210 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_8003119C(void *object){
 fn_80031250();
 return fn_8006546C(lbl_80561C2C,object);
}
void *fn_800311D4(){
 if(!lbl_80561C2C || !(reinterpret_cast<unsigned int *>(lbl_80561C2C)[0x24/4]&4)) fn_80031250();
 return lbl_80561C2C;
}
void *fn_80031210(){
 UnknownGenObject80031210 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804759D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80031250(){
 fn_80066188((int)fn_80031278);
}
void fn_80031278(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C2C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800312F0,(int)lbl_80466C34,8,(int)fn_80031210,(int)fn_80031310,(int)fn_80031338,0);
}
void *fn_800312F0(){return fn_800311D4();}
void fn_80031310(){
 fn_80065D94((int)fn_80031358);
}
void *fn_80031338(){return fn_80047080();}
void *fn_80031358(){return fn_800470A0();}
}
#pragma pop
