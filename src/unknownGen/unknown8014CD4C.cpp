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
void fn_8014D3CC();
void fn_801526C8();
void *fn_801651CC();
void *fn_801652D4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049F7C8[];
extern char lbl_8049F7D8[];
extern char lbl_8049F7E8[];
extern char lbl_804A6460[];
extern char lbl_804A6564[];
extern char lbl_804A70C0[];
extern char lbl_804A8524[];
extern char lbl_804A8940[];
extern char lbl_804A89A4[];
extern char lbl_804A8A08[];
extern char lbl_804A8A6C[];
extern char lbl_804AA8E4[];
extern char lbl_8055FBB0[8];
extern char lbl_8055FBB8[8];
extern void *lbl_805621F4;
extern void *lbl_805643CC;
extern void *lbl_805643D0;
extern void *lbl_805643D4;
extern void *lbl_805643D8;
extern void *lbl_80564558;
void *fn_8014CDC8();
void *fn_8014CE04();
void fn_8014CE74();
void fn_8014CE9C();
void *fn_8014CF08();
void *fn_8014CF9C();
void *fn_8014CFD8();
void fn_8014D048();
void fn_8014D070();
void *fn_8014D0DC();
void *fn_8014D0FC();
void *fn_8014D138();
void fn_8014D1A8();
void fn_8014D1D0();
void *fn_8014D238();
void *fn_8014D258();
}
struct UnknownGenObject8014CE04 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014CFD8 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014D138 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8014CD4C(){return fn_801651CC();}
void *fn_8014CD6C(){return fn_801652D4();}
void *fn_8014CD8C(){
 if(!lbl_805643CC) lbl_805643CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805643CC;
}
void *fn_8014CDC8(){
 if(!lbl_805643CC || !(reinterpret_cast<unsigned int *>(lbl_805643CC)[0x24/4]&4)) fn_8014CE74();
 return lbl_805643CC;
}
void *fn_8014CE04(){
 UnknownGenObject8014CE04 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A8A6C;
 object.unknown00=lbl_804A8A08;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014CE74(){
 fn_80066188((int)fn_8014CE9C);
}
void fn_8014CE9C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643CC,(int)fn_8002907C,(int)fn_80024180,(int)fn_8014CF08,(int)lbl_8049F7C8,20,(int)fn_8014CE04,0,0,(int)lbl_8055FBB0);
}
void *fn_8014CF08(){return fn_8014CDC8();}
void *fn_8014CF28(void *object){
 fn_8014D048();
 return fn_8006546C(lbl_805643D0,object);
}
void *fn_8014CF60(){
 if(!lbl_805643D0) lbl_805643D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805643D0;
}
void *fn_8014CF9C(){
 if(!lbl_805643D0 || !(reinterpret_cast<unsigned int *>(lbl_805643D0)[0x24/4]&4)) fn_8014D048();
 return lbl_805643D0;
}
void *fn_8014CFD8(){
 UnknownGenObject8014CFD8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A89A4;
 object.unknown00=lbl_804A8940;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014D048(){
 fn_80066188((int)fn_8014D070);
}
void fn_8014D070(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643D0,(int)fn_8002907C,(int)fn_80024180,(int)fn_8014D0DC,(int)lbl_8049F7D8,20,(int)fn_8014CFD8,0,0,(int)lbl_8055FBB8);
}
void *fn_8014D0DC(){return fn_8014CF9C();}
void *fn_8014D0FC(){
 if(!lbl_805643D4 || !(reinterpret_cast<unsigned int *>(lbl_805643D4)[0x24/4]&4)) fn_8014D1A8();
 return lbl_805643D4;
}
void *fn_8014D138(){
 UnknownGenObject8014D138 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA8E4;
 object.unknown00=lbl_804A6564;
 object.unknown00=lbl_804A8524;
 object.unknown00=lbl_804A70C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014D1A8(){
 fn_80066188((int)fn_8014D1D0);
}
void fn_8014D1D0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643D4,(int)fn_801526C8,(int)fn_8014D258,(int)fn_8014D238,(int)lbl_8049F7E8,32,(int)fn_8014D138,0,0,0);
}
void *fn_8014D238(){return fn_8014D0FC();}
void *fn_8014D258(){return lbl_80564558;}
void *fn_8014D260(){
 if(!lbl_805643D8 || !(reinterpret_cast<unsigned int *>(lbl_805643D8)[0x24/4]&4)) fn_8014D3CC();
 return lbl_805643D8;
}
}
#pragma pop
