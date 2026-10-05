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
void fn_8012FC48();
void fn_80147E20();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049ED54[];
extern char lbl_804A93E4[];
extern char lbl_804A9448[];
extern char lbl_8055FAD0[8];
extern void *lbl_805621F4;
extern void *lbl_80564238;
extern void *lbl_8056423C;
void *fn_80147B04();
void *fn_80147B40();
void fn_80147BB0();
void fn_80147BD8();
void *fn_80147C44();
}
struct UnknownGenObject80147B40 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80147A90(void *object){
 fn_80147BB0();
 return fn_8006546C(lbl_80564238,object);
}
void *fn_80147AC8(){
 if(!lbl_80564238) lbl_80564238=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564238;
}
void *fn_80147B04(){
 if(!lbl_80564238 || !(reinterpret_cast<unsigned int *>(lbl_80564238)[0x24/4]&4)) fn_80147BB0();
 return lbl_80564238;
}
void *fn_80147B40(){
 UnknownGenObject80147B40 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9448;
 object.unknown00=lbl_804A93E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80147BB0(){
 fn_80066188((int)fn_80147BD8);
}
void fn_80147BD8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564238,(int)fn_8002907C,(int)fn_80024180,(int)fn_80147C44,(int)lbl_8049ED54,20,(int)fn_80147B40,0,0,(int)lbl_8055FAD0);
}
void *fn_80147C44(){return fn_80147B04();}
void *fn_80147C64(){
 if(!lbl_8056423C || !(reinterpret_cast<unsigned int *>(lbl_8056423C)[0x24/4]&4)) fn_80147E20();
 return lbl_8056423C;
}
}
#pragma pop
