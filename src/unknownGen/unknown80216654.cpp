#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024D1C();
void *fn_80029E64(void *);
void *fn_8002D0F4();
void fn_80033A14();
void *fn_800365B4();
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void fn_8006588C(void *,void *,void *);
void *fn_800658E4(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_80216BCC();
extern char lbl_80472FA0[];
extern char lbl_804BA2C8[];
extern char lbl_804BA318[];
extern char lbl_804BA328[];
extern char lbl_804BCA64[];
extern char lbl_804BCDC0[];
extern char lbl_804BCE20[];
extern char lbl_80560B70[6];
extern char lbl_80560B78[8];
extern char lbl_80560B80[4];
extern char lbl_80560B8C[4];
extern char lbl_80560B90[4];
extern char lbl_80560B94[4];
extern void *lbl_805621F4;
extern void *lbl_805659C4;
extern char lbl_805659C8[4];
extern void *lbl_805659DC;
extern void *lbl_805659E4;
void *fn_80216690();
void *fn_802166CC();
void fn_80216724();
void fn_8021674C();
void *fn_802167BC();
void fn_802167DC();
void *fn_80216898();
void *fn_802168D4();
void fn_8021695C();
void fn_80216984();
void *fn_802169F8();
void fn_80216A18();
void *fn_80216ADC();
void fn_80216B18();
void fn_80216B40();
void *fn_80216BAC();
}
struct UnknownGenObject802166CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot802168D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802168D4(){fn_8006665C(this);}
};
struct UnknownGenObject802168D4 : UnknownGenRoot802168D4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802168D4(){unknown00=lbl_804BCA64;}
};
extern "C" {
void *fn_80216654(){
 if(!lbl_805659C4) lbl_805659C4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805659C4;
}
void *fn_80216690(){
 if(!lbl_805659C4 || !(reinterpret_cast<unsigned int *>(lbl_805659C4)[0x24/4]&4)) fn_80216724();
 return lbl_805659C4;
}
void *fn_802166CC(){
 UnknownGenObject802166CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_804BCE20;
 object.unknown00=lbl_804BCDC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80216724(){
 fn_80066188((int)fn_8021674C);
}
void fn_8021674C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659C4,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_802167BC,(int)lbl_804BA2C8,20,(int)fn_802166CC,(int)fn_802167DC,0,0);
}
void *fn_802167BC(){return fn_80216690();}
void fn_802167DC(){
 void *meta=lbl_805659C4;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560B70));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8002D0F4();
 field->unknown38=0;
 field->unknown1C=lbl_805659C8;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_80216898(){
 if(!lbl_805659DC || !(reinterpret_cast<unsigned int *>(lbl_805659DC)[0x24/4]&4)) fn_8021695C();
 return lbl_805659DC;
}
void *fn_802168D4(){
 UnknownGenObject802168D4 object;
 object.unknown00=lbl_804BCA64;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021695C(){
 fn_80066188((int)fn_80216984);
}
void fn_80216984(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802169F8,(int)lbl_804BA318,12,(int)fn_802168D4,(int)fn_80216A18,0,(int)lbl_80560B78);
}
void *fn_802169F8(){return fn_80216898();}
void fn_80216A18(){
 void *value0=lbl_805659DC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560B80,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_80560B8C,lbl_80560B90,lbl_80560B94,value1);
}
void *fn_80216AA0(){
 if(!lbl_805659E4) lbl_805659E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805659E4;
}
void *fn_80216ADC(){
 if(!lbl_805659E4 || !(reinterpret_cast<unsigned int *>(lbl_805659E4)[0x24/4]&4)) fn_80216B18();
 return lbl_805659E4;
}
void fn_80216B18(){
 fn_80066188((int)fn_80216B40);
}
void fn_80216B40(){
 fn_80216620();
 fn_80066204(1,(int)&lbl_805659E4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80216BAC,(int)lbl_804BA328,8,0,(int)fn_80216BCC,0,0);
}
void *fn_80216BAC(){return fn_80216ADC();}
}
#pragma pop
