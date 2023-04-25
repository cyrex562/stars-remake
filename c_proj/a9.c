

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong __stdcall16far
MINEWNDPROC(HWND16 param_1,undefined2 param_2_00,HBRUSH16 param_3,ulong param_4)

{
  int16 *piVar1;
  int iVar2;
  bool16 bVar3;
  uint uVar4;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined *hCursor;
  undefined2 unaff_DI;
  PAINTSTRUCT16 *unaff_SS;
  COLORREF CVar5;
  COLORREF CVar6;
  ulong uVar7;
  POINT16 *in_stack_0000ffbe;
  undefined in_stack_0000ffc0;
  undefined uVar8;
  undefined in_stack_0000ffc1;
  WPARAM16 in_stack_0000ffc6;
  undefined2 in_stack_0000ffc8;
  undefined2 in_stack_0000ffca;
  undefined2 in_stack_0000ffcc;
  undefined2 in_stack_0000ffce;
  undefined2 in_stack_0000ffd0;
  undefined2 in_stack_0000ffd2;
  undefined2 in_stack_0000ffd4;
  undefined2 in_stack_0000ffd6;
  HDC16 in_stack_0000ffd8;
  HDC16 in_stack_0000ffda;
  undefined in_stack_0000ffdc [12];
  undefined2 in_stack_0000ffe8;
  int in_stack_0000ffea;
  undefined4 in_stack_0000ffec;
  int in_stack_0000fff0;
  int in_stack_0000fff2;
  int in_stack_0000fff4;
  undefined2 in_stack_0000fff6;
  RECT16 *in_stack_0000fff8;
  int in_stack_0000fffa;

  uVar8 = (undefined)(param_4 >> 0x10);
  if ((uint)param_4 == 0x14) {
    GETCLIENTRECT((HWND16)&stack0xffe6,
                  (RECT16 *)(param_4 & 0xff000000 | (ulong)CONCAT12(uVar8,unaff_SS)));
    FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HDC16)&stack0xffe6,(RECT16 *)unaff_SS,param_3);
LAB_1008_7b56:
    uVar4 = 1;
  }
  else {
    if ((uint)param_4 < 0x15) {
      if ((uint)param_4 == 1) {
        FUN_1008_97da();
      }
      else {
        if ((uint)param_4 != 0xf) goto LAB_1008_7bde;
        piVar1 = (int16 *)BEGINPAINT((HWND16)&stack0xffc6,
                                     (PAINTSTRUCT16 *)
                                     (param_4 & 0xff000000 | (ulong)CONCAT12(uVar8,unaff_SS)));
        GETCLIENTRECT((HWND16)&stack0xffe6,(RECT16 *)(param_4 & 0xffff0000 | ZEXT24(unaff_SS)));
        SETRECT((RECT16 *)
                CONCAT22(in_stack_0000ffea + -4,(int)(PTR_DAT_10a8_0000_10a8_5794 + -2) * 2),
                (int16)CONCAT214(in_stack_0000ffca,
                                 CONCAT212(in_stack_0000ffc8,
                                           CONCAT210(in_stack_0000ffc6,
                                                     CONCAT28(unaff_DI,CONCAT26(unaff_SS,CONCAT15((
                                                  char)((uint)&stack0xffee >> 8),
                                                  CONCAT14((char)&stack0xffee,0x40004))))))),
                (int16)CONCAT214(in_stack_0000ffda,
                                 CONCAT212(in_stack_0000ffd8,
                                           CONCAT210(in_stack_0000ffd6,
                                                     CONCAT28(in_stack_0000ffd4,
                                                              CONCAT26(in_stack_0000ffd2,
                                                                       CONCAT24(in_stack_0000ffd0,
                                                                                CONCAT22(
                                                  in_stack_0000ffce,in_stack_0000ffcc))))))),
                (int16)CONCAT214(in_stack_0000ffea,CONCAT212(in_stack_0000ffe8,in_stack_0000ffdc)),
                (int16)CONCAT214(in_stack_0000fffa,
                                 CONCAT212(in_stack_0000fff8,
                                           CONCAT210(in_stack_0000fff6,
                                                     CONCAT28(in_stack_0000fff4,
                                                              CONCAT26(in_stack_0000fff2,
                                                                       CONCAT24(in_stack_0000fff0,
                                                                                in_stack_0000ffec)))
                                                    ))));
        FUN_1018_5bba((undefined *)piVar1,(undefined4 *)&stack0xffee,0,unaff_DI,in_stack_0000ffc6,
                      in_stack_0000ffc8,in_stack_0000ffca,in_stack_0000ffcc,in_stack_0000ffce,
                      in_stack_0000ffd0,in_stack_0000ffd2,in_stack_0000ffd4,in_stack_0000ffd6,
                      in_stack_0000ffd8,in_stack_0000ffda);
        CVar5 = SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_5910,
                             CONCAT22(piVar1,(int)((ulong)_PTR_DAT_10a8_0000_10a8_5910 >> 0x10)));
        CVar6 = SETBKCOLOR((HDC16)_DAT_10a8_5714,
                           CONCAT22(piVar1,(int)((ulong)_DAT_10a8_5714 >> 0x10)));
        FUN_1018_5580(piVar1,(int *)&stack0xffee,(LPCSTR)0x58b6,
                      (int16)CONCAT214(in_stack_0000ffd2,
                                       CONCAT212(in_stack_0000ffd0,
                                                 CONCAT210(in_stack_0000ffce,
                                                           CONCAT28(in_stack_0000ffcc,
                                                                    CONCAT26(in_stack_0000ffca,
                                                                             CONCAT24(
                                                  in_stack_0000ffc8,
                                                  CONCAT22(in_stack_0000ffc6,unaff_DI))))))));
        SETTEXTCOLOR((HDC16)CVar5.value,(COLORREF)CONCAT22(piVar1,(int)(CVar5.value >> 0x10)));
        SETBKCOLOR((HDC16)CVar6.value,(COLORREF)CONCAT22(piVar1,(int)(CVar6.value >> 0x10)));
        SETRECT((RECT16 *)CONCAT22(in_stack_0000fff2 + -4,in_stack_0000fff4 + -2),
                (int16)CONCAT214(in_stack_0000ffca,
                                 CONCAT212(in_stack_0000ffc8,
                                           CONCAT210(in_stack_0000ffc6,
                                                     CONCAT28(unaff_DI,CONCAT26(unaff_SS,CONCAT15((
                                                  char)((uint)&stack0xffee >> 8),
                                                  CONCAT14((char)&stack0xffee,
                                                           CONCAT22((in_stack_0000fff0 -
                                                                    in_stack_0000fff4) +
                                                                    in_stack_0000fff2 + 2,
                                                                    in_stack_0000fff0 + 3)))))))),
                (int16)CONCAT214(in_stack_0000ffda,
                                 CONCAT212(in_stack_0000ffd8,
                                           CONCAT210(in_stack_0000ffd6,
                                                     CONCAT28(in_stack_0000ffd4,
                                                              CONCAT26(in_stack_0000ffd2,
                                                                       CONCAT24(in_stack_0000ffd0,
                                                                                CONCAT22(
                                                  in_stack_0000ffce,in_stack_0000ffcc))))))),
                (int16)CONCAT214(in_stack_0000ffea,CONCAT212(in_stack_0000ffe8,in_stack_0000ffdc)),
                (int16)CONCAT214((int)CVar5.value,
                                 CONCAT212((int)(CVar6.value >> 0x10),
                                           CONCAT210((int)CVar6.value,
                                                     CONCAT28(in_stack_0000fff4,
                                                              CONCAT26(in_stack_0000fff2,
                                                                       CONCAT24(in_stack_0000fff0,
                                                                                in_stack_0000ffec)))
                                                    ))));
        iVar2 = FUN_1008_9af2();
        FUN_1008_9894((HRGN16)piVar1,(int *)&stack0xffee,iVar2,CONCAT22(in_stack_0000ffc6,unaff_DI),
                      in_stack_0000ffc8,
                      CONCAT212(in_stack_0000ffd6,
                                CONCAT210(in_stack_0000ffd4,
                                          CONCAT28(in_stack_0000ffd2,
                                                   CONCAT26(in_stack_0000ffd0,
                                                            CONCAT24(in_stack_0000ffce,
                                                                     CONCAT22(in_stack_0000ffcc,
                                                                              in_stack_0000ffca)))))
                               ),in_stack_0000ffd8,in_stack_0000ffda,
                      CONCAT212(in_stack_0000ffe8,in_stack_0000ffdc),in_stack_0000ffea,
                      CONCAT212((int)(CVar6.value >> 0x10),
                                CONCAT210((int)CVar6.value,
                                          CONCAT28(in_stack_0000fff4,
                                                   CONCAT26(in_stack_0000fff2,
                                                            CONCAT24(in_stack_0000fff0,
                                                                     in_stack_0000ffec))))),
                      (int)CVar5.value,(int)(CVar5.value >> 0x10),unaff_BP);
        FUN_1008_7d40(piVar1,(undefined4 *)&stack0xffe6);
        ENDPAINT((HWND16)&stack0xffc6,unaff_SS);
      }
    }
    else {
      if ((uint)param_4 == 0x20) {
        in_stack_0000ffbe = (POINT16 *)&stack0xfff8;
        in_stack_0000ffc0 = SUB21(unaff_SS,0);
        in_stack_0000ffc1 = (undefined)((uint)unaff_SS >> 8);
        GETCURSORPOS(in_stack_0000ffbe);
        SCREENTOCLIENT((HWND16)&stack0xfff8,
                       (POINT16 *)(param_4 & 0xff000000 | (ulong)CONCAT12(uVar8,unaff_SS)));
        GETCLIENTRECT((HWND16)&stack0xfff0,
                      (RECT16 *)(param_4 & 0xff000000 | (ulong)CONCAT12(uVar8,unaff_SS)));
        bVar3 = PTINRECT(in_stack_0000fff8,SUB21(in_stack_0000fffa,0));
        if ((bVar3 == 0) ||
           (uVar4 = FUN_1008_911c(param_4._2_2_,(int)in_stack_0000fff8,in_stack_0000fffa),
           uVar4 == 0)) goto LAB_1008_7bde;
        hCursor = PTR_DAT_10a8_0000_10a8_7ad0;
        if (uVar4 == 9) {
          hCursor = PTR_DAT_10a8_0000_10a8_834a;
        }
        SETCURSOR((HCURSOR16)hCursor);
        goto LAB_1008_7b56;
      }
      if (((uint)param_4 != 0x201) &&
         (((uint)param_4 - 0x201 < 2 || ((uint)param_4 != 0x203 && (uint)param_4 != 0x204)))) {
LAB_1008_7bde:
        uVar7 = DEFWINDOWPROC(param_1,(uint16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111(
                                                  in_stack_0000ffc1,
                                                  CONCAT110(in_stack_0000ffc0,
                                                            CONCAT28(in_stack_0000ffbe,
                                                                     CONCAT17((char)(param_4 >> 0x18
                                                                                    ),CONCAT16(uVar8
                                                  ,CONCAT24((uint)param_4,
                                                            CONCAT13((char)(param_3 >> 8),
                                                                     CONCAT12((char)param_3,
                                                                              param_2_00)))))))))),
                              in_stack_0000ffc6,CONCAT22(in_stack_0000ffca,in_stack_0000ffc8));
        return uVar7;
      }
      if (PTR_DAT_10a8_0000_10a8_1142 == (undefined *)0x0) {
        FUN_1008_932c(CONCAT13((char)((uint)param_2_00 >> 8),CONCAT12((char)param_2_00,param_1)),
                      (uint)param_4);
      }
    }
    uVar4 = 0;
  }
  return (ulong)uVar4;
}



void __cdecl16far FUN_1008_7bf4(void)

{
  char *pcVar1;
  int16 *__return_storage_ptr__;
  int16 *__return_storage_ptr___00;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  HRGN16 unaff_SI;
  HRGN16 unaff_DI;
  char *pcVar5;
  bool16 unaff_SS;
  dword dVar6;
  int16 *piVar7;
  undefined2 in_stack_0000ffe8;
  undefined2 in_stack_0000ffea;
  undefined2 in_stack_0000ffec;
  undefined2 in_stack_0000ffee;
  int in_stack_0000fff0;
  undefined2 in_stack_0000fff2;
  int in_stack_0000fff4;
  undefined2 in_stack_0000fff6;

  GETCLIENTRECT((HWND16)&stack0xfff0,(RECT16 *)CONCAT22(PTR_DAT_10a8_0000_10a8_00c8,unaff_SS));
  __return_storage_ptr__ = (int16 *)GETDC((HWND16)PTR_DAT_10a8_0000_10a8_00c8);
  __return_storage_ptr___00 =
       SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c4,(HRGN16)__return_storage_ptr__,unaff_SI,
                    unaff_DI,(int16)CONCAT214(in_stack_0000fff6,
                                              CONCAT212(in_stack_0000fff4,
                                                        CONCAT210(in_stack_0000fff2,
                                                                  CONCAT28(in_stack_0000fff0,
                                                                           CONCAT26(
                                                  in_stack_0000ffee,
                                                  CONCAT24(in_stack_0000ffec,
                                                           CONCAT22(in_stack_0000ffea,
                                                                    in_stack_0000ffe8))))))));
  piVar7 = __return_storage_ptr__;
  uVar2 = FUN_1018_5112(0x185);
  dVar6 = GETTEXTEXTENT(5,(LPCSTR)CONCAT22(0x10a8,uVar2),
                        (int16)CONCAT214(in_stack_0000fff0,
                                         CONCAT212(in_stack_0000ffee,
                                                   CONCAT210(in_stack_0000ffec,
                                                             CONCAT28(in_stack_0000ffea,
                                                                      CONCAT26(in_stack_0000ffe8,
                                                                               CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,piVar7))))))));
  in_stack_0000fff4 = in_stack_0000fff4 - ((int)dVar6 + 6);
  SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)__return_storage_ptr__,unaff_SI,unaff_DI
               ,(int16)CONCAT214(in_stack_0000fff6,
                                 CONCAT212(in_stack_0000fff4,
                                           CONCAT210(in_stack_0000fff2,
                                                     CONCAT28(in_stack_0000fff0,
                                                              CONCAT26(in_stack_0000ffee,
                                                                       CONCAT24(in_stack_0000ffec,
                                                                                CONCAT22(
                                                  in_stack_0000ffea,in_stack_0000ffe8))))))));
  piVar7 = __return_storage_ptr__;
  uVar2 = FUN_1018_5112(0x186);
  GETTEXTEXTENT(0x15,(LPCSTR)CONCAT22(0x10a8,uVar2),
                (int16)CONCAT214(in_stack_0000fff0,
                                 CONCAT212(in_stack_0000ffee,
                                           CONCAT210(in_stack_0000ffec,
                                                     CONCAT28(in_stack_0000ffea,
                                                              CONCAT26(in_stack_0000ffe8,
                                                                       CONCAT24(unaff_DI,CONCAT22(
                                                  unaff_SI,piVar7))))))));
  uVar4 = 0xffff;
  pcVar5 = PTR_s_Temperature_10a8_061e_10a8_0636;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  dVar6 = GETTEXTEXTENT(~uVar4 - 1,(LPCSTR)CONCAT22(0x10a8,PTR_s_Temperature_10a8_061e_10a8_0636),
                        (int16)CONCAT214(in_stack_0000fff0,
                                         CONCAT212(in_stack_0000ffee,
                                                   CONCAT210(in_stack_0000ffec,
                                                             CONCAT28(in_stack_0000ffea,
                                                                      CONCAT26(in_stack_0000ffe8,
                                                                               CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,__return_storage_ptr__))))))));
  iVar3 = (int)dVar6 + 6;
  if (in_stack_0000fff4 < iVar3 * 4) {
    dVar6 = GETTEXTEXTENT(4,(LPCSTR)CONCAT22(0x10a8,PTR_s_Temperature_10a8_061e_10a8_0636),
                          (int16)CONCAT214(in_stack_0000fff0,
                                           CONCAT212(in_stack_0000ffee,
                                                     CONCAT210(in_stack_0000ffec,
                                                               CONCAT28(in_stack_0000ffea,
                                                                        CONCAT26(in_stack_0000ffe8,
                                                                                 CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,__return_storage_ptr__))))))));
    iVar3 = (int)dVar6 + 6;
  }
  SELECTOBJECT(__return_storage_ptr___00,(HRGN16)__return_storage_ptr__,unaff_SI,unaff_DI,
               (int16)CONCAT214(in_stack_0000fff6,
                                CONCAT212(in_stack_0000fff4,
                                          CONCAT210(in_stack_0000fff2,
                                                    CONCAT28(in_stack_0000fff0 + iVar3,
                                                             CONCAT26(in_stack_0000ffee,
                                                                      CONCAT24(in_stack_0000ffec,
                                                                               CONCAT22(
                                                  in_stack_0000ffea,in_stack_0000ffe8))))))));
  RELEASEDC(__return_storage_ptr__,(HWND16)PTR_DAT_10a8_0000_10a8_00c8,unaff_SI);
  INVALIDATERECT(1,(RECT16 *)&stack0xffe8,unaff_SS);
  INVALIDATERECT(0,(RECT16 *)&stack0xfff0,unaff_SS);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_1008_7d40(int16 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  unkbyte10 Var6;
  undefined8 uVar7;
  undefined3 uVar8;
  ulong uVar9;
  int *piVar10;
  int16 *piVar11;
  uint *puVar12;
  undefined *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  int iVar16;
  HDC16 HVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  int iVar22;
  int16 *piVar23;
  ulong uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  VA_LIST16 unaff_SI;
  undefined *puVar29;
  VA_LIST16 unaff_DI;
  undefined2 *puVar30;
  undefined2 *puVar31;
  undefined2 uVar32;
  RECT16 *unaff_SS;
  dword dVar33;
  RECT16 *pRVar34;
  int iVar35;
  uint in_stack_0000fefe;
  int16 *in_stack_0000ff00;
  int in_stack_0000ff02;
  undefined2 in_stack_0000ff04;
  undefined2 in_stack_0000ff06;
  int in_stack_0000ff08;
  int in_stack_0000ff0a;
  int in_stack_0000ff0c;
  undefined2 in_stack_0000ff0e;
  undefined2 in_stack_0000ff10;
  undefined2 in_stack_0000ff12;
  undefined2 in_stack_0000ff14;
  undefined2 in_stack_0000ff16;
  undefined2 in_stack_0000ff18;
  undefined2 in_stack_0000ff1a;
  undefined2 in_stack_0000ff1c;
  undefined2 in_stack_0000ff1e;
  undefined2 in_stack_0000ff20;
  undefined2 in_stack_0000ff22;
  undefined2 in_stack_0000ff24;
  undefined2 in_stack_0000ff26;
  HDC16 in_stack_0000ff28;
  undefined4 in_stack_0000ff2a;
  dword in_stack_0000ff2e;
  undefined4 in_stack_0000ff32;
  void *in_stack_0000ff36;
  bitmapinfo *in_stack_0000ff38;
  undefined in_stack_0000ff3a [16];
  dword in_stack_0000ff4a;
  undefined4 local_92;
  byte local_8e;
  byte local_8d;
  uint local_8c [6];
  char local_80 [6];
  uint local_7a;
  uint local_70 [8];
  long local_60;
  int local_5c;
  int16 *local_56;
  int16 *local_54;
  undefined4 local_52;
  undefined4 local_4e;
  int local_4a [2];
  int local_46;
  int local_42 [5];
  char local_38 [2];
  undefined2 local_36 [3];
  int16 *local_30;
  int local_2e;
  int local_2c;
  int local_2a;
  int local_28;
  VA_LIST16 local_26;
  undefined *local_24;
  undefined4 local_22;
  COLORREF local_1e;
  COLORREF local_1a;
  undefined4 local_16;
  undefined4 local_12;
  int16 *local_e;
  HDC16 local_c;
  undefined2 local_a;
  int16 *local_8;
  undefined4 local_6;

  local_54 = (int16 *)CREATECOMPATIBLEDC((HDC16)param_1);
  local_1a = SETBKCOLOR((HDC16)_DAT_10a8_5714,CONCAT22(param_1,(int)((ulong)_DAT_10a8_5714 >> 0x10))
                       );
  local_1e = SETTEXTCOLOR(0xffff,(COLORREF)(ZEXT24(param_1) << 0x10));
  local_56 = SETBKMODE((int16 *)&DAT_10a8_0002,(HDC16)param_1,
                       (int16)CONCAT214(in_stack_0000ff08,
                                        CONCAT212(in_stack_0000ff06,
                                                  CONCAT210(in_stack_0000ff04,
                                                            CONCAT28(in_stack_0000ff02,
                                                                     CONCAT26(in_stack_0000ff00,
                                                                              CONCAT24(
                                                  in_stack_0000fefe,CONCAT22(unaff_DI,unaff_SI))))))
                                       ));
  puVar29 = PTR_DAT_10a8_0000_10a8_7b58;
  if (PTR_DAT_10a8_0000_10a8_7b58 == (undefined *)&PTR_LOOP_10a8_0004) {
    if (((byte)PTR_DAT_10a8_0000_10a8_7b5a & 1) == 0) {
      puVar29 = (undefined *)(-(uint)(((byte)PTR_DAT_10a8_0000_10a8_7b5a & 2) != 0) & 2);
    }
    else {
      puVar29 = (undefined *)&DAT_10a8_0001;
    }
  }
  local_a = CONCAT11(local_a._1_1_,(byte)local_a);
  if (puVar29 != (undefined *)0x0) {
    if (puVar29 == (undefined *)&DAT_10a8_0002) {
      local_16 = 0;
      local_a = CONCAT11(local_a._1_1_,(byte)local_a);
      if (PTR_DAT_10a8_0000_10a8_7b5e != (undefined *)0xffff) {
        iVar25 = *(int *)param_2;
        iVar22 = *(int *)((int)param_2 + 2);
        local_24 = (undefined *)(iVar22 + 6);
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0016,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar25 +
                                                                                            6,
                                                  CONCAT26(local_24,0x46000200f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(in_stack_0000ff14,
                                                                      CONCAT24(in_stack_0000ff12,
                                                                               CONCAT22(
                                                  in_stack_0000ff10,in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar25 +
                                                                                            6,
                                                  CONCAT26(iVar22 + 8,0x2004400f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(in_stack_0000ff14,
                                                                      CONCAT24(in_stack_0000ff12,
                                                                               CONCAT22(
                                                  in_stack_0000ff10,in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        iVar16 = iVar25 + 0x16;
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar16,
                                                  CONCAT26(iVar22 + 0x4a,0x2002600f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(in_stack_0000ff1a,
                                                 CONCAT210(in_stack_0000ff18,
                                                           CONCAT28(in_stack_0000ff16,
                                                                    CONCAT26(in_stack_0000ff14,
                                                                             CONCAT24(
                                                  in_stack_0000ff12,
                                                  CONCAT22(in_stack_0000ff10,in_stack_0000ff0e))))))
                               ),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        local_30 = SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0014,(HRGN16)param_1,
                                (HRGN16)unaff_SI,(HRGN16)unaff_DI,
                                (int16)CONCAT214(in_stack_0000ff0c,
                                                 CONCAT212(in_stack_0000ff0a,
                                                           CONCAT210(in_stack_0000ff08,
                                                                     CONCAT28(in_stack_0000ff06,
                                                                              CONCAT26(
                                                  in_stack_0000ff04,
                                                  CONCAT24(in_stack_0000ff02,
                                                           CONCAT22(in_stack_0000ff00,
                                                                    in_stack_0000fefe))))))));
        iVar19 = iVar25 + 8;
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar19,
                                                  CONCAT26(iVar22 + 0x4a,0xf000100f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(in_stack_0000ff18,
                                                                  CONCAT28(in_stack_0000ff16,
                                                                           CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar25 +
                                                                                            7,
                                                  CONCAT26(iVar22 + 0x4b,0xf000100f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(in_stack_0000ff18,
                                                                  CONCAT28(in_stack_0000ff16,
                                                                           CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        iVar21 = iVar25 + 0x3a;
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar21,
                                                  CONCAT26(iVar22 + 0x4a,0x12000200f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(iVar21,CONCAT28(in_stack_0000ff16,
                                                                                  CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar25 +
                                                                                            0x4a,
                                                  CONCAT26(iVar22 + 8,0x2004200f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(iVar21,CONCAT28(in_stack_0000ff16,
                                                                                  CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar25 +
                                                                                            0x4b,
                                                  CONCAT26(iVar22 + 7,0x1000100f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(iVar21,CONCAT28(in_stack_0000ff16,
                                                                                  CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar25 +
                                                                                            0x17,
                                                  CONCAT26(iVar22 + 0x6e,0x25000200f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(iVar21,CONCAT28(in_stack_0000ff16,
                                                                                  CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar16,
                                                  CONCAT26(iVar22 + 0x6f,0x1000100f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(iVar21,CONCAT28(in_stack_0000ff16,
                                                                                  CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar21,
                                                  CONCAT26(iVar22 + 0x4c,0x2002200f0))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(iVar21,CONCAT28(in_stack_0000ff16,
                                                                                  CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x42,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar19,
                                                  CONCAT26(iVar22 + 8,0x4200420000))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(iVar21,CONCAT28(in_stack_0000ff16,
                                                                                  CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x42,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar25 +
                                                                                            0x18,
                                                  CONCAT26(iVar22 + 0x4a,0x2200240000))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(iVar16,CONCAT212(iVar19,CONCAT210(iVar21,CONCAT28(in_stack_0000ff16,
                                                                                  CONCAT26(
                                                  in_stack_0000ff14,
                                                  CONCAT24(in_stack_0000ff12,
                                                           CONCAT22(in_stack_0000ff10,
                                                                    in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        SELECTOBJECT(local_30,(HRGN16)param_1,(HRGN16)unaff_SI,(HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        uVar32 = (undefined2)((ulong)_PTR_DAT_10a8_0000_10a8_006e >> 0x10);
        local_22 = *(ulong *)((int)PTR_DAT_10a8_0000_10a8_7b5e * 4 +
                             (int)_PTR_DAT_10a8_0000_10a8_006e);
        FUN_1028_23ac((int)local_22,
                      *(undefined2 *)
                       ((int)PTR_DAT_10a8_0000_10a8_7b5e * 4 + (int)_PTR_DAT_10a8_0000_10a8_006e + 2
                       ),(HRGN16)param_1,iVar19,iVar22 + 8,0,-1,(void *)0x0,(bitmapinfo *)0x0,
                      unaff_SI,unaff_DI,in_stack_0000fefe,
                      (undefined1  [10])
                      CONCAT28(in_stack_0000ff08,
                               CONCAT26(in_stack_0000ff06,
                                        CONCAT24(in_stack_0000ff04,
                                                 CONCAT22(in_stack_0000ff02,in_stack_0000ff00)))),
                      CONCAT22(in_stack_0000ff0c,in_stack_0000ff0a));
        local_a._0_1_ =
             *(byte *)((int)&DAT_10a8_8864 +
                      (((*(byte *)((int)local_22 + 1) & 0x1e) << 8) >> 9) * 0x76) >> 3;
        local_a._1_1_ = 0;
        SELECTPALETTE(0,(HPALETTE16)PTR_DAT_10a8_0000_10a8_839e,(bool16)param_1);
        REALIZEPALETTE((uint16 *)param_1,(HDC16)unaff_SI);
        FUN_1018_6c46(param_1,iVar25 + 0x19,iVar22 + 0x4d,0x20,0x20,
                      (HGLOBAL16)PTR_DAT_10a8_0000_10a8_84d6,((byte)local_a & 7) << 5,
                      -((CONCAT11(local_a._1_1_,(byte)local_a) & 0xfff8) * 4 + -0x60),0x20,0x20,
                      0xcc0020,CONCAT210(in_stack_0000ff04,
                                         CONCAT28(in_stack_0000ff02,
                                                  CONCAT26(in_stack_0000ff00,
                                                           CONCAT24(in_stack_0000fefe,
                                                                    CONCAT22(unaff_DI,unaff_SI))))),
                      CONCAT22(in_stack_0000ff08,in_stack_0000ff06),
                      CONCAT210(in_stack_0000ff14,
                                CONCAT28(in_stack_0000ff12,
                                         CONCAT26(in_stack_0000ff10,
                                                  CONCAT24(in_stack_0000ff0e,
                                                           CONCAT22(in_stack_0000ff0c,
                                                                    in_stack_0000ff0a))))),
                      (int16)CONCAT214(in_stack_0000ff24,
                                       CONCAT212(in_stack_0000ff22,
                                                 CONCAT210(in_stack_0000ff20,
                                                           CONCAT28(in_stack_0000ff1e,
                                                                    CONCAT26(iVar16,CONCAT24(iVar19,
                                                  CONCAT22(iVar21,in_stack_0000ff16))))))),
                      (int16)CONCAT412(in_stack_0000ff32,
                                       CONCAT48(in_stack_0000ff2e,
                                                CONCAT44(in_stack_0000ff2a,
                                                         CONCAT22(in_stack_0000ff28,
                                                                  in_stack_0000ff26)))),
                      in_stack_0000ff36,in_stack_0000ff38,(uint16)in_stack_0000ff3a,
                      in_stack_0000ff4a);
        SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_5910,
                     (COLORREF)CONCAT22(param_1,(int)((ulong)_PTR_DAT_10a8_0000_10a8_5910 >> 0x10)))
        ;
        SETBKCOLOR((HDC16)_DAT_10a8_5714,
                   (COLORREF)CONCAT22(param_1,(int)((ulong)_DAT_10a8_5714 >> 0x10)));
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        local_12 = 0;
        piVar10 = (int *)((int)local_22 + 0xc);
        local_6 = local_22 & 0xffff0000 | ZEXT24(piVar10);
        local_8 = (int16 *)0x10;
        iVar25 = 0x10;
        local_6._2_2_ = (int16 *)((local_22 & 0xffff0000) >> 0x10);
        do {
          local_12 = local_12 + *piVar10;
          iVar25 = iVar25 + -1;
          piVar10 = piVar10 + 1;
        } while (iVar25 != 0);
        FUN_1018_50de(0x17b,&stack0xff1e);
        piVar11 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(&stack0xff1e,0x10a8),
                            (LPCSTR)CONCAT22((int)local_12,unaff_SS),
                            (VA_LIST16)((ulong)local_12 >> 0x10));
        TEXTOUT((HDC16)piVar11,
                (int16)CONCAT214(in_stack_0000fefe,
                                 CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26(*(
                                                  int *)param_2 + 0x56,CONCAT24(local_24,0x10a886de)
                                                  ))))),
                (int16)CONCAT214(in_stack_0000ff0e,
                                 CONCAT212(in_stack_0000ff0c,
                                           CONCAT210(in_stack_0000ff0a,
                                                     CONCAT28(in_stack_0000ff08,
                                                              CONCAT26(in_stack_0000ff06,
                                                                       CONCAT24(in_stack_0000ff04,
                                                                                CONCAT22(
                                                  in_stack_0000ff02,in_stack_0000ff00))))))),
                (LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                (int16)CONCAT214(in_stack_0000ff22,
                                 CONCAT212(in_stack_0000ff20,
                                           CONCAT210(in_stack_0000ff1e,
                                                     CONCAT28(iVar16,CONCAT26(iVar19,CONCAT24(iVar21
                                                  ,CONCAT22(in_stack_0000ff16,in_stack_0000ff14)))))
                                          )));
        local_24 = PTR_DAT_10a8_0000_10a8_5794 + (int)local_24 + 2;
        uVar32 = (undefined2)(local_22 >> 0x10);
        iVar25 = (int)local_22;
        uVar5 = *(undefined4 *)(*(int *)(iVar25 + 2) * 4 + 0x72);
        puVar12 = (uint *)((int)uVar5 + 0x28);
        local_8 = (int16 *)((ulong)uVar5 >> 0x10);
        local_a._0_1_ = (byte)puVar12;
        local_a._1_1_ = (undefined)(ZEXT24(puVar12) >> 8);
        piVar10 = (int *)(iVar25 + 0xc);
        local_6 = local_22 & 0xffff0000 | ZEXT24(piVar10);
        local_c = 0x10;
        do {
          local_6._2_2_ = (int16 *)((local_22 & 0xffff0000) >> 0x10);
          iVar22 = *piVar10;
          if (0 < iVar22) {
            local_16 = local_16 + (ulong)*puVar12 * (long)iVar22;
          }
          puVar12 = (uint *)((int)puVar12 + 0x87);
          piVar10 = piVar10 + 1;
          local_c = local_c - 1;
        } while (local_c != 0);
        if (*(char *)(iVar25 + 4) == '\a') {
          pcVar18 = &stack0xff1e;
          pRVar34 = unaff_SS;
          piVar11 = param_1;
          local_e = (int16 *)FUN_1018_50de(0x17a,pcVar18);
          dVar33 = GETTEXTEXTENT((HDC16)local_e,(LPCSTR)CONCAT22(pRVar34,pcVar18),
                                 (int16)CONCAT214(in_stack_0000ff06,
                                                  CONCAT212(in_stack_0000ff04,
                                                            CONCAT210(in_stack_0000ff02,
                                                                      CONCAT28(in_stack_0000ff00,
                                                                               CONCAT26(
                                                  in_stack_0000fefe,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,piVar11)))))))
                                );
          local_8 = (int16 *)(dVar33 >> 0x10);
          local_a._0_1_ = (byte)dVar33;
          local_a._1_1_ = (undefined)(dVar33 >> 8);
          iVar25 = (int)s_From___s_c_c_10a8_10a2 + 6;
          uVar32 = SUB42(&DAT_10a8_86de,0);
          piVar11 = param_1;
          local_c = FUN_1018_50de(0x33,(char *)&DAT_10a8_86de);
          local_6 = GETTEXTEXTENT(local_c,(LPCSTR)CONCAT22(iVar25,uVar32),
                                  (int16)CONCAT214(in_stack_0000ff06,
                                                   CONCAT212(in_stack_0000ff04,
                                                             CONCAT210(in_stack_0000ff02,
                                                                       CONCAT28(in_stack_0000ff00,
                                                                                CONCAT26(
                                                  in_stack_0000fefe,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,piVar11)))))))
                                 );
          puVar29 = local_24;
          piVar11 = (int16 *)(local_6 >> 0x10);
          if (((int)local_8 <= (int)piVar11) &&
             (((int)local_8 < (int)piVar11 ||
              (CONCAT11(local_a._1_1_,(byte)local_a) <= (uint)local_6 &&
               (uint)local_6 != CONCAT11(local_a._1_1_,(byte)local_a))))) {
            local_a._0_1_ = (byte)local_6;
            local_a._1_1_ = (undefined)(local_6 >> 8);
            local_8 = piVar11;
          }
          SETRECT((RECT16 *)
                  CONCAT22(*(int *)(param_2 + 1) + -4,PTR_DAT_10a8_0000_10a8_5794 + (int)local_24),
                  (int16)CONCAT214(in_stack_0000ff00,
                                   CONCAT212(in_stack_0000fefe,
                                             CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(unaff_SS,
                                                  CONCAT24(local_4a,CONCAT22(*(int *)param_2 +
                                                                             CONCAT11(local_a._1_1_,
                                                                                      (byte)local_a)
                                                                             + 0x5a,local_24))))))),
                  (int16)CONCAT214(in_stack_0000ff10,
                                   CONCAT212(in_stack_0000ff0e,
                                             CONCAT210(in_stack_0000ff0c,
                                                       CONCAT28(in_stack_0000ff0a,
                                                                CONCAT26(in_stack_0000ff08,
                                                                         CONCAT24(in_stack_0000ff06,
                                                                                  CONCAT22(
                                                  in_stack_0000ff04,in_stack_0000ff02))))))),
                  (int16)CONCAT214(in_stack_0000ff20,
                                   CONCAT212(in_stack_0000ff1e,
                                             CONCAT210(iVar16,CONCAT28(iVar19,CONCAT26(iVar21,
                                                  CONCAT24(iVar22,CONCAT22(in_stack_0000ff14,
                                                                           in_stack_0000ff12))))))),
                  (int16)CONCAT412(in_stack_0000ff2e,
                                   CONCAT48(in_stack_0000ff2a,
                                            CONCAT26(in_stack_0000ff28,
                                                     CONCAT24(in_stack_0000ff26,
                                                              CONCAT22(in_stack_0000ff24,
                                                                       in_stack_0000ff22))))));
          local_24 = puVar29;
          if (local_4a[0] < local_46) {
            TEXTOUT((HDC16)local_e,
                    (int16)CONCAT214(in_stack_0000fefe,
                                     CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26
                                                  (*(int *)param_2 + 0x56,
                                                   CONCAT24(puVar29,CONCAT22(unaff_SS,&stack0xff1e))
                                                  ))))),
                    (int16)CONCAT214(in_stack_0000ff0e,
                                     CONCAT212(in_stack_0000ff0c,
                                               CONCAT210(in_stack_0000ff0a,
                                                         CONCAT28(in_stack_0000ff08,
                                                                  CONCAT26(in_stack_0000ff06,
                                                                           CONCAT24(
                                                  in_stack_0000ff04,
                                                  CONCAT22(in_stack_0000ff02,in_stack_0000ff00))))))
                                    ),(LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                    (int16)CONCAT214(in_stack_0000ff22,
                                     CONCAT212(in_stack_0000ff20,
                                               CONCAT210(in_stack_0000ff1e,
                                                         CONCAT28(iVar16,CONCAT26(iVar19,CONCAT24(
                                                  iVar21,CONCAT22(iVar22,in_stack_0000ff14))))))));
            puVar13 = PTR_DAT_10a8_0000_10a8_5794 + 2;
            TEXTOUT(local_c,(int16)CONCAT214(in_stack_0000fefe,
                                             CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,
                                                  CONCAT26(*(int *)param_2 + 0x56,
                                                           CONCAT24(puVar29 + (int)puVar13,
                                                                    0x10a886de)))))),
                    (int16)CONCAT214(in_stack_0000ff0e,
                                     CONCAT212(in_stack_0000ff0c,
                                               CONCAT210(in_stack_0000ff0a,
                                                         CONCAT28(in_stack_0000ff08,
                                                                  CONCAT26(in_stack_0000ff06,
                                                                           CONCAT24(
                                                  in_stack_0000ff04,
                                                  CONCAT22(in_stack_0000ff02,in_stack_0000ff00))))))
                                    ),(LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                    (int16)CONCAT214(in_stack_0000ff22,
                                     CONCAT212(in_stack_0000ff20,
                                               CONCAT210(in_stack_0000ff1e,
                                                         CONCAT28(iVar16,CONCAT26(iVar19,CONCAT24(
                                                  iVar21,CONCAT22(iVar22,in_stack_0000ff14))))))));
            FUN_1028_21d4(CONCAT22(local_4a,param_1),(uint)local_22,(uint)(local_22 >> 0x10),0);
            FUN_1018_5962(local_4a,0,(int)(PTR_DAT_10a8_0000_10a8_5794 + 4));
            FUN_1028_21d4(CONCAT22(local_4a,param_1),(uint)local_22,(uint)(local_22 >> 0x10),5);
            local_24 = puVar29 + (int)puVar13 + (int)(PTR_DAT_10a8_0000_10a8_5794 + 2);
            plVar14 = (long *)((int)local_22 + 0x4c);
            local_6 = local_22 & 0xffff0000 | ZEXT24(plVar14);
            local_8 = (int16 *)((int)&PTR_LOOP_10a8_0004 + 1);
            iVar25 = 5;
            local_6._2_2_ = (int16 *)((local_22 & 0xffff0000) >> 0x10);
            do {
              local_16 = local_16 + *plVar14;
              iVar25 = iVar25 + -1;
              plVar14 = plVar14 + 1;
            } while (iVar25 != 0);
          }
        }
        FUN_1018_50de((-(uint)((DAT_10a8_0a48 & 0x40) == 0) & 0xffa5) + 0x1d3,&stack0xff1e);
        piVar11 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(&stack0xff1e,0x10a8),
                            (LPCSTR)CONCAT22((int)local_16,unaff_SS),(VA_LIST16)(local_16 >> 0x10));
        TEXTOUT((HDC16)piVar11,
                (int16)CONCAT214(in_stack_0000fefe,
                                 CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26(*(
                                                  int *)param_2 + 0x56,CONCAT24(local_24,0x10a886de)
                                                  ))))),
                (int16)CONCAT214(in_stack_0000ff0e,
                                 CONCAT212(in_stack_0000ff0c,
                                           CONCAT210(in_stack_0000ff0a,
                                                     CONCAT28(in_stack_0000ff08,
                                                              CONCAT26(in_stack_0000ff06,
                                                                       CONCAT24(in_stack_0000ff04,
                                                                                CONCAT22(
                                                  in_stack_0000ff02,in_stack_0000ff00))))))),
                (LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                (int16)CONCAT214(in_stack_0000ff22,
                                 CONCAT212(in_stack_0000ff20,
                                           CONCAT210(in_stack_0000ff1e,
                                                     CONCAT28(iVar16,CONCAT26(iVar19,CONCAT24(iVar21
                                                  ,CONCAT22(iVar22,in_stack_0000ff14))))))));
        local_24 = local_24 + (int)(PTR_DAT_10a8_0000_10a8_5794 + 2);
        if (*(char *)((int)(int16 **)local_22 + 4) == '\a') {
          iVar25 = *(int *)((int)(int16 **)local_22 + 100);
          puVar15 = (undefined4 *)(iVar25 + 4);
          local_6 = local_6 & 0xffff | (ulong)*(uint *)((int)(int16 **)local_22 + 0x66) << 0x10;
          if (1 < *(int *)((int)(int16 **)local_22 + 0x62)) {
            puVar15 = (undefined4 *)(iVar25 + 0x16);
          }
          FUN_1018_50de((-(uint)((DAT_10a8_0a48 & 0x40) == 0) & 0xffa5) + 0x1d0,local_38);
          if (*(int *)((int)(int16 **)local_22 + 0x62) == 1) {
            uVar32 = FUN_1018_5112(0x179);
          }
          else {
            uVar32 = FUN_1010_1784(*(byte *)((int)puVar15 + 7) & 3,*(uint *)(puVar15 + 1),*puVar15);
          }
          local_e = _WSPRINTF((int16 *)&stack0xff1e,(LPSTR)CONCAT22(local_38,unaff_SS),
                              (LPCSTR)CONCAT22(uVar32,unaff_SS),
                              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
          TEXTOUT((HDC16)local_e,
                  (int16)CONCAT214(in_stack_0000fefe,
                                   CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26(*
                                                  (int *)param_2 + 0x56,
                                                  CONCAT24(local_24,CONCAT22(unaff_SS,&stack0xff1e))
                                                  ))))),
                  (int16)CONCAT214(in_stack_0000ff0e,
                                   CONCAT212(in_stack_0000ff0c,
                                             CONCAT210(in_stack_0000ff0a,
                                                       CONCAT28(in_stack_0000ff08,
                                                                CONCAT26(in_stack_0000ff06,
                                                                         CONCAT24(in_stack_0000ff04,
                                                                                  CONCAT22(
                                                  in_stack_0000ff02,in_stack_0000ff00))))))),
                  (LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                  (int16)CONCAT214(in_stack_0000ff22,
                                   CONCAT212(in_stack_0000ff20,
                                             CONCAT210(in_stack_0000ff1e,
                                                       CONCAT28(iVar16,CONCAT26(iVar19,CONCAT24(
                                                  iVar21,CONCAT22(iVar22,in_stack_0000ff14))))))));
          local_24 = local_24 + (int)(PTR_DAT_10a8_0000_10a8_5794 + 2);
          FUN_1018_50de((-(uint)((DAT_10a8_0a48 & 0x40) == 0) & 0xffa5) + 0x1cf,&stack0xff1e);
          uVar32 = FUN_1018_5112((*(byte *)((int)puVar15 + 6) & 0xf) + 0x51);
          local_e = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(&stack0xff1e,0x10a8),
                              (LPCSTR)CONCAT22(uVar32,unaff_SS),
                              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
          TEXTOUT((HDC16)local_e,
                  (int16)CONCAT214(in_stack_0000fefe,
                                   CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26(*
                                                  (int *)param_2 + 0x56,
                                                  CONCAT24(local_24,0x10a886de)))))),
                  (int16)CONCAT214(in_stack_0000ff0e,
                                   CONCAT212(in_stack_0000ff0c,
                                             CONCAT210(in_stack_0000ff0a,
                                                       CONCAT28(in_stack_0000ff08,
                                                                CONCAT26(in_stack_0000ff06,
                                                                         CONCAT24(in_stack_0000ff04,
                                                                                  CONCAT22(
                                                  in_stack_0000ff02,in_stack_0000ff00))))))),
                  (LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                  (int16)CONCAT214(in_stack_0000ff22,
                                   CONCAT212(in_stack_0000ff20,
                                             CONCAT210(in_stack_0000ff1e,
                                                       CONCAT28(iVar16,CONCAT26(iVar19,CONCAT24(
                                                  iVar21,CONCAT22(iVar22,in_stack_0000ff14))))))));
          local_24 = local_24 + (int)(PTR_DAT_10a8_0000_10a8_5794 + 2);
          if (*(int *)((int)(int16 **)local_22 + 0x62) < 2) {
            local_e = (int16 *)FUN_1018_50de((-(uint)((DAT_10a8_0a48 & 0x40) == 0) & 0xffa5) + 0x1d2
                                             ,(char *)&DAT_10a8_86de);
          }
          else {
            FUN_1018_50de((-(uint)((DAT_10a8_0a48 & 0x40) == 0) & 0xffa5) + 0x1d1,&stack0xff1e);
            local_e = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(&stack0xff1e,0x10a8),
                                (LPCSTR)(ulong)CONCAT12(*(byte *)((int)puVar15 + 6) >> 4,unaff_SS),
                                unaff_SI);
          }
          TEXTOUT((HDC16)local_e,
                  (int16)CONCAT214(in_stack_0000fefe,
                                   CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26(*
                                                  (int *)param_2 + 0x56,
                                                  CONCAT24(local_24,0x10a886de)))))),
                  (int16)CONCAT214(in_stack_0000ff0e,
                                   CONCAT212(in_stack_0000ff0c,
                                             CONCAT210(in_stack_0000ff0a,
                                                       CONCAT28(in_stack_0000ff08,
                                                                CONCAT26(in_stack_0000ff06,
                                                                         CONCAT24(in_stack_0000ff04,
                                                                                  CONCAT22(
                                                  in_stack_0000ff02,in_stack_0000ff00))))))),
                  (LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                  (int16)CONCAT214(in_stack_0000ff22,
                                   CONCAT212(in_stack_0000ff20,
                                             CONCAT210(in_stack_0000ff1e,
                                                       CONCAT28(iVar16,CONCAT26(iVar19,CONCAT24(
                                                  iVar21,CONCAT22(iVar22,in_stack_0000ff14))))))));
        }
      }
    }
    else {
      if ((PTR_DAT_10a8_0000_10a8_7b5c == (undefined *)0xffff) ||
         (iVar16 = FUN_1010_02b0((int)PTR_DAT_10a8_0000_10a8_7b5c,&local_92), iVar16 == 0)) {
        if (PTR_DAT_10a8_0000_10a8_7b5c != (undefined *)0xffff) {
          piVar11 = SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_71e4,(HRGN16)local_54,
                                 (HRGN16)unaff_SI,(HRGN16)unaff_DI,
                                 (int16)CONCAT214(in_stack_0000ff0c,
                                                  CONCAT212(in_stack_0000ff0a,
                                                            CONCAT210(in_stack_0000ff08,
                                                                      CONCAT28(in_stack_0000ff06,
                                                                               CONCAT26(
                                                  in_stack_0000ff04,
                                                  CONCAT24(in_stack_0000ff02,
                                                           CONCAT22(in_stack_0000ff00,
                                                                    in_stack_0000fefe))))))));
          local_6 = local_6 & 0xffff | ZEXT24(piVar11) << 0x10;
          SETTEXTCOLOR(0,(COLORREF)(ZEXT24(param_1) << 0x10));
          BITBLT(0x20,(int16)CONCAT214(((*(int *)(param_2 + 1) - *(int *)param_2) + -0x40 >> 1) +
                                       *(int *)param_2,
                                       CONCAT212(((*(int *)((int)param_2 + 6) -
                                                  *(int *)((int)param_2 + 2)) + -0x40 >> 1) +
                                                 *(int *)((int)param_2 + 2),
                                                 CONCAT210(0x40,CONCAT28(0x40,CONCAT26(local_54,0xcc
                                                                                      ))))),
                 (int16)CONCAT214(in_stack_0000ff06,
                                  CONCAT212(in_stack_0000ff04,
                                            CONCAT210(in_stack_0000ff02,
                                                      CONCAT28(in_stack_0000ff00,
                                                               CONCAT26(in_stack_0000fefe,
                                                                        CONCAT24(unaff_DI,CONCAT22(
                                                  unaff_SI,param_1))))))),
                 (int16)CONCAT214(in_stack_0000ff16,
                                  CONCAT212(in_stack_0000ff14,
                                            CONCAT210(in_stack_0000ff12,
                                                      CONCAT28(in_stack_0000ff10,
                                                               CONCAT26(in_stack_0000ff0e,
                                                                        CONCAT24(in_stack_0000ff0c,
                                                                                 CONCAT22(
                                                  in_stack_0000ff0a,in_stack_0000ff08))))))),
                 (int16)CONCAT214(in_stack_0000ff26,
                                  CONCAT212(in_stack_0000ff24,
                                            CONCAT210(in_stack_0000ff22,
                                                      CONCAT28(in_stack_0000ff20,
                                                               CONCAT26(in_stack_0000ff1e,
                                                                        CONCAT24(in_stack_0000ff1c,
                                                                                 CONCAT22(
                                                  in_stack_0000ff1a,in_stack_0000ff18))))))),
                 in_stack_0000ff28,
                 (int16)CONCAT214(in_stack_0000ff38,
                                  CONCAT212(in_stack_0000ff36,
                                            CONCAT48(in_stack_0000ff32,
                                                     CONCAT44(in_stack_0000ff2e,in_stack_0000ff2a)))
                                 ),(int16)in_stack_0000ff3a,in_stack_0000ff4a);
        }
        piVar11 = local_54;
      }
      else {
        local_2e = 0;
        local_52 = *param_2;
        local_4e = param_2[1];
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c4,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        piVar11 = param_1;
        uVar32 = FUN_1018_5112(0x185);
        dVar33 = GETTEXTEXTENT(5,(LPCSTR)CONCAT22(0x10a8,uVar32),
                               (int16)CONCAT214(in_stack_0000ff06,
                                                CONCAT212(in_stack_0000ff04,
                                                          CONCAT210(in_stack_0000ff02,
                                                                    CONCAT28(in_stack_0000ff00,
                                                                             CONCAT26(
                                                  in_stack_0000fefe,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,piVar11)))))))
                              );
        local_6._2_2_ = (int16 *)((int)dVar33 + 6);
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        uVar26 = 0xffff;
        pcVar18 = PTR_s_Temperature_10a8_061e_10a8_0636;
        do {
          if (uVar26 == 0) break;
          uVar26 = uVar26 - 1;
          pcVar3 = pcVar18;
          pcVar18 = pcVar18 + 1;
        } while (*pcVar3 != '\0');
        dVar33 = GETTEXTEXTENT(~uVar26 - 1,
                               (LPCSTR)CONCAT22(0x10a8,PTR_s_Temperature_10a8_061e_10a8_0636),
                               (int16)CONCAT214(in_stack_0000ff06,
                                                CONCAT212(in_stack_0000ff04,
                                                          CONCAT210(in_stack_0000ff02,
                                                                    CONCAT28(in_stack_0000ff00,
                                                                             CONCAT26(
                                                  in_stack_0000fefe,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_1)))))))
                              );
        iVar16 = (int)dVar33 + 6;
        local_6 = CONCAT22(local_6._2_2_,iVar16);
        if ((int)local_4e < iVar16 * 4) {
          local_2e = 1;
          dVar33 = GETTEXTEXTENT(4,(LPCSTR)CONCAT22(0x10a8,PTR_s_Temperature_10a8_061e_10a8_0636),
                                 (int16)CONCAT214(in_stack_0000ff06,
                                                  CONCAT212(in_stack_0000ff04,
                                                            CONCAT210(in_stack_0000ff02,
                                                                      CONCAT28(in_stack_0000ff00,
                                                                               CONCAT26(
                                                  in_stack_0000fefe,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_1)))))))
                                );
          iVar16 = (int)dVar33 + 6;
        }
        local_12._2_2_ = iVar16 + (int)local_52;
        local_2a = (int)local_4e - (int)local_6._2_2_;
        local_16 = CONCAT22((((local_4e._2_2_ + (int)PTR_DAT_10a8_0000_10a8_5794 * -4) -
                             local_52._2_2_) + -2) / 7 + 1,(int)local_16) & 0xfffeffff;
        local_22._2_2_ = (undefined *)(local_52._2_2_ + 2);
        if ((local_8d & 2) != 0) {
          HVar17 = CREATECOMPATIBLEDC((HDC16)param_1);
          piVar11 = SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_591e,HVar17,(HRGN16)unaff_SI,
                                 (HRGN16)unaff_DI,
                                 (int16)CONCAT214(in_stack_0000ff0c,
                                                  CONCAT212(in_stack_0000ff0a,
                                                            CONCAT210(in_stack_0000ff08,
                                                                      CONCAT28(in_stack_0000ff06,
                                                                               CONCAT26(
                                                  in_stack_0000ff04,
                                                  CONCAT24(in_stack_0000ff02,
                                                           CONCAT22(in_stack_0000ff00,
                                                                    in_stack_0000fefe))))))));
          BITBLT(0x20,(int16)CONCAT214((int)local_4e + -0x16,
                                       CONCAT212(local_22._2_2_ + 2,
                                                 CONCAT210(0xd,CONCAT28(0x10,CONCAT26(HVar17,
                                                  0x3800cc))))),
                 (int16)CONCAT214(in_stack_0000ff06,
                                  CONCAT212(in_stack_0000ff04,
                                            CONCAT210(in_stack_0000ff02,
                                                      CONCAT28(in_stack_0000ff00,
                                                               CONCAT26(in_stack_0000fefe,
                                                                        CONCAT24(unaff_DI,CONCAT22(
                                                  unaff_SI,param_1))))))),
                 (int16)CONCAT214(in_stack_0000ff16,
                                  CONCAT212(in_stack_0000ff14,
                                            CONCAT210(in_stack_0000ff12,
                                                      CONCAT28(in_stack_0000ff10,
                                                               CONCAT26(in_stack_0000ff0e,
                                                                        CONCAT24(in_stack_0000ff0c,
                                                                                 CONCAT22(
                                                  in_stack_0000ff0a,in_stack_0000ff08))))))),
                 (int16)CONCAT214(in_stack_0000ff26,
                                  CONCAT212(in_stack_0000ff24,
                                            CONCAT210(in_stack_0000ff22,
                                                      CONCAT28(in_stack_0000ff20,
                                                               CONCAT26(in_stack_0000ff1e,
                                                                        CONCAT24(in_stack_0000ff1c,
                                                                                 CONCAT22(
                                                  in_stack_0000ff1a,in_stack_0000ff18))))))),
                 in_stack_0000ff28,
                 (int16)CONCAT214(in_stack_0000ff38,
                                  CONCAT212(in_stack_0000ff36,
                                            CONCAT48(in_stack_0000ff32,
                                                     CONCAT44(in_stack_0000ff2e,in_stack_0000ff2a)))
                                 ),(int16)in_stack_0000ff3a,in_stack_0000ff4a);
          SELECTOBJECT(piVar11,HVar17,(HRGN16)unaff_SI,(HRGN16)unaff_DI,
                       (int16)CONCAT214(in_stack_0000ff0c,
                                        CONCAT212(in_stack_0000ff0a,
                                                  CONCAT210(in_stack_0000ff08,
                                                            CONCAT28(in_stack_0000ff06,
                                                                     CONCAT26(in_stack_0000ff04,
                                                                              CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                       ));
          DELETEDC(HVar17);
        }
        if (2 < local_8e) {
          iVar16 = (int)s_From___s_c_c_10a8_10a2 + 6;
          uVar32 = SUB42(&DAT_10a8_86de,0);
          piVar11 = param_1;
          HVar17 = FUN_1018_50de((local_2e == 0) + 0x17f,(char *)&DAT_10a8_86de);
          dVar33 = GETTEXTEXTENT(HVar17,(LPCSTR)CONCAT22(iVar16,uVar32),
                                 (int16)CONCAT214(in_stack_0000ff06,
                                                  CONCAT212(in_stack_0000ff04,
                                                            CONCAT210(in_stack_0000ff02,
                                                                      CONCAT28(in_stack_0000ff00,
                                                                               CONCAT26(
                                                  in_stack_0000fefe,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,piVar11)))))))
                                );
          SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_5910,
                       (COLORREF)
                       CONCAT22(param_1,(int)((ulong)_PTR_DAT_10a8_0000_10a8_5910 >> 0x10)));
          TEXTOUT(HVar17,(int16)CONCAT214(in_stack_0000fefe,
                                          CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,
                                                  CONCAT26(local_12._2_2_,
                                                           CONCAT24(local_22._2_2_,0x10a886de)))))),
                  (int16)CONCAT214(in_stack_0000ff0e,
                                   CONCAT212(in_stack_0000ff0c,
                                             CONCAT210(in_stack_0000ff0a,
                                                       CONCAT28(in_stack_0000ff08,
                                                                CONCAT26(in_stack_0000ff06,
                                                                         CONCAT24(in_stack_0000ff04,
                                                                                  CONCAT22(
                                                  in_stack_0000ff02,in_stack_0000ff00))))))),
                  (LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                  (int16)CONCAT214(in_stack_0000ff22,
                                   CONCAT212(in_stack_0000ff20,
                                             CONCAT210(in_stack_0000ff1e,
                                                       CONCAT28(in_stack_0000ff1c,
                                                                CONCAT26(in_stack_0000ff1a,
                                                                         CONCAT24(in_stack_0000ff18,
                                                                                  CONCAT22(
                                                  in_stack_0000ff16,in_stack_0000ff14))))))));
          uVar26 = FUN_1020_3626((int)&local_92,unaff_SS,(int)PTR_DAT_10a8_0001_10a8_00c0);
          local_6 = local_6 & 0xffff | (ulong)uVar26 << 0x10;
          piVar11 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x65010a8,
                              (LPCSTR)CONCAT22(uVar26,0x10a8),unaff_SI);
          if ((long)local_6 < 0) {
            HVar17 = 0xff;
          }
          else {
            HVar17 = 0x7f00;
          }
          SETTEXTCOLOR(HVar17,(COLORREF)(ZEXT24(param_1) << 0x10));
          TEXTOUT((HDC16)piVar11,
                  (int16)CONCAT214(in_stack_0000fefe,
                                   CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26((
                                                  int)dVar33 + local_12._2_2_,
                                                  CONCAT24(local_22._2_2_,0x10a886de)))))),
                  (int16)CONCAT214(in_stack_0000ff0e,
                                   CONCAT212(in_stack_0000ff0c,
                                             CONCAT210(in_stack_0000ff0a,
                                                       CONCAT28(in_stack_0000ff08,
                                                                CONCAT26(in_stack_0000ff06,
                                                                         CONCAT24(in_stack_0000ff04,
                                                                                  CONCAT22(
                                                  in_stack_0000ff02,in_stack_0000ff00))))))),
                  (LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                  (int16)CONCAT214(in_stack_0000ff22,
                                   CONCAT212(in_stack_0000ff20,
                                             CONCAT210(in_stack_0000ff1e,
                                                       CONCAT28(in_stack_0000ff1c,
                                                                CONCAT26(in_stack_0000ff1a,
                                                                         CONCAT24(in_stack_0000ff18,
                                                                                  CONCAT22(
                                                  in_stack_0000ff16,in_stack_0000ff14))))))));
        }
        SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_5910,
                     (COLORREF)CONCAT22(param_1,(int)((ulong)_PTR_DAT_10a8_0000_10a8_5910 >> 0x10)))
        ;
        if (local_92._2_2_ != -1) {
          pcVar18 = (char *)FUN_1018_5112((local_2e == 0) + 0x17d);
          puVar31 = (undefined2 *)&stack0xff1e;
          uVar26 = 0xffff;
          do {
            if (uVar26 == 0) break;
            uVar26 = uVar26 - 1;
            pcVar3 = pcVar18;
            pcVar18 = pcVar18 + 1;
          } while (*pcVar3 != '\0');
          uVar26 = ~uVar26;
          puVar30 = (undefined2 *)(pcVar18 + -uVar26);
          for (uVar27 = uVar26 >> 1; uVar27 != 0; uVar27 = uVar27 - 1) {
            puVar4 = puVar31;
            puVar31 = puVar31 + 1;
            puVar2 = puVar30;
            puVar30 = puVar30 + 1;
            *puVar4 = *puVar2;
          }
          for (uVar26 = (uint)((uVar26 & 1) != 0); uVar26 != 0; uVar26 = uVar26 - 1) {
            puVar4 = puVar31;
            puVar31 = (undefined2 *)((int)puVar31 + 1);
            puVar2 = puVar30;
            puVar30 = (undefined2 *)((int)puVar30 + 1);
            *(undefined *)puVar4 = *(undefined *)puVar2;
          }
        }
        if (local_8e == 7) {
          iVar16 = 0;
          pcVar18 = &stack0xff1e;
          uVar26 = 0xffff;
          do {
            if (uVar26 == 0) break;
            uVar26 = uVar26 - 1;
            pcVar3 = pcVar18;
            pcVar18 = pcVar18 + 1;
          } while (*pcVar3 != '\0');
          iVar19 = FUN_1018_525c(&stack0xff1d + ~uVar26,local_60 * 100);
          piVar11 = (int16 *)((~uVar26 - 1) + iVar19);
          puVar29 = &stack0xff1e;
          puVar13 = local_22._2_2_;
        }
        else if (local_92._2_2_ == -1) {
          piVar11 = (int16 *)0xb;
          iVar16 = 0;
          puVar29 = (undefined *)FUN_1018_5112(0x181);
          puVar13 = local_22._2_2_;
        }
        else {
          if (2 < local_8e) {
            uVar26 = local_7a & 0xff | ((byte)((ulong)local_7a >> 8) & 0xf) << 8;
            local_6 = CONCAT22((uint)CARRY2(uVar26,uVar26) * 2 + (uint)CARRY2(uVar26 * 2,uVar26 * 2)
                               ,uVar26 * 4);
            pcVar20 = (char *)FUN_1018_5112(0x17c);
            pcVar18 = &stack0xff1e;
            uVar26 = 0xffff;
            do {
              if (uVar26 == 0) break;
              uVar26 = uVar26 - 1;
              pcVar3 = pcVar20;
              pcVar20 = pcVar20 + 1;
            } while (*pcVar3 != '\0');
            uVar26 = ~uVar26;
            puVar31 = (undefined2 *)(pcVar20 + -uVar26);
            iVar16 = -1;
            do {
              if (iVar16 == 0) break;
              iVar16 = iVar16 + -1;
              pcVar3 = pcVar18;
              pcVar18 = pcVar18 + 1;
            } while (*pcVar3 != '\0');
            puVar30 = (undefined2 *)(pcVar18 + -1);
            for (uVar27 = uVar26 >> 1; uVar27 != 0; uVar27 = uVar27 - 1) {
              puVar4 = puVar30;
              puVar30 = puVar30 + 1;
              puVar2 = puVar31;
              puVar31 = puVar31 + 1;
              *puVar4 = *puVar2;
            }
            for (uVar26 = (uint)((uVar26 & 1) != 0); uVar26 != 0; uVar26 = uVar26 - 1) {
              puVar4 = puVar30;
              puVar30 = (undefined2 *)((int)puVar30 + 1);
              puVar2 = puVar31;
              puVar31 = (undefined2 *)((int)puVar31 + 1);
              *(undefined *)puVar4 = *(undefined *)puVar2;
            }
            local_e = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(&stack0xff1e,0x10a8),
                                (LPCSTR)CONCAT22(0xb1,unaff_SS),(VA_LIST16)local_6);
            if (local_6 == 0) {
              local_e = (int16 *)((int)local_e + -2);
            }
            FUN_1018_55f6(param_1,local_2a,(int)local_22._2_2_,(int)&DAT_10a8_86de,local_e,0,
                          CONCAT22(unaff_DI,unaff_SI),in_stack_0000fefe,
                          CONCAT212(in_stack_0000ff0c,
                                    CONCAT210(in_stack_0000ff0a,
                                              CONCAT28(in_stack_0000ff08,
                                                       CONCAT26(in_stack_0000ff06,
                                                                CONCAT24(in_stack_0000ff04,
                                                                         CONCAT22(in_stack_0000ff02,
                                                                                  in_stack_0000ff00)
                                                                        ))))));
          }
          SETTEXTCOLOR(0xff,(COLORREF)(ZEXT24(param_1) << 0x10));
          piVar11 = (int16 *)0x0;
          iVar16 = 0;
          puVar29 = (undefined *)FUN_1010_0792(local_92._2_2_,0,1,0,0,0);
          puVar13 = PTR_DAT_10a8_0000_10a8_5794 + (int)(local_22._2_2_ + -2);
        }
        FUN_1018_55f6(param_1,local_2a,(int)puVar13,puVar29,piVar11,iVar16,
                      CONCAT22(unaff_DI,unaff_SI),in_stack_0000fefe,
                      CONCAT212(in_stack_0000ff0c,
                                CONCAT210(in_stack_0000ff0a,
                                          CONCAT28(in_stack_0000ff08,
                                                   CONCAT26(in_stack_0000ff06,
                                                            CONCAT24(in_stack_0000ff04,
                                                                     CONCAT22(in_stack_0000ff02,
                                                                              in_stack_0000ff00)))))
                               ));
        local_22 = CONCAT22(local_22._2_2_ + (int)(PTR_DAT_10a8_0000_10a8_5794 + -2),
                            (int16 **)local_22);
        uVar26 = (int)PTR_DAT_10a8_0000_10a8_0042 - local_5c;
        local_6 = local_6 & 0xffff | (ulong)uVar26 << 0x10;
        if (uVar26 == 0) {
          uVar32 = FUN_1018_5112((-(uint)(local_2e == 0) & 0x75) + 0x112);
          local_e = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(uVar32,0x10a8),
                              (LPCSTR)CONCAT22(unaff_SI,0x10a8),unaff_DI);
        }
        else if (local_2e == 0) {
          uVar32 = FUN_1018_5112(0x183);
          _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(uVar32,0x10a8),
                    (LPCSTR)CONCAT22(uVar26,0x10a8),unaff_SI);
          if (1 < (int)local_6._2_2_) {
            pcVar18 = (char *)&DAT_10a8_0655;
            uVar26 = 0xffff;
            do {
              if (uVar26 == 0) break;
              uVar26 = uVar26 - 1;
              pcVar3 = pcVar18;
              pcVar18 = pcVar18 + 1;
            } while (*pcVar3 != '\0');
            uVar26 = ~uVar26;
            puVar31 = (undefined2 *)(pcVar18 + -uVar26);
            pcVar18 = (char *)&DAT_10a8_86de;
            iVar16 = -1;
            do {
              if (iVar16 == 0) break;
              iVar16 = iVar16 + -1;
              pcVar3 = pcVar18;
              pcVar18 = pcVar18 + 1;
            } while (*pcVar3 != '\0');
            puVar30 = (undefined2 *)(pcVar18 + -1);
            for (uVar27 = uVar26 >> 1; uVar27 != 0; uVar27 = uVar27 - 1) {
              puVar4 = puVar30;
              puVar30 = puVar30 + 1;
              puVar2 = puVar31;
              puVar31 = puVar31 + 1;
              *puVar4 = *puVar2;
            }
            for (uVar26 = (uint)((uVar26 & 1) != 0); uVar26 != 0; uVar26 = uVar26 - 1) {
              puVar4 = puVar30;
              puVar30 = (undefined2 *)((int)puVar30 + 1);
              puVar2 = puVar31;
              puVar31 = (undefined2 *)((int)puVar31 + 1);
              *(undefined *)puVar4 = *(undefined *)puVar2;
            }
          }
          pcVar18 = (char *)&PTR_PTR_DAT_10a8_0000_10a8_6f20_10a8_0657;
          uVar26 = 0xffff;
          do {
            if (uVar26 == 0) break;
            uVar26 = uVar26 - 1;
            pcVar3 = pcVar18;
            pcVar18 = pcVar18 + 1;
          } while (*pcVar3 != '\0');
          uVar26 = ~uVar26;
          puVar31 = (undefined2 *)(pcVar18 + -uVar26);
          pcVar18 = (char *)&DAT_10a8_86de;
          iVar16 = -1;
          do {
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            pcVar3 = pcVar18;
            pcVar18 = pcVar18 + 1;
          } while (*pcVar3 != '\0');
          puVar30 = (undefined2 *)(pcVar18 + -1);
          for (uVar27 = uVar26 >> 1; uVar27 != 0; uVar27 = uVar27 - 1) {
            puVar4 = puVar30;
            puVar30 = puVar30 + 1;
            puVar2 = puVar31;
            puVar31 = puVar31 + 1;
            *puVar4 = *puVar2;
          }
          for (uVar26 = (uint)((uVar26 & 1) != 0); uVar26 != 0; uVar26 = uVar26 - 1) {
            puVar4 = puVar30;
            puVar30 = (undefined2 *)((int)puVar30 + 1);
            puVar2 = puVar31;
            puVar31 = (undefined2 *)((int)puVar31 + 1);
            *(undefined *)puVar4 = *(undefined *)puVar2;
          }
          pcVar18 = (char *)&DAT_10a8_86de;
          uVar26 = 0xffff;
          do {
            if (uVar26 == 0) break;
            uVar26 = uVar26 - 1;
            pcVar3 = pcVar18;
            pcVar18 = pcVar18 + 1;
          } while (*pcVar3 != '\0');
          local_e = (int16 *)(~uVar26 - 1);
        }
        else {
          uVar32 = FUN_1018_5112(0x182);
          local_e = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(uVar32,0x10a8),
                              (LPCSTR)CONCAT22(uVar26,0x10a8),unaff_SI);
        }
        if ((int)local_6._2_2_ < 6) {
          HVar17 = 0;
        }
        else {
          HVar17 = 0xff;
        }
        SETTEXTCOLOR(HVar17,(COLORREF)(ZEXT24(param_1) << 0x10));
        TEXTOUT((HDC16)local_e,
                (int16)CONCAT214(in_stack_0000fefe,
                                 CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26(
                                                  local_12._2_2_,CONCAT24(local_22._2_2_,0x10a886de)
                                                  ))))),
                (int16)CONCAT214(in_stack_0000ff0e,
                                 CONCAT212(in_stack_0000ff0c,
                                           CONCAT210(in_stack_0000ff0a,
                                                     CONCAT28(in_stack_0000ff08,
                                                              CONCAT26(in_stack_0000ff06,
                                                                       CONCAT24(in_stack_0000ff04,
                                                                                CONCAT22(
                                                  in_stack_0000ff02,in_stack_0000ff00))))))),
                (LPCSTR)CONCAT22(in_stack_0000ff12,in_stack_0000ff10),
                (int16)CONCAT214(in_stack_0000ff22,
                                 CONCAT212(in_stack_0000ff20,
                                           CONCAT210(in_stack_0000ff1e,
                                                     CONCAT28(in_stack_0000ff1c,
                                                              CONCAT26(in_stack_0000ff1a,
                                                                       CONCAT24(in_stack_0000ff18,
                                                                                CONCAT22(
                                                  in_stack_0000ff16,in_stack_0000ff14))))))));
        local_22 = local_22 & 0xffff |
                   ZEXT24(PTR_DAT_10a8_0000_10a8_5794 + (int)local_22._2_2_) << 0x10;
        local_30 = SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0016,(HRGN16)param_1,
                                (HRGN16)unaff_SI,(HRGN16)unaff_DI,
                                (int16)CONCAT214(in_stack_0000ff0c,
                                                 CONCAT212(in_stack_0000ff0a,
                                                           CONCAT210(in_stack_0000ff08,
                                                                     CONCAT28(in_stack_0000ff06,
                                                                              CONCAT26(
                                                  in_stack_0000ff04,
                                                  CONCAT24(in_stack_0000ff02,
                                                           CONCAT22(in_stack_0000ff00,
                                                                    in_stack_0000fefe))))))));
        iVar19 = local_2a - local_12._2_2_;
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(local_12
                                                  ._2_2_,CONCAT26(local_22._2_2_,
                                                                  CONCAT24(iVar19,0x100f0)))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(in_stack_0000ff14,
                                                                      CONCAT24(in_stack_0000ff12,
                                                                               CONCAT22(
                                                  in_stack_0000ff10,in_stack_0000ff0e))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        iVar21 = local_12._2_2_ + 1;
        iVar25 = (int)local_22._2_2_ + 1;
        iVar16 = local_16._2_2_ * 3;
        PATBLT(0x42,(int16)(ZEXT1416(CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26
                                                  (iVar21,CONCAT24(iVar25,CONCAT22(iVar19 + -2,
                                                                                   iVar16 + -1))))))
                                    ) << 0x10),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(in_stack_0000ff10,in_stack_0000ff0e))))))
                               ),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(local_12
                                                  ._2_2_,CONCAT26(local_22._2_2_,
                                                                  CONCAT24(1,CONCAT22(iVar16,0xf0)))
                                                  )))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(in_stack_0000ff10,in_stack_0000ff0e))))))
                               ),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        iVar22 = local_12._2_2_ + 2;
        uVar26 = iVar19 - 4;
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar22,
                                                  CONCAT26(local_16._2_2_ + (int)local_22._2_2_,
                                                           CONCAT24(uVar26,0x100f0)))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(iVar22,
                                                  CONCAT26(local_16._2_2_ * 2 + (int)local_22._2_2_,
                                                           CONCAT24(uVar26,0x100f0)))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0014,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(local_2a
                                                                                            + -1,
                                                  CONCAT26(iVar25,CONCAT24(1,CONCAT22(iVar16,0xf0)))
                                                  )))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(local_12
                                                  ._2_2_,CONCAT26(iVar16 + (int)local_22._2_2_,
                                                                  CONCAT24(iVar19,0x100f0)))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_5910,
                     (COLORREF)CONCAT22(param_1,(int)((ulong)_PTR_DAT_10a8_0000_10a8_5910 >> 0x10)))
        ;
        SETBKMODE((int16 *)&DAT_10a8_0001,(HDC16)param_1,
                  (int16)CONCAT214(in_stack_0000ff08,
                                   CONCAT212(in_stack_0000ff06,
                                             CONCAT210(in_stack_0000ff04,
                                                       CONCAT28(in_stack_0000ff02,
                                                                CONCAT26(in_stack_0000ff00,
                                                                         CONCAT24(in_stack_0000fefe,
                                                                                  CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
        local_2c = FUN_1020_3abc(CONCAT22(unaff_SS,&local_92),local_42,local_42 + 3,local_36);
        uVar9 = local_16 & 0xffff0000;
        local_16 = uVar9 | uVar26;
        local_16._2_2_ = (int)(uVar9 >> 0x10);
        local_24 = (undefined *)(local_16._2_2_ - (int)PTR_DAT_10a8_0000_10a8_5794 >> 1);
        local_12._0_2_ = 0;
        local_28 = 0;
        local_22._0_2_ = (int16 **)&PTR_DAT_10a8_0000_10a8_85ba;
        do {
          iVar19 = (int)PTR_DAT_10a8_0001_10a8_00c0 * 0x76 + (int)local_12;
          local_6 = local_6 & 0xffff0000 | (ulong)(uint)(int)*(char *)(iVar19 + -0x778f);
          local_8 = (int16 *)(int)*(char *)(iVar19 + -0x778c);
          local_26 = (VA_LIST16)(int)local_80[(int)local_12];
          if (local_2e == 0) {
            uVar32 = *(undefined2 *)(local_28 + 0x634);
          }
          else {
            uVar32 = *(undefined2 *)(local_28 + 0x648);
          }
          FUN_1018_55f6(param_1,local_12._2_2_ - 2,(int)local_22._2_2_ + (int)local_24,uVar32,
                        (int16 *)0x0,0,CONCAT22(unaff_DI,unaff_SI),in_stack_0000fefe,
                        CONCAT212(in_stack_0000ff0c,
                                  CONCAT210(in_stack_0000ff0a,
                                            CONCAT28(in_stack_0000ff08,
                                                     CONCAT26(in_stack_0000ff06,
                                                              CONCAT24(in_stack_0000ff04,
                                                                       CONCAT22(in_stack_0000ff02,
                                                                                in_stack_0000ff00)))
                                                    ))));
          if (2 < local_8e) {
            pcVar18 = (char *)FUN_1020_307e((int)local_12,local_26);
            local_6 = local_6 & 0xffff | ZEXT24(pcVar18) << 0x10;
            uVar27 = 0xffff;
            do {
              if (uVar27 == 0) break;
              uVar27 = uVar27 - 1;
              pcVar3 = pcVar18;
              pcVar18 = pcVar18 + 1;
            } while (*pcVar3 != '\0');
            local_e = (int16 *)(~uVar27 - 1);
            SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c4,(HRGN16)param_1,(HRGN16)unaff_SI,
                         (HRGN16)unaff_DI,
                         (int16)CONCAT214(in_stack_0000ff0c,
                                          CONCAT212(in_stack_0000ff0a,
                                                    CONCAT210(in_stack_0000ff08,
                                                              CONCAT28(in_stack_0000ff06,
                                                                       CONCAT26(in_stack_0000ff04,
                                                                                CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                         ));
            TEXTOUT((HDC16)local_e,
                    (int16)CONCAT214(in_stack_0000fefe,
                                     CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26
                                                  (local_2a + 2,
                                                   CONCAT24((int)local_22._2_2_ + (int)local_24,
                                                            CONCAT22(0x10a8,local_6._2_2_))))))),
                    (int16)CONCAT214(uVar26,CONCAT212(in_stack_0000ff0c,
                                                      CONCAT210(in_stack_0000ff0a,
                                                                CONCAT28(in_stack_0000ff08,
                                                                         CONCAT26(in_stack_0000ff06,
                                                                                  CONCAT24(
                                                  in_stack_0000ff04,
                                                  CONCAT22(in_stack_0000ff02,in_stack_0000ff00))))))
                                    ),(LPCSTR)CONCAT22(iVar16,iVar22),
                    (int16)CONCAT214(in_stack_0000ff22,
                                     CONCAT212(in_stack_0000ff20,
                                               CONCAT210(in_stack_0000ff1e,
                                                         CONCAT28(in_stack_0000ff1c,
                                                                  CONCAT26(in_stack_0000ff1a,
                                                                           CONCAT24(
                                                  in_stack_0000ff18,
                                                  CONCAT22(in_stack_0000ff16,iVar21))))))));
          }
          SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)param_1,(HRGN16)unaff_SI,
                       (HRGN16)unaff_DI,
                       (int16)CONCAT214(in_stack_0000ff0c,
                                        CONCAT212(in_stack_0000ff0a,
                                                  CONCAT210(in_stack_0000ff08,
                                                            CONCAT28(in_stack_0000ff06,
                                                                     CONCAT26(in_stack_0000ff04,
                                                                              CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                       ));
          SELECTOBJECT(*(int16 **)local_22,(HRGN16)param_1,(HRGN16)unaff_SI,(HRGN16)unaff_DI,
                       (int16)CONCAT214(in_stack_0000ff0c,
                                        CONCAT212(in_stack_0000ff0a,
                                                  CONCAT210(in_stack_0000ff08,
                                                            CONCAT28(in_stack_0000ff06,
                                                                     CONCAT26(in_stack_0000ff04,
                                                                              CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                       ));
          piVar11 = param_1;
          piVar23 = MULDIV((int16 *)&DAT_10a8_0064,
                           (int16)CONCAT214(in_stack_0000ff02,
                                            CONCAT212(in_stack_0000ff00,
                                                      CONCAT210(in_stack_0000fefe,
                                                                CONCAT28(unaff_DI,CONCAT26(unaff_SI,
                                                  CONCAT24(param_1,local_16 & 0xffff |
                                                                   local_6 << 0x10)))))),
                           (int16)CONCAT214(iVar16,CONCAT212(iVar22,CONCAT210(uVar26,CONCAT28(
                                                  in_stack_0000ff0c,
                                                  CONCAT26(in_stack_0000ff0a,
                                                           CONCAT24(in_stack_0000ff08,
                                                                    CONCAT22(in_stack_0000ff06,
                                                                             in_stack_0000ff04))))))
                                           ),
                           (int16)CONCAT214(in_stack_0000ff22,
                                            CONCAT212(in_stack_0000ff20,
                                                      CONCAT210(in_stack_0000ff1e,
                                                                CONCAT28(in_stack_0000ff1c,
                                                                         CONCAT26(in_stack_0000ff1a,
                                                                                  CONCAT24(
                                                  in_stack_0000ff18,
                                                  CONCAT22(in_stack_0000ff16,iVar21))))))));
          iVar19 = (int)piVar23 + local_12._2_2_ + 2;
          iVar25 = (int)local_22._2_2_ + 2;
          piVar23 = MULDIV((int16 *)&DAT_10a8_0064,
                           (int16)CONCAT214(in_stack_0000fefe,
                                            CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(piVar11,
                                                  CONCAT26(iVar19,CONCAT24(iVar25,local_16 & 0xffff
                                                                                  | (ulong)(uint)((
                                                  int)local_8 - (int)local_6) << 0x10)))))),
                           (int16)CONCAT214(uVar26,CONCAT212(in_stack_0000ff0c,
                                                             CONCAT210(in_stack_0000ff0a,
                                                                       CONCAT28(in_stack_0000ff08,
                                                                                CONCAT26(
                                                  in_stack_0000ff06,
                                                  CONCAT24(in_stack_0000ff04,
                                                           CONCAT22(in_stack_0000ff02,
                                                                    in_stack_0000ff00))))))),
                           (int16)CONCAT214(in_stack_0000ff1e,
                                            CONCAT212(in_stack_0000ff1c,
                                                      CONCAT210(in_stack_0000ff1a,
                                                                CONCAT28(in_stack_0000ff18,
                                                                         CONCAT26(in_stack_0000ff16,
                                                                                  CONCAT24(iVar21,
                                                  CONCAT22(iVar16,iVar22))))))));
          PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(piVar11,CONCAT28(iVar19
                                                  ,CONCAT26(iVar25,CONCAT24(piVar23,CONCAT22(
                                                  local_16._2_2_ + -3,0xf0))))))),
                 (int16)CONCAT214(in_stack_0000ff0c,
                                  CONCAT212(in_stack_0000ff0a,
                                            CONCAT210(in_stack_0000ff08,
                                                      CONCAT28(in_stack_0000ff06,
                                                               CONCAT26(in_stack_0000ff04,
                                                                        CONCAT24(in_stack_0000ff02,
                                                                                 CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
                 (int16)CONCAT214(in_stack_0000ff1c,
                                  CONCAT212(in_stack_0000ff1a,
                                            CONCAT210(in_stack_0000ff18,
                                                      CONCAT28(in_stack_0000ff16,
                                                               CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
                 (int16)CONCAT412(in_stack_0000ff2a,
                                  CONCAT210(in_stack_0000ff28,
                                            CONCAT28(in_stack_0000ff26,
                                                     CONCAT26(in_stack_0000ff24,
                                                              CONCAT24(in_stack_0000ff22,
                                                                       CONCAT22(in_stack_0000ff20,
                                                                                in_stack_0000ff1e)))
                                                    ))),in_stack_0000ff2e);
          if (2 < local_8e) {
            SELECTOBJECT(((int16 **)local_22)[1],(HRGN16)param_1,(HRGN16)unaff_SI,(HRGN16)unaff_DI,
                         (int16)CONCAT214(in_stack_0000ff0c,
                                          CONCAT212(in_stack_0000ff0a,
                                                    CONCAT210(in_stack_0000ff08,
                                                              CONCAT28(in_stack_0000ff06,
                                                                       CONCAT26(in_stack_0000ff04,
                                                                                CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                         ));
            local_c = (int)local_22._2_2_ + 3;
            iVar19 = local_16._2_2_ + (int)local_22._2_2_ + -3;
            local_e = (int16 *)&DAT_10a8_0001;
            piVar11 = MULDIV((int16 *)&DAT_10a8_0064,
                             (int16)CONCAT214(in_stack_0000ff04,
                                              CONCAT212(in_stack_0000ff02,
                                                        CONCAT210(in_stack_0000ff00,
                                                                  CONCAT28(in_stack_0000fefe,
                                                                           CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,local_16 & 0xffff |
                                                                    ZEXT24(local_26) << 0x10)))))),
                             (int16)CONCAT214(iVar21,CONCAT212(iVar16,CONCAT210(iVar22,CONCAT28(
                                                  uVar26,CONCAT26(in_stack_0000ff0c,
                                                                  CONCAT24(in_stack_0000ff0a,
                                                                           CONCAT22(
                                                  in_stack_0000ff08,in_stack_0000ff06))))))),
                             (int16)CONCAT214(in_stack_0000ff24,
                                              CONCAT212(in_stack_0000ff22,
                                                        CONCAT210(in_stack_0000ff20,
                                                                  CONCAT28(in_stack_0000ff1e,
                                                                           CONCAT26(
                                                  in_stack_0000ff1c,
                                                  CONCAT24(in_stack_0000ff1a,
                                                           CONCAT22(in_stack_0000ff18,
                                                                    in_stack_0000ff16))))))));
            local_a = (int)piVar11 + local_12._2_2_ + 2;
            piVar11 = local_e;
            local_8 = (int16 *)iVar19;
            while( true ) {
              local_a._1_1_ = (undefined)((uint)local_a >> 8);
              uVar8 = CONCAT12((byte)local_a,local_c);
              uVar7 = CONCAT26(local_c,CONCAT24(piVar11,0x100f0));
              local_c = local_c + 1;
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28((
                                                  int)(CONCAT13(local_a._1_1_,uVar8) >> 0x10),uVar7)
                                                  ))),
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ),
                     (int16)CONCAT214(in_stack_0000ff1c,
                                      CONCAT212(in_stack_0000ff1a,
                                                CONCAT210(in_stack_0000ff18,
                                                          CONCAT28(in_stack_0000ff16,
                                                                   CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
                     (int16)CONCAT412(in_stack_0000ff2a,
                                      CONCAT210(in_stack_0000ff28,
                                                CONCAT28(in_stack_0000ff26,
                                                         CONCAT26(in_stack_0000ff24,
                                                                  CONCAT24(in_stack_0000ff22,
                                                                           CONCAT22(
                                                  in_stack_0000ff20,in_stack_0000ff1e)))))),
                     in_stack_0000ff2e);
              iVar25 = local_28;
              if (iVar19 < (int)local_c) break;
              local_6 = CONCAT22(local_a,iVar19);
              Var6 = CONCAT28(local_a,CONCAT26(iVar19,CONCAT24(piVar11,0x100f0)));
              local_a = local_a + -1;
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,Var6))),
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ),
                     (int16)CONCAT214(in_stack_0000ff1c,
                                      CONCAT212(in_stack_0000ff1a,
                                                CONCAT210(in_stack_0000ff18,
                                                          CONCAT28(in_stack_0000ff16,
                                                                   CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
                     (int16)CONCAT412(in_stack_0000ff2a,
                                      CONCAT210(in_stack_0000ff28,
                                                CONCAT28(in_stack_0000ff26,
                                                         CONCAT26(in_stack_0000ff24,
                                                                  CONCAT24(in_stack_0000ff22,
                                                                           CONCAT22(
                                                  in_stack_0000ff20,in_stack_0000ff1e)))))),
                     in_stack_0000ff2e);
              piVar11 = (int16 *)((int)piVar11 + 2);
              iVar19 = iVar19 + -1;
            }
            local_28 = iVar25;
            if (local_2c != 0) {
              local_c = local_c - 1;
              if (*(int *)((int)local_42 + local_28) == -1) {
                local_e = (int16 *)0x0;
              }
              else {
                local_e = (int16 *)((int)local_26 - *(int *)((int)local_42 + local_28));
                if ((int)local_e < 0) {
                  local_e = (int16 *)0x0;
                }
              }
              piVar11 = MULDIV((int16 *)&DAT_10a8_0064,
                               (int16)CONCAT214(in_stack_0000ff04,
                                                CONCAT212(in_stack_0000ff02,
                                                          CONCAT210(in_stack_0000ff00,
                                                                    CONCAT28(in_stack_0000fefe,
                                                                             CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,local_16 & 0xffff |
                                                                    (ulong)(uint)((int)local_26 -
                                                                                 (int)local_e) <<
                                                                    0x10)))))),
                               (int16)CONCAT214(iVar21,CONCAT212(iVar16,CONCAT210(iVar22,CONCAT28(
                                                  uVar26,CONCAT26(in_stack_0000ff0c,
                                                                  CONCAT24(in_stack_0000ff0a,
                                                                           CONCAT22(
                                                  in_stack_0000ff08,in_stack_0000ff06))))))),
                               (int16)CONCAT214(in_stack_0000ff24,
                                                CONCAT212(in_stack_0000ff22,
                                                          CONCAT210(in_stack_0000ff20,
                                                                    CONCAT28(in_stack_0000ff1e,
                                                                             CONCAT26(
                                                  in_stack_0000ff1c,
                                                  CONCAT24(in_stack_0000ff1a,
                                                           CONCAT22(in_stack_0000ff18,
                                                                    in_stack_0000ff16))))))));
              iVar19 = (int)piVar11 + local_12._2_2_ + 2;
              if (*(int *)((int)local_42 + iVar25 + 6) == -1) {
                local_e = (int16 *)0x0;
              }
              else {
                local_e = (int16 *)(*(int *)((int)local_42 + iVar25 + 6) - (int)local_26);
                if ((int)local_e < 0) {
                  local_e = (int16 *)0x0;
                }
              }
              HVar17 = local_c;
              iVar35 = iVar19;
              piVar11 = param_1;
              piVar23 = MULDIV((int16 *)&DAT_10a8_0064,
                               (int16)CONCAT214(in_stack_0000fefe,
                                                CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(
                                                  param_1,CONCAT26(iVar19,CONCAT24(local_c,local_16
                                                  & 0xffff |
                                                  (ulong)(uint)((int)local_26 + (int)local_e) <<
                                                  0x10)))))),
                               (int16)CONCAT214(uVar26,CONCAT212(in_stack_0000ff0c,
                                                                 CONCAT210(in_stack_0000ff0a,
                                                                           CONCAT28(
                                                  in_stack_0000ff08,
                                                  CONCAT26(in_stack_0000ff06,
                                                           CONCAT24(in_stack_0000ff04,
                                                                    CONCAT22(in_stack_0000ff02,
                                                                             in_stack_0000ff00))))))
                                               ),
                               (int16)CONCAT214(in_stack_0000ff1e,
                                                CONCAT212(in_stack_0000ff1c,
                                                          CONCAT210(in_stack_0000ff1a,
                                                                    CONCAT28(in_stack_0000ff18,
                                                                             CONCAT26(
                                                  in_stack_0000ff16,
                                                  CONCAT24(iVar21,CONCAT22(iVar16,iVar22))))))));
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(piVar11,CONCAT28(
                                                  iVar35,CONCAT26(HVar17,CONCAT24((int)piVar23 +
                                                                                  (local_12._2_2_ -
                                                                                  iVar19) + 3,
                                                                                  0x100f0)))))),
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ),
                     (int16)CONCAT214(in_stack_0000ff1c,
                                      CONCAT212(in_stack_0000ff1a,
                                                CONCAT210(in_stack_0000ff18,
                                                          CONCAT28(in_stack_0000ff16,
                                                                   CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
                     (int16)CONCAT412(in_stack_0000ff2a,
                                      CONCAT210(in_stack_0000ff28,
                                                CONCAT28(in_stack_0000ff26,
                                                         CONCAT26(in_stack_0000ff24,
                                                                  CONCAT24(in_stack_0000ff22,
                                                                           CONCAT22(
                                                  in_stack_0000ff20,in_stack_0000ff1e)))))),
                     in_stack_0000ff2e);
              local_28 = iVar25;
            }
          }
          local_12._0_2_ = (int)local_12 + 1;
          local_22._2_2_ = (undefined *)((int)local_22._2_2_ + local_16._2_2_);
          local_28 = local_28 + 2;
          local_22._0_2_ = (int16 **)local_22 + 2;
        } while ((int16 **)local_22 < (int16 **)&PTR_DAT_10a8_0000_10a8_85c6);
        local_22 = CONCAT22((int)local_22._2_2_ + ((int)PTR_DAT_10a8_0000_10a8_5794 >> 1),
                            (int16 **)local_22);
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0016,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        iVar19 = local_2a - local_12._2_2_;
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(local_12
                                                  ._2_2_,CONCAT26(local_22._2_2_,
                                                                  CONCAT24(iVar19,0x100f0)))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        in_stack_0000ff0c = (int)local_22._2_2_ + 1;
        in_stack_0000ff0a = local_16._2_2_ * 4;
        PATBLT(0x42,(int16)(ZEXT1416(CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,CONCAT26
                                                  (iVar21,CONCAT24(in_stack_0000ff0c,
                                                                   CONCAT22(iVar19 + -2,
                                                                            in_stack_0000ff0a + 1)))
                                                  )))) << 0x10),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        in_stack_0000ff08 = in_stack_0000ff0a + 2;
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(local_12
                                                  ._2_2_,CONCAT26(local_22._2_2_,
                                                                  CONCAT24(1,CONCAT22(
                                                  in_stack_0000ff08,0xf0))))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0014,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(local_2a
                                                                                            + -1,
                                                  CONCAT26(in_stack_0000ff0c,
                                                           CONCAT24(1,CONCAT22(in_stack_0000ff08,
                                                                               0xf0))))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(local_12
                                                  ._2_2_,CONCAT26(in_stack_0000ff0a +
                                                                  (int)local_22._2_2_ + 2,
                                                                  CONCAT24(iVar19,0x100f0)))))),
               (int16)CONCAT214(in_stack_0000ff0c,
                                CONCAT212(in_stack_0000ff0a,
                                          CONCAT210(in_stack_0000ff08,
                                                    CONCAT28(in_stack_0000ff06,
                                                             CONCAT26(in_stack_0000ff04,
                                                                      CONCAT24(in_stack_0000ff02,
                                                                               CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
               (int16)CONCAT214(in_stack_0000ff1c,
                                CONCAT212(in_stack_0000ff1a,
                                          CONCAT210(in_stack_0000ff18,
                                                    CONCAT28(in_stack_0000ff16,
                                                             CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
               (int16)CONCAT412(in_stack_0000ff2a,
                                CONCAT210(in_stack_0000ff28,
                                          CONCAT28(in_stack_0000ff26,
                                                   CONCAT26(in_stack_0000ff24,
                                                            CONCAT24(in_stack_0000ff22,
                                                                     CONCAT22(in_stack_0000ff20,
                                                                              in_stack_0000ff1e)))))
                               ),in_stack_0000ff2e);
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59cc,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        iVar25 = (int)s_From___s_c_c_10a8_10a2 + 6;
        uVar32 = SUB42(&DAT_10a8_86de,0);
        piVar11 = param_1;
        piVar23 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x65c10a8,
                            (LPCSTR)CONCAT22(DAT_10a8_064e,0x10a8),(VA_LIST16)&DAT_10a8_86de);
        dVar33 = GETTEXTEXTENT((HDC16)piVar23,(LPCSTR)CONCAT22(iVar25,uVar32),
                               (int16)CONCAT214(in_stack_0000ff06,
                                                CONCAT212(in_stack_0000ff04,
                                                          CONCAT210(in_stack_0000ff02,
                                                                    CONCAT28(in_stack_0000ff00,
                                                                             CONCAT26(
                                                  in_stack_0000fefe,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,piVar11)))))))
                              );
        local_6 = local_6 & 0xffff0000 | dVar33 & 0xffff;
        local_e = (int16 *)(iVar19 + -3);
        local_6._0_2_ = (int)(dVar33 & 0xffff);
        iVar19 = (int)DAT_10a8_064e / ((int)local_e / (((int)local_6 >> 1) + (int)local_6));
        if ((int)DAT_10a8_064e < 1000) {
          uVar27 = ((iVar19 + 0x31) / 0x32) * 0x32;
        }
        else if ((int)DAT_10a8_064e < 0x9c4) {
          uVar27 = ((iVar19 + 99) / 100) * 100;
        }
        else if ((int)DAT_10a8_064e < 0x1d4c) {
          uVar27 = ((iVar19 + 0xf9) / 0xfa) * 0xfa;
        }
        else if ((int)DAT_10a8_064e < 15000) {
          uVar27 = ((iVar19 + 499) / 500) * 500;
        }
        else {
          uVar27 = ((iVar19 + 999) / 1000) * 1000;
        }
        local_8 = (int16 *)((int)DAT_10a8_064e / (int)uVar27);
        SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_5910,
                     (COLORREF)CONCAT22(param_1,(int)((ulong)_PTR_DAT_10a8_0000_10a8_5910 >> 0x10)))
        ;
        local_24 = (undefined *)((local_16._2_2_ + 1) * 4 + (int)local_22._2_2_);
        local_12 = (ulong)local_12._2_2_ << 0x10;
        if (-1 < (int)local_8) {
          in_stack_0000ff06 = (undefined2)((ulong)((long)(int)local_e * (long)(int)uVar27) >> 0x10);
          in_stack_0000ff04 = (undefined2)((long)(int)local_e * (long)(int)uVar27);
          local_6 = (ulong)uVar27 << 0x10;
          local_12._0_2_ = 0;
          local_6._0_2_ = 0;
          do {
            local_a = (int)((CONCAT22(in_stack_0000ff06,in_stack_0000ff04) * (long)(int)local_12) /
                           (long)(int)DAT_10a8_064e) + local_12._2_2_;
            PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(
                                                  local_a,CONCAT26((int)local_22._2_2_ + 2,
                                                                   CONCAT24(1,CONCAT22(local_16.
                                                  _2_2_ * 4 + -1,0xf0))))))),
                   (int16)CONCAT214(in_stack_0000ff0c,
                                    CONCAT212(in_stack_0000ff0a,
                                              CONCAT210(in_stack_0000ff08,
                                                        CONCAT28(in_stack_0000ff06,
                                                                 CONCAT26(in_stack_0000ff04,
                                                                          CONCAT24(in_stack_0000ff02
                                                                                   ,CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))),
                   (int16)CONCAT214(in_stack_0000ff1c,
                                    CONCAT212(in_stack_0000ff1a,
                                              CONCAT210(in_stack_0000ff18,
                                                        CONCAT28(in_stack_0000ff16,
                                                                 CONCAT26(iVar21,CONCAT24(iVar16,
                                                  CONCAT22(iVar22,uVar26))))))),
                   (int16)CONCAT412(in_stack_0000ff2a,
                                    CONCAT210(in_stack_0000ff28,
                                              CONCAT28(in_stack_0000ff26,
                                                       CONCAT26(in_stack_0000ff24,
                                                                CONCAT24(in_stack_0000ff22,
                                                                         CONCAT22(in_stack_0000ff20,
                                                                                  in_stack_0000ff1e)
                                                                        ))))),in_stack_0000ff2e);
            piVar11 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x65f10a8,
                                (LPCSTR)CONCAT22((int)local_6,0x10a8),unaff_SI);
            FUN_1018_52da(param_1,local_a,local_24,(int)&DAT_10a8_86de,piVar11,
                          (LPCSTR)CONCAT22(unaff_DI,unaff_SI),
                          (int16)CONCAT214(in_stack_0000ff0c,
                                           CONCAT212(in_stack_0000ff0a,
                                                     CONCAT210(in_stack_0000ff08,
                                                               CONCAT28(in_stack_0000ff06,
                                                                        CONCAT26(in_stack_0000ff04,
                                                                                 CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                          ));
            local_6._0_2_ = (int)local_6 + (int)local_6._2_2_;
            local_12._0_2_ = (int)local_12 + 1;
          } while ((int)local_12 <= (int)local_8);
        }
        FUN_1018_55f6(param_1,local_12._2_2_ + -4,(int)local_24,0x662,(int16 *)&DAT_10a8_0002,0,
                      CONCAT22(unaff_DI,unaff_SI),in_stack_0000fefe,
                      CONCAT212(in_stack_0000ff0c,
                                CONCAT210(in_stack_0000ff0a,
                                          CONCAT28(in_stack_0000ff08,
                                                   CONCAT26(in_stack_0000ff06,
                                                            CONCAT24(in_stack_0000ff04,
                                                                     CONCAT22(in_stack_0000ff02,
                                                                              in_stack_0000ff00)))))
                               ));
        SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)param_1,(HRGN16)unaff_SI,
                     (HRGN16)unaff_DI,
                     (int16)CONCAT214(in_stack_0000ff0c,
                                      CONCAT212(in_stack_0000ff0a,
                                                CONCAT210(in_stack_0000ff08,
                                                          CONCAT28(in_stack_0000ff06,
                                                                   CONCAT26(in_stack_0000ff04,
                                                                            CONCAT24(
                                                  in_stack_0000ff02,
                                                  CONCAT22(in_stack_0000ff00,in_stack_0000fefe))))))
                                     ));
        local_24 = (undefined *)((local_16._2_2_ - (int)PTR_DAT_10a8_0000_10a8_5794 >> 1) + 2);
        local_6 = 0;
        in_stack_0000ff02 = (int)local_e >> 0xf;
        local_6._2_2_ = (int16 *)0x0;
        in_stack_0000ff00 = local_e;
        do {
          uVar5 = *(undefined4 *)((int)local_6._2_2_ + 0x5be);
          SETTEXTCOLOR((HDC16)uVar5,(COLORREF)CONCAT22(param_1,(int)((ulong)uVar5 >> 0x10)));
          if (local_2e == 0) {
            pcVar18 = *(char **)((int)local_6 + 0x60a);
            uVar27 = 0xffff;
            do {
              if (uVar27 == 0) break;
              uVar27 = uVar27 - 1;
              pcVar3 = pcVar18;
              pcVar18 = pcVar18 + 1;
            } while (*pcVar3 != '\0');
            local_8 = (int16 *)(~uVar27 - 1);
          }
          else {
            local_8 = (int16 *)&PTR_LOOP_10a8_0004;
          }
          FUN_1018_55f6(param_1,local_12._2_2_ + -2,(int)(local_24 + (int)local_22._2_2_),
                        *(undefined2 *)((int)local_6 + 0x60a),local_8,0,CONCAT22(unaff_DI,unaff_SI),
                        in_stack_0000fefe,
                        CONCAT212(in_stack_0000ff0c,
                                  CONCAT210(in_stack_0000ff0a,
                                            CONCAT28(in_stack_0000ff08,
                                                     CONCAT26(in_stack_0000ff06,
                                                              CONCAT24(in_stack_0000ff04,
                                                                       CONCAT22(in_stack_0000ff02,
                                                                                in_stack_0000ff00)))
                                                    ))));
          iVar25 = (int)DAT_10a8_064e >> 0xf;
          uVar27 = *(uint *)((int)local_70 + (int)local_6._2_2_);
          puVar1 = (uint *)((int)local_8c + (int)local_6);
          uVar28 = uVar27 + *puVar1;
          iVar19 = *(int *)((int)local_70 + (int)local_6._2_2_ + 2) + (uint)CARRY2(uVar27,*puVar1);
          if ((iVar25 <= iVar19) && ((iVar25 < iVar19 || (DAT_10a8_064e < uVar28)))) {
            iVar19 = iVar25;
            uVar28 = DAT_10a8_064e;
          }
          uVar24 = (CONCAT22(iVar19,uVar28) * CONCAT22(in_stack_0000ff02,in_stack_0000ff00)) /
                   (long)(int)DAT_10a8_064e;
          uVar9 = local_16 & 0xffff0000;
          local_16 = uVar9 | uVar24 & 0xffff;
          local_16._2_2_ = (int)(uVar9 >> 0x10);
          in_stack_0000fefe = local_16._2_2_ + (int)local_22._2_2_;
          SETRECT((RECT16 *)CONCAT22((int)uVar24 + local_12._2_2_ + 1,in_stack_0000fefe - 1),
                  (int16)CONCAT214(in_stack_0000ff00,
                                   CONCAT212(in_stack_0000fefe,
                                             CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(unaff_SS,
                                                  CONCAT24(local_4a,CONCAT22(iVar21,(int)local_22.
                                                  _2_2_ + 4))))))),
                  (int16)CONCAT214(iVar22,CONCAT212(uVar26,CONCAT210(in_stack_0000ff0c,
                                                                     CONCAT28(in_stack_0000ff0a,
                                                                              CONCAT26(
                                                  in_stack_0000ff08,
                                                  CONCAT24(in_stack_0000ff06,
                                                           CONCAT22(in_stack_0000ff04,
                                                                    in_stack_0000ff02))))))),
                  (int16)CONCAT214(in_stack_0000ff20,
                                   CONCAT212(in_stack_0000ff1e,
                                             CONCAT210(in_stack_0000ff1c,
                                                       CONCAT28(in_stack_0000ff1a,
                                                                CONCAT26(in_stack_0000ff18,
                                                                         CONCAT24(in_stack_0000ff16,
                                                                                  CONCAT22(iVar21,
                                                  iVar16))))))),
                  (int16)CONCAT412(in_stack_0000ff2e,
                                   CONCAT48(in_stack_0000ff2a,
                                            CONCAT26(in_stack_0000ff28,
                                                     CONCAT24(in_stack_0000ff26,
                                                              CONCAT22(in_stack_0000ff24,
                                                                       in_stack_0000ff22))))));
          if ((int)local_16 != 0) {
            FILLRECT(*(int16 **)((int)&PTR_DAT_10a8_0000_10a8_85ce + (int)local_6._2_2_),
                     (HDC16)local_4a,unaff_SS,(HBRUSH16)param_1);
          }
          uVar27 = *(uint *)((int)local_70 + (int)local_6._2_2_);
          puVar1 = (uint *)((int)local_8c + (int)local_6);
          iVar19 = *(int *)((int)local_70 + (int)local_6._2_2_ + 2) + (uint)CARRY2(uVar27,*puVar1);
          if (((int)DAT_10a8_064e >> 0xf <= iVar19) &&
             (((int)DAT_10a8_064e >> 0xf < iVar19 || (DAT_10a8_064e < uVar27 + *puVar1)))) {
            SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_5910,
                         (COLORREF)
                         CONCAT22(param_1,(int)((ulong)_PTR_DAT_10a8_0000_10a8_5910 >> 0x10)));
            TEXTOUT(1,(int16)CONCAT214(in_stack_0000fefe,
                                       CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(param_1,
                                                  CONCAT26(local_2a,CONCAT24(local_24 +
                                                                             (int)local_22._2_2_,
                                                                             0x10a80665)))))),
                    (int16)CONCAT214(uVar26,CONCAT212(in_stack_0000ff0c,
                                                      CONCAT210(in_stack_0000ff0a,
                                                                CONCAT28(in_stack_0000ff08,
                                                                         CONCAT26(in_stack_0000ff06,
                                                                                  CONCAT24(
                                                  in_stack_0000ff04,
                                                  CONCAT22(in_stack_0000ff02,in_stack_0000ff00))))))
                                    ),(LPCSTR)CONCAT22(iVar16,iVar22),
                    (int16)CONCAT214(in_stack_0000ff22,
                                     CONCAT212(in_stack_0000ff20,
                                               CONCAT210(in_stack_0000ff1e,
                                                         CONCAT28(in_stack_0000ff1c,
                                                                  CONCAT26(in_stack_0000ff1a,
                                                                           CONCAT24(
                                                  in_stack_0000ff18,
                                                  CONCAT22(in_stack_0000ff16,iVar21))))))));
          }
          iVar25 = (int)DAT_10a8_064e >> 0xf;
          uVar27 = *(uint *)((int)local_70 + (int)local_6._2_2_);
          iVar19 = *(int *)((int)local_70 + (int)local_6._2_2_ + 2);
          if ((iVar25 <= iVar19) && ((iVar25 < iVar19 || (DAT_10a8_064e < uVar27)))) {
            iVar19 = iVar25;
            uVar27 = DAT_10a8_064e;
          }
          iVar19 = (int)((CONCAT22(iVar19,uVar27) * CONCAT22(in_stack_0000ff02,in_stack_0000ff00)) /
                        (long)(int)DAT_10a8_064e);
          SETRECT((RECT16 *)CONCAT22(iVar19 + local_12._2_2_ + 1,in_stack_0000fefe - 1),
                  (int16)CONCAT214(in_stack_0000ff00,
                                   CONCAT212(in_stack_0000fefe,
                                             CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(unaff_SS,
                                                  CONCAT24(local_4a,CONCAT22(iVar21,(int)local_22.
                                                  _2_2_ + 4))))))),
                  (int16)CONCAT214(iVar22,CONCAT212(uVar26,CONCAT210(in_stack_0000ff0c,
                                                                     CONCAT28(in_stack_0000ff0a,
                                                                              CONCAT26(
                                                  in_stack_0000ff08,
                                                  CONCAT24(in_stack_0000ff06,
                                                           CONCAT22(in_stack_0000ff04,
                                                                    in_stack_0000ff02))))))),
                  (int16)CONCAT214(in_stack_0000ff20,
                                   CONCAT212(in_stack_0000ff1e,
                                             CONCAT210(in_stack_0000ff1c,
                                                       CONCAT28(in_stack_0000ff1a,
                                                                CONCAT26(in_stack_0000ff18,
                                                                         CONCAT24(in_stack_0000ff16,
                                                                                  CONCAT22(iVar21,
                                                  iVar16))))))),
                  (int16)CONCAT412(in_stack_0000ff2e,
                                   CONCAT48(in_stack_0000ff2a,
                                            CONCAT26(in_stack_0000ff28,
                                                     CONCAT24(in_stack_0000ff26,
                                                              CONCAT22(in_stack_0000ff24,
                                                                       in_stack_0000ff22))))));
          if (iVar19 != 0) {
            FILLRECT(*(int16 **)((int)&PTR_DAT_10a8_0000_10a8_85cc + (int)local_6._2_2_),
                     (HDC16)local_4a,unaff_SS,(HBRUSH16)param_1);
          }
          local_6._2_2_ = (int16 *)((int)local_6._2_2_ + 4);
          local_22 = local_22 & 0xffff | (ulong)in_stack_0000fefe << 0x10;
          local_6 = local_6 & 0xffff0000 | (ulong)((int)local_6 + 2U);
        } while ((int)((int)local_6 + 2U) < 8);
        SETBKMODE((int16 *)&DAT_10a8_0002,(HDC16)param_1,
                  (int16)CONCAT214(in_stack_0000ff08,
                                   CONCAT212(in_stack_0000ff06,
                                             CONCAT210(in_stack_0000ff04,
                                                       CONCAT28(in_stack_0000ff02,
                                                                CONCAT26(in_stack_0000ff00,
                                                                         CONCAT24(in_stack_0000fefe,
                                                                                  CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
        local_6._2_2_ = local_30;
        piVar11 = param_1;
      }
      SELECTOBJECT(local_6._2_2_,(HRGN16)piVar11,(HRGN16)unaff_SI,(HRGN16)unaff_DI,
                   (int16)CONCAT214(in_stack_0000ff0c,
                                    CONCAT212(in_stack_0000ff0a,
                                              CONCAT210(in_stack_0000ff08,
                                                        CONCAT28(in_stack_0000ff06,
                                                                 CONCAT26(in_stack_0000ff04,
                                                                          CONCAT24(in_stack_0000ff02
                                                                                   ,CONCAT22(
                                                  in_stack_0000ff00,in_stack_0000fefe))))))));
    }
  }
  SETBKMODE(local_56,(HDC16)param_1,
            (int16)CONCAT214(in_stack_0000ff08,
                             CONCAT212(in_stack_0000ff06,
                                       CONCAT210(in_stack_0000ff04,
                                                 CONCAT28(in_stack_0000ff02,
                                                          CONCAT26(in_stack_0000ff00,
                                                                   CONCAT24(in_stack_0000fefe,
                                                                            CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
  SETTEXTCOLOR((HDC16)local_1e.value,(COLORREF)CONCAT22(param_1,(int)(local_1e.value >> 0x10)));
  SETBKCOLOR((HDC16)local_1a.value,(COLORREF)CONCAT22(param_1,(int)(local_1a.value >> 0x10)));
  DELETEDC((HDC16)local_54);
  return;
}
