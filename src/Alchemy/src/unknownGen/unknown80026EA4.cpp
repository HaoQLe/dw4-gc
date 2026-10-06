#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void fn_8002717C();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80463E6C[];
extern char lbl_80472FA0[];
extern char lbl_80476780[];
extern char lbl_804767E4[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D140[8];
extern void *lbl_80561670;
extern void *lbl_80561674;
extern void *lbl_805621F4;
void *fn_80026EE0();
void *fn_80026F1C();
void fn_80026F8C();
void fn_80026FB4();
void *fn_80027020();
}
struct UnknownGenObject80026F1C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80026EA4(){
 if(!lbl_80561670) lbl_80561670=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561670;
}
void *fn_80026EE0(){
 if(!lbl_80561670 || !(reinterpret_cast<unsigned int *>(lbl_80561670)[0x24/4]&4)) fn_80026F8C();
 return lbl_80561670;
}
void *fn_80026F1C(){
 UnknownGenObject80026F1C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804767E4;
 object.unknown00=lbl_80476780;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80026F8C(){
 fn_80066188((int)fn_80026FB4);
}
void fn_80026FB4(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561670,(int)fn_8002907C,(int)fn_80024180,(int)fn_80027020,(int)lbl_80463E6C,20,(int)fn_80026F1C,0,0,(int)lbl_8055D140);
}
void *fn_80027020(){return fn_80026EE0();}
void *fn_80027040(void *object){
 fn_8002717C();
 return fn_8006546C(lbl_80561674,object);
}
void *fn_80027078(){
 if(!lbl_80561674 || !(reinterpret_cast<unsigned int *>(lbl_80561674)[0x24/4]&4)) fn_8002717C();
 return lbl_80561674;
}
}
#pragma pop
