#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void *fn_80029E64(void *);
void fn_80033584();
void *fn_800336D8();
void fn_80033A14();
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80467440[];
extern char lbl_80472FA0[];
extern char lbl_804756A4[];
extern char lbl_80475704[];
extern char lbl_8055D0A0[6];
extern void *lbl_80561D2C;
extern char lbl_80561D30[4];
extern void *lbl_80561D34;
extern void *lbl_805621F4;
void *fn_8003326C();
void *fn_800332A8();
void fn_80033300();
void fn_80033328();
void *fn_80033398();
void fn_800333B8();
}
struct UnknownGenObject800332A8 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80033230(){
 if(!lbl_80561D2C) lbl_80561D2C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561D2C;
}
void *fn_8003326C(){
 if(!lbl_80561D2C || !(reinterpret_cast<unsigned int *>(lbl_80561D2C)[0x24/4]&4)) fn_80033300();
 return lbl_80561D2C;
}
void *fn_800332A8(){
 UnknownGenObject800332A8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80475704;
 object.unknown00=lbl_804756A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80033300(){
 fn_80066188((int)fn_80033328);
}
void fn_80033328(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D2C,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80033398,(int)lbl_80467440,20,(int)fn_800332A8,(int)fn_800333B8,0,0);
}
void *fn_80033398(){return fn_8003326C();}
void fn_800333B8(){
 void *meta=lbl_80561D2C;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800336D8();
 field->unknown38=0;
 field->unknown1C=lbl_80561D30;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_80033474(){
 if(!lbl_80561D34 || !(reinterpret_cast<unsigned int *>(lbl_80561D34)[0x24/4]&4)) fn_80033584();
 return lbl_80561D34;
}
}
#pragma pop
