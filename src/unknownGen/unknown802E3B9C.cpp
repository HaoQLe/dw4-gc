#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_8002EABC();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E3ADC();
void fn_802E3B28();
void fn_802E3DB8();
extern char lbl_80420DB8[];
extern char lbl_80420DC8[];
extern char lbl_804D2E18[];
extern char lbl_804D2E20[];
extern char lbl_80535708[];
extern void *lbl_8053570C;
extern void *lbl_805621F4;
void fn_802E3BC4();
void *fn_802E3C38();
void *fn_802E3CAC();
void fn_802E3CF8();
void fn_802E3D20();
void *fn_802E3D98();
}
extern "C" {
void fn_802E3B9C(){
 fn_80066188((int)fn_802E3BC4);
}
void fn_802E3BC4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535708,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E3C38,(int)lbl_80420DB8,20,(int)fn_802E3B28,0,0,(int)lbl_804D2E18);
}
void *fn_802E3C38(){return fn_802E3ADC();}
void *fn_802E3C58(){
 if(!lbl_8053570C) lbl_8053570C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053570C;
}
void *fn_802E3CAC(){
 if(!lbl_8053570C || !(reinterpret_cast<unsigned int *>(lbl_8053570C)[0x24/4]&4)) fn_802E3CF8();
 return lbl_8053570C;
}
void fn_802E3CF8(){
 fn_80066188((int)fn_802E3D20);
}
void fn_802E3D20(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_8053570C,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_802E3D98,(int)lbl_80420DC8,28,0,(int)fn_802E3DB8,0,(int)lbl_804D2E20);
}
void *fn_802E3D98(){return fn_802E3CAC();}
}
#pragma pop
