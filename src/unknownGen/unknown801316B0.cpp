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
void fn_80131B24();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049BEE4[];
extern char lbl_8049BF00[];
extern char lbl_804AAA0C[];
extern char lbl_804AAA70[];
extern char lbl_804AAAD4[];
extern char lbl_804AAB38[];
extern char lbl_8055F51C[8];
extern char lbl_8055F524[8];
extern void *lbl_805621F4;
extern void *lbl_80563B10;
extern void *lbl_80563B14;
extern void *lbl_80563B18;
void *fn_801316EC();
void *fn_80131728();
void fn_80131798();
void fn_801317C0();
void *fn_8013182C();
void *fn_80131888();
void *fn_801318C4();
void fn_80131934();
void fn_8013195C();
void *fn_801319C8();
}
struct UnknownGenObject80131728 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801318C4 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801316B0(){
 if(!lbl_80563B10) lbl_80563B10=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B10;
}
void *fn_801316EC(){
 if(!lbl_80563B10 || !(reinterpret_cast<unsigned int *>(lbl_80563B10)[0x24/4]&4)) fn_80131798();
 return lbl_80563B10;
}
void *fn_80131728(){
 UnknownGenObject80131728 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AAB38;
 object.unknown00=lbl_804AAAD4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131798(){
 fn_80066188((int)fn_801317C0);
}
void fn_801317C0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B10,(int)fn_8002907C,(int)fn_80024180,(int)fn_8013182C,(int)lbl_8049BEE4,20,(int)fn_80131728,0,0,(int)lbl_8055F51C);
}
void *fn_8013182C(){return fn_801316EC();}
void *fn_8013184C(){
 if(!lbl_80563B14) lbl_80563B14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B14;
}
void *fn_80131888(){
 if(!lbl_80563B14 || !(reinterpret_cast<unsigned int *>(lbl_80563B14)[0x24/4]&4)) fn_80131934();
 return lbl_80563B14;
}
void *fn_801318C4(){
 UnknownGenObject801318C4 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AAA70;
 object.unknown00=lbl_804AAA0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131934(){
 fn_80066188((int)fn_8013195C);
}
void fn_8013195C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B14,(int)fn_8002907C,(int)fn_80024180,(int)fn_801319C8,(int)lbl_8049BF00,20,(int)fn_801318C4,0,0,(int)lbl_8055F524);
}
void *fn_801319C8(){return fn_80131888();}
void *fn_801319E8(void *object){
 fn_80131B24();
 return fn_8006546C(lbl_80563B18,object);
}
void *fn_80131A20(){
 if(!lbl_80563B18 || !(reinterpret_cast<unsigned int *>(lbl_80563B18)[0x24/4]&4)) fn_80131B24();
 return lbl_80563B18;
}
}
#pragma pop
