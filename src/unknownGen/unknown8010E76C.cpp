#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_8010E8EC();
extern char lbl_804948F8[];
extern char lbl_80495AD8[];
extern char lbl_80495E90[];
extern char lbl_8055EFA4[8];
extern void *lbl_805621F4;
extern void *lbl_805635F4;
void *fn_8010E7A8();
void *fn_8010E7E4();
void fn_8010E830();
void fn_8010E858();
void *fn_8010E8CC();
}
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8010E76C(){
 if(!lbl_805635F4) lbl_805635F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805635F4;
}
void *fn_8010E7A8(){
 if(!lbl_805635F4 || !(reinterpret_cast<unsigned int *>(lbl_805635F4)[0x24/4]&4)) fn_8010E830();
 return lbl_805635F4;
}
void *fn_8010E7E4(){
 UnknownGenObject8010E7E4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_80495E90;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010E830(){
 fn_80066188((int)fn_8010E858);
}
void fn_8010E858(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635F4,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_8010E8CC,(int)lbl_804948F8,16,(int)fn_8010E7E4,(int)fn_8010E8EC,0,(int)lbl_8055EFA4);
}
void *fn_8010E8CC(){return fn_8010E7A8();}
}
#pragma pop
