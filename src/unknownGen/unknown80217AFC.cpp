#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void *fn_80024D1C();
void fn_8002907C();
void fn_80029694();
void *fn_80029E64(void *);
void fn_80033A14();
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011FFD8();
void fn_80216620();
void fn_802181E0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_804BA56C[];
extern char lbl_804BA5A4[];
extern char lbl_804BA5C4[];
extern char lbl_804BC224[];
extern char lbl_804BC288[];
extern char lbl_804BC2EC[];
extern char lbl_804BC350[];
extern char lbl_804BC474[];
extern char lbl_804BC4D4[];
extern char lbl_80560B70[6];
extern char lbl_80560C14[8];
extern char lbl_80560C1C[8];
extern void *lbl_805621F4;
extern void *lbl_80565A4C;
extern char lbl_80565A50[4];
extern void *lbl_80565A58;
extern void *lbl_80565A5C;
extern void *lbl_80565A60;
void *fn_80217B70();
void *fn_80217BAC();
void fn_80217C04();
void fn_80217C2C();
void *fn_80217C9C();
void fn_80217CBC();
void *fn_80217DB4();
void *fn_80217DF0();
void fn_80217E60();
void fn_80217E88();
void *fn_80217EF4();
void *fn_80217F88();
void *fn_80217FC4();
void fn_80218034();
void fn_8021805C();
void *fn_802180C8();
}
struct UnknownGenObject80217BAC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217DF0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80217FC4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80217AFC(void *object){
 fn_80217C04();
 return fn_8006546C(lbl_80565A4C,object);
}
void *fn_80217B34(){
 if(!lbl_80565A4C) lbl_80565A4C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565A4C;
}
void *fn_80217B70(){
 if(!lbl_80565A4C || !(reinterpret_cast<unsigned int *>(lbl_80565A4C)[0x24/4]&4)) fn_80217C04();
 return lbl_80565A4C;
}
void *fn_80217BAC(){
 UnknownGenObject80217BAC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_804BC4D4;
 object.unknown00=lbl_804BC474;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80217C04(){
 fn_80066188((int)fn_80217C2C);
}
void fn_80217C2C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A4C,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80217C9C,(int)lbl_804BA56C,20,(int)fn_80217BAC,(int)fn_80217CBC,0,0);
}
void *fn_80217C9C(){return fn_80217B70();}
void fn_80217CBC(){
 void *meta=lbl_80565A4C;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560B70));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8011FFD8();
 field->unknown38=0;
 field->unknown1C=lbl_80565A50;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_80217D78(){
 if(!lbl_80565A58) lbl_80565A58=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565A58;
}
void *fn_80217DB4(){
 if(!lbl_80565A58 || !(reinterpret_cast<unsigned int *>(lbl_80565A58)[0x24/4]&4)) fn_80217E60();
 return lbl_80565A58;
}
void *fn_80217DF0(){
 UnknownGenObject80217DF0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804BC350;
 object.unknown00=lbl_804BC2EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80217E60(){
 fn_80066188((int)fn_80217E88);
}
void fn_80217E88(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A58,(int)fn_80029694,(int)fn_80023FDC,(int)fn_80217EF4,(int)lbl_804BA5A4,20,(int)fn_80217DF0,0,0,(int)lbl_80560C14);
}
void *fn_80217EF4(){return fn_80217DB4();}
void *fn_80217F14(void *object){
 fn_80218034();
 return fn_8006546C(lbl_80565A5C,object);
}
void *fn_80217F4C(){
 if(!lbl_80565A5C) lbl_80565A5C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565A5C;
}
void *fn_80217F88(){
 if(!lbl_80565A5C || !(reinterpret_cast<unsigned int *>(lbl_80565A5C)[0x24/4]&4)) fn_80218034();
 return lbl_80565A5C;
}
void *fn_80217FC4(){
 UnknownGenObject80217FC4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804BC288;
 object.unknown00=lbl_804BC224;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80218034(){
 fn_80066188((int)fn_8021805C);
}
void fn_8021805C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A5C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802180C8,(int)lbl_804BA5C4,20,(int)fn_80217FC4,0,0,(int)lbl_80560C1C);
}
void *fn_802180C8(){return fn_80217F88();}
void *fn_802180E8(void *object){
 fn_802181E0();
 return fn_8006546C(lbl_80565A60,object);
}
void *fn_80218120(){
 if(!lbl_80565A60) lbl_80565A60=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565A60;
}
void *fn_8021815C(){
 if(!lbl_80565A60 || !(reinterpret_cast<unsigned int *>(lbl_80565A60)[0x24/4]&4)) fn_802181E0();
 return lbl_80565A60;
}
}
#pragma pop
