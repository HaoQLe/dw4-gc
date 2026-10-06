#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void *fn_80033638();
void fn_80033A14();
void fn_80037938();
void *fn_8003A3BC();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80468414[];
extern char lbl_8046842C[];
extern char lbl_80471914[];
extern char lbl_80472FA0[];
extern char lbl_804735DC[];
extern char lbl_804736D0[];
extern char lbl_80473730[];
extern char lbl_80474018[];
extern char lbl_8055D0A0[6];
extern char lbl_8055D6C8[8];
extern void *lbl_80562004;
extern char lbl_80562008[4];
extern void *lbl_8056200C;
extern void *lbl_80562010;
extern void *lbl_805621F4;
void *fn_80039F58();
void *fn_80039F94();
void fn_80039FEC();
void fn_8003A014();
void *fn_8003A084();
void fn_8003A0A4();
void *fn_8003A160();
void *fn_8003A19C();
void fn_8003A270();
void fn_8003A298();
void *fn_8003A304();
}
struct UnknownGenObject80039F94_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8003A19C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A19C(){fn_800638E0(this);}
};
struct UnknownGenObject8003A19C_0 : UnknownGenRoot8003A19C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8003A19C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8003A19C_1 : UnknownGenObject8003A19C_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject8003A19C_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject8003A19C : UnknownGenObject8003A19C_1 {
 char unknown38[8];
 inline ~UnknownGenObject8003A19C(){unknown00=lbl_804735DC;}
};
extern "C" {
void *fn_80039F58(){
 if(!lbl_80562004 || !(reinterpret_cast<unsigned int *>(lbl_80562004)[0x24/4]&4)) fn_80039FEC();
 return lbl_80562004;
}
void *fn_80039F94(){
 UnknownGenObject80039F94_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80473730;
 object.unknown00=lbl_804736D0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80039FEC(){
 fn_80066188((int)fn_8003A014);
}
void fn_8003A014(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562004,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_8003A084,(int)lbl_80468414,20,(int)fn_80039F94,(int)fn_8003A0A4,0,0);
}
void *fn_8003A084(){return fn_80039F58();}
void fn_8003A0A4(){
 void *meta=lbl_80562004;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8003A3BC();
 field->unknown38=0;
 field->unknown1C=lbl_80562008;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_8003A160(){
 if(!lbl_8056200C || !(reinterpret_cast<unsigned int *>(lbl_8056200C)[0x24/4]&4)) fn_8003A270();
 return lbl_8056200C;
}
void *fn_8003A19C(){
 UnknownGenObject8003A19C object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_804735DC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003A270(){
 fn_80066188((int)fn_8003A298);
}
void fn_8003A298(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056200C,(int)fn_80037938,(int)fn_80033638,(int)fn_8003A304,(int)lbl_8046842C,56,(int)fn_8003A19C,0,0,(int)lbl_8055D6C8);
}
void *fn_8003A304(){return fn_8003A160();}
void fn_8003A324(){
 if(!lbl_80562010){
  void *object=(lbl_80562010=fn_8006546C(lbl_8056200C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80562010));
   reinterpret_cast<short *>(lbl_80562010)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80562010);
  }
 }
}
}
#pragma pop
