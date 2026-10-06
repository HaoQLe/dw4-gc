#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80068128(void *,void *);
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80284294();
extern char lbl_80416CB4[];
extern char lbl_80497C9C[];
extern char lbl_804CBDE8[];
extern void *lbl_80515C54;
extern void *lbl_80515C58;
extern void *lbl_80515C5C;
extern void *lbl_80515C7C;
extern void *lbl_80515C84;
extern void *lbl_80515C88;
extern void *lbl_80515C8C;
extern void *lbl_80515C90;
extern void *lbl_80515C94;
extern void *lbl_80515CAC;
extern void *lbl_80515CBC;
extern void *lbl_80515CC0;
extern void *lbl_80515CC4;
extern void *lbl_80515CC8;
extern void *lbl_80515D24;
extern void *lbl_80515D30;
extern void *lbl_80515D34;
extern void *lbl_80515D38;
extern void *lbl_80515D40;
extern void *lbl_805621F4;
void *fn_802870A0();
void *fn_802870EC();
void fn_80287188();
void fn_802871B0();
void *fn_8028721C();
}
struct UnknownGenRoot802870EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802870EC(){fn_8006665C(this);}
};
struct UnknownGenObject802870EC_0 : UnknownGenRoot802870EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802870EC_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject802870EC : UnknownGenObject802870EC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802870EC(){unknown00=lbl_804CBDE8;}
};
extern "C" {
void *fn_8028704C(){
 if(!lbl_80515D40) lbl_80515D40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515D40;
}
void *fn_802870A0(){
 if(!lbl_80515D40 || !(reinterpret_cast<unsigned int *>(lbl_80515D40)[0x24/4]&4)) fn_80287188();
 return lbl_80515D40;
}
void *fn_802870EC(){
 UnknownGenObject802870EC object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBDE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80287188(){
 fn_80066188((int)fn_802871B0);
}
void fn_802871B0(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515D40,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_8028721C,(int)lbl_80416CB4,12,(int)fn_802870EC,0,0,0);
}
void *fn_8028721C(){return fn_802870A0();}
void *fn_8028723C(){return lbl_80515D34;}
void *fn_8028724C(){return lbl_80515D30;}
void *fn_8028725C(){return lbl_80515D24;}
void *fn_8028726C(){return lbl_80515CC4;}
void *fn_8028727C(){return lbl_80515CBC;}
void fn_8028728C(){}
void *fn_80287290(){return lbl_80515C8C;}
void *fn_802872A0(){return lbl_80515CAC;}
void *fn_802872B0(){return lbl_80515C94;}
void fn_802872C0(int p0,int p1){
 fn_80068128((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
}
void *fn_802872EC(){return lbl_80515C90;}
void *fn_802872FC(){return lbl_80515C88;}
void *fn_8028730C(){return lbl_80515C7C;}
void *fn_8028731C(){return lbl_80515CC0;}
void *fn_8028732C(){return lbl_80515D38;}
void *fn_8028733C(){return lbl_80515C5C;}
void *fn_8028734C(){return lbl_80515C84;}
void *fn_8028735C(){return lbl_80515C54;}
void *fn_8028736C(){return lbl_80515CC8;}
void *fn_8028737C(){return lbl_80515C94;}
void *fn_8028738C(){return lbl_80515D38;}
void *fn_8028739C(){return lbl_80515C8C;}
void *fn_802873AC(){return lbl_80515C58;}
}
#pragma pop
