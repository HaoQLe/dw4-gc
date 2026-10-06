#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80033A14();
void fn_8003A270();
void *fn_8003A3BC();
void *fn_80053998(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80468414[];
extern char lbl_80472FA0[];
extern char lbl_804736D0[];
extern char lbl_80473730[];
extern char lbl_8055D0A0[6];
extern void *lbl_80562004;
extern char lbl_80562008[4];
extern void *lbl_8056200C;
void *fn_80039F58();
void *fn_80039F94();
void fn_80039FEC();
void fn_8003A014();
void *fn_8003A084();
void fn_8003A0A4();
}
struct UnknownGenObject80039F94_0 {
 void *unknown00;
 char unknown04[20];
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
}
#pragma pop
