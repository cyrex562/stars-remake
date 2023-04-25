
undefined2 __cdecl16far FUN_1000_075a(HDC16 param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int *plf16;
  int16 *piVar4;
  HFONT16 HVar5;
  uint uVar6;
  uint uVar7;
  undefined2 unaff_BP;
  HRGN16 unaff_SI;
  HRGN16 unaff_DI;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  TEXTMETRIC16 *unaff_SS;
  dword dVar11;
  undefined2 in_stack_00000000;
  undefined2 uVar12;
  int in_stack_0000ffda;
  undefined6 in_stack_0000ffdc;
  int in_stack_0000ffe2;
  undefined6 in_stack_0000ffe4;
  undefined8 in_stack_0000ffea;
  undefined8 in_stack_0000fff2;
  undefined2 in_stack_0000fffa;
  undefined2 in_stack_0000fffc;
  int iVar13;

  plf16 = (int *)LOCALALLOC(0x32,0x40);
  uVar12 = 10;
  piVar4 = GETDEVICECAPS((int16 *)0x5a,param_1,
                         (int16)CONCAT214(in_stack_0000ffe2,
                                          CONCAT68(in_stack_0000ffdc,
                                                   CONCAT26(in_stack_0000ffda,
                                                            CONCAT24(unaff_DI,CONCAT22(unaff_SI,10))
                                                           ))));
  piVar4 = MULDIV((int16 *)0x48,
                  (int16)CONCAT610(in_stack_0000ffdc,
                                   CONCAT28(in_stack_0000ffda,
                                            CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(uVar12,
                                                  piVar4))))),
                  (int16)CONCAT88(in_stack_0000ffea,CONCAT62(in_stack_0000ffe4,in_stack_0000ffe2)),
                  (int16)CONCAT214(in_stack_00000000,
                                   CONCAT212(unaff_BP,CONCAT210(in_stack_0000fffc,
                                                                CONCAT28(in_stack_0000fffa,
                                                                         in_stack_0000fff2)))));
  *plf16 = -(int)piVar4;
  iVar13 = 0;
  do {
    pcVar9 = *(char **)(iVar13 + 0xa1e);
    piVar10 = plf16 + 9;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = ~uVar6;
    piVar8 = (int *)(pcVar9 + -uVar6);
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      piVar3 = piVar10;
      piVar10 = piVar10 + 1;
      piVar1 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar3 = *piVar1;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      piVar3 = piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      piVar1 = piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
      *(undefined *)piVar3 = *(undefined *)piVar1;
    }
    HVar5 = CREATEFONTINDIRECT((LOGFONT16 *)plf16);
    *(HFONT16 *)((int)&PTR_DAT_10a8_0000_10a8_7a66 + iVar13) = HVar5;
    iVar13 = iVar13 + 2;
  } while (iVar13 < 4);
  piVar10 = plf16 + 9;
  uVar6 = 0xffff;
  pcVar9 = PTR_s_Arial_10a8_09ed_10a8_0a1e;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar2 != '\0');
  uVar6 = ~uVar6;
  piVar8 = (int *)(pcVar9 + -uVar6);
  for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    piVar3 = piVar10;
    piVar10 = piVar10 + 1;
    piVar1 = piVar8;
    piVar8 = piVar8 + 1;
    *piVar3 = *piVar1;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    piVar3 = piVar10;
    piVar10 = (int *)((int)piVar10 + 1);
    piVar1 = piVar8;
    piVar8 = (int *)((int)piVar8 + 1);
    *(undefined *)piVar3 = *(undefined *)piVar1;
  }
  uVar12 = 6;
  piVar4 = GETDEVICECAPS((int16 *)0x5a,param_1,
                         (int16)CONCAT214(in_stack_0000ffe2,
                                          CONCAT68(in_stack_0000ffdc,
                                                   CONCAT26(in_stack_0000ffda,
                                                            CONCAT24(unaff_DI,CONCAT22(unaff_SI,6)))
                                                  )));
  piVar4 = MULDIV((int16 *)0x48,
                  (int16)CONCAT610(in_stack_0000ffdc,
                                   CONCAT28(in_stack_0000ffda,
                                            CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(uVar12,
                                                  piVar4))))),
                  (int16)CONCAT88(in_stack_0000ffea,CONCAT62(in_stack_0000ffe4,in_stack_0000ffe2)),
                  (int16)CONCAT214(in_stack_00000000,
                                   CONCAT212(unaff_BP,CONCAT210(iVar13,CONCAT28(plf16,
                                                  in_stack_0000fff2)))));
  *plf16 = -(int)piVar4;
  PTR_DAT_10a8_0000_10a8_59ce = (undefined *)CREATEFONTINDIRECT((LOGFONT16 *)plf16);
  uVar12 = 7;
  piVar4 = GETDEVICECAPS((int16 *)0x5a,param_1,
                         (int16)CONCAT214(in_stack_0000ffe2,
                                          CONCAT68(in_stack_0000ffdc,
                                                   CONCAT26(in_stack_0000ffda,
                                                            CONCAT24(unaff_DI,CONCAT22(unaff_SI,7)))
                                                  )));
  piVar4 = MULDIV((int16 *)0x48,
                  (int16)CONCAT610(in_stack_0000ffdc,
                                   CONCAT28(in_stack_0000ffda,
                                            CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(uVar12,
                                                  piVar4))))),
                  (int16)CONCAT88(in_stack_0000ffea,CONCAT62(in_stack_0000ffe4,in_stack_0000ffe2)),
                  (int16)CONCAT214(in_stack_00000000,
                                   CONCAT212(unaff_BP,CONCAT210(iVar13,CONCAT28(plf16,
                                                  in_stack_0000fff2)))));
  *plf16 = -(int)piVar4;
  PTR_DAT_10a8_0000_10a8_59cc = (undefined *)CREATEFONTINDIRECT((LOGFONT16 *)plf16);
  uVar12 = 8;
  piVar4 = GETDEVICECAPS((int16 *)0x5a,param_1,
                         (int16)CONCAT214(in_stack_0000ffe2,
                                          CONCAT68(in_stack_0000ffdc,
                                                   CONCAT26(in_stack_0000ffda,
                                                            CONCAT24(unaff_DI,CONCAT22(unaff_SI,8)))
                                                  )));
  piVar4 = MULDIV((int16 *)0x48,
                  (int16)CONCAT610(in_stack_0000ffdc,
                                   CONCAT28(in_stack_0000ffda,
                                            CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(uVar12,
                                                  piVar4))))),
                  (int16)CONCAT88(in_stack_0000ffea,CONCAT62(in_stack_0000ffe4,in_stack_0000ffe2)),
                  (int16)CONCAT214(in_stack_00000000,
                                   CONCAT212(unaff_BP,CONCAT210(iVar13,CONCAT28(plf16,
                                                  in_stack_0000fff2)))));
  *plf16 = -(int)piVar4;
  iVar13 = 0;
  do {
    piVar10 = plf16 + 9;
    pcVar9 = *(char **)(iVar13 + 0xa1e);
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = ~uVar6;
    piVar8 = (int *)(pcVar9 + -uVar6);
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      piVar3 = piVar10;
      piVar10 = piVar10 + 1;
      piVar1 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar3 = *piVar1;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      piVar3 = piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      piVar1 = piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
      *(undefined *)piVar3 = *(undefined *)piVar1;
    }
    HVar5 = CREATEFONTINDIRECT((LOGFONT16 *)plf16);
    *(HFONT16 *)((int)&PTR_DAT_10a8_0000_10a8_59c4 + iVar13) = HVar5;
    iVar13 = iVar13 + 2;
    if (7 < iVar13) {
      piVar4 = SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c4,param_1,unaff_SI,unaff_DI,
                            (int16)CONCAT610(in_stack_0000ffe4,
                                             CONCAT28(in_stack_0000ffe2,
                                                      CONCAT62(in_stack_0000ffdc,in_stack_0000ffda))
                                            ));
      GETTEXTMETRICS((HDC16)&stack0xffda,unaff_SS);
      PTR_DAT_10a8_0000_10a8_5794 = (undefined *)(in_stack_0000ffe2 + in_stack_0000ffda);
      dVar11 = GETTEXTEXTENT(8,(LPCSTR)0x10a80a26,
                             (int16)CONCAT214(in_stack_0000ffe2,
                                              CONCAT68(in_stack_0000ffdc,
                                                       CONCAT26(in_stack_0000ffda,
                                                                CONCAT24(unaff_DI,CONCAT22(unaff_SI,
                                                  param_1))))));
      PTR_DAT_10a8_0000_10a8_5924 = (undefined *)dVar11;
      SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59cc,param_1,unaff_SI,unaff_DI,
                   (int16)CONCAT610(in_stack_0000ffe4,
                                    CONCAT28(in_stack_0000ffe2,
                                             CONCAT62(in_stack_0000ffdc,in_stack_0000ffda))));
      GETTEXTMETRICS((HDC16)&stack0xffda,unaff_SS);
      PTR_DAT_10a8_0000_10a8_5790 = (undefined *)(in_stack_0000ffe2 + in_stack_0000ffda);
      SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59ce,param_1,unaff_SI,unaff_DI,
                   (int16)CONCAT610(in_stack_0000ffe4,
                                    CONCAT28(in_stack_0000ffe2,
                                             CONCAT62(in_stack_0000ffdc,in_stack_0000ffda))));
      GETTEXTMETRICS((HDC16)&stack0xffda,unaff_SS);
      PTR_DAT_10a8_0000_10a8_5792 = (undefined *)(in_stack_0000ffe2 + in_stack_0000ffda);
      SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_7a66,param_1,unaff_SI,unaff_DI,
                   (int16)CONCAT610(in_stack_0000ffe4,
                                    CONCAT28(in_stack_0000ffe2,
                                             CONCAT62(in_stack_0000ffdc,in_stack_0000ffda))));
      GETTEXTMETRICS((HDC16)&stack0xffda,unaff_SS);
      PTR_DAT_10a8_0000_10a8_8394 = (undefined *)(in_stack_0000ffe2 + in_stack_0000ffda);
      SELECTOBJECT(piVar4,param_1,unaff_SI,unaff_DI,
                   (int16)CONCAT610(in_stack_0000ffe4,
                                    CONCAT28(in_stack_0000ffe2,
                                             CONCAT62(in_stack_0000ffdc,in_stack_0000ffda))));
      LOCALFREE((HLOCAL16)plf16);
      return 1;
    }
  } while( true );
}



// WARNING: Type propagation algorithm not settling

void __cdecl16far FUN_1000_0940(void)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined *puVar7;
  int local_12;
  int local_8;

  local_12 = 2;
  iVar5 = 0xa4a;
  local_8 = 5;
  while (local_12 != 0) {
    bVar3 = 0;
    if (local_8 != 0) {
      pbVar6 = (byte *)(iVar5 + 10);
      puVar7 = (undefined *)&PTR_LOOP_10a8_0004;
      do {
        if ((*pbVar6 & 7) != bVar3) {
          puVar7 = (undefined *)&PTR_LOOP_10a8_0004;
          bVar3 = *pbVar6 & 7;
        }
        piVar1 = (int *)(pbVar6 + -8);
        *piVar1 = *piVar1 + *(int *)(pbVar6 + -10) * (int)PTR_DAT_10a8_0000_10a8_5794;
        *(undefined **)(pbVar6 + -10) = puVar7;
        pbVar2 = pbVar6 + 1;
        *pbVar2 = *pbVar2 & 0xe7;
        if ((*pbVar6 & 0x80) == 0) {
          puVar4 = PTR_DAT_10a8_0000_10a8_5794 + 7;
        }
        else {
          puVar4 = (undefined *)(*(int *)(pbVar6 + -8) + 4);
        }
        puVar7 = puVar7 + (int)puVar4;
        pbVar6 = pbVar6 + 0xe;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    iVar5 = 0xd16;
    local_8 = 7;
    local_12 = local_12 + -1;
  }
  return;
}



WPARAM16 __stdcall16far
FUN_1008_0000(int16 *param_1,byte *param_2,undefined2 param_3_00,int param_3,undefined *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  HACCEL16 HVar5;
  bool bVar6;
  char cVar7;
  int16 *piVar8;
  undefined2 uVar9;
  bool16 bVar10;
  undefined3 extraout_var;
  int iVar11;
  undefined2 uVar12;
  HWND16 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined4 *puVar13;
  byte *pbVar14;
  HWND16 unaff_SS;
  HWND16 HVar15;
  dword dVar16;
  HMENU16 in_stack_00000000;
  HINSTANCE16 in_stack_00000002;
  undefined uVar17;
  MSG16 *msg;
  undefined uVar18;
  HWND16 hwnd;
  undefined2 in_stack_0000ffe8;
  int in_stack_0000ffea;
  WPARAM16 in_stack_0000ffec;
  LPARAM in_stack_0000ffee;
  unkbyte10 in_stack_0000fff2;
  undefined2 in_stack_0000fffc;

                    // Segment:    2
                    // Offset:     00001800
                    // Length:     9e94
                    // Min Alloc:  9e94
                    // Flags:      1d50
                    //     Code
                    //     Discardable
                    //     Moveable
                    //     Preload
                    //     Impure (Non-shareable)
                    //
  HVar15 = (int)s_From___s_c_c_10a8_10a2 + 6;
  uVar17 = (undefined)unaff_SI;
  uVar18 = (undefined)((uint)unaff_SI >> 8);
  PTR_DAT_10a8_0000_10a8_839a = param_4;
  DAT_10a8_85dc = 0;
  PTR_DAT_10a8_0000_10a8_56fa = (undefined *)0x0;
  puVar13 = (undefined4 *)&DAT_10a8_8318;
  for (iVar11 = 2; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar3 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar3 = 0;
  }
  *(undefined2 *)puVar13 = 0;
  if ((param_3 != 0) || (bVar6 = FUN_1008_086c(), (int)CONCAT31(extraout_var,bVar6) != 0)) {
    dVar16 = GETTICKCOUNT();
    uVar12 = (undefined2)(dVar16 >> 0x10);
    FUN_1018_49f0((uint)dVar16);
    iVar11 = FUN_1000_0000();
    if (iVar11 == 0) {
      return 0;
    }
    iVar11 = FUN_1008_0280(CONCAT11(uVar18,uVar17),unaff_DI,in_stack_0000ffe8);
    if ((iVar11 != 0) &&
       (piVar8 = window_op_1008_0e20(param_1,CONCAT11(uVar18,uVar17),
                                     CONCAT26(in_stack_0000ffec,
                                              CONCAT24(in_stack_0000ffea,
                                                       CONCAT22(in_stack_0000ffe8,unaff_DI))),
                                     (int16)CONCAT214(in_stack_0000fffc,
                                                      CONCAT104(in_stack_0000fff2,in_stack_0000ffee)
                                                     ),unaff_BP,in_stack_00000000,in_stack_00000002,
                                     (LPVOID)CONCAT22(param_2,param_1)), piVar8 != (int16 *)0x0)) {
      while (*param_2 != 0) {
        bVar4 = *param_2;
        while (bVar4 == 0x20) {
          param_2 = param_2 + 1;
          bVar4 = *param_2;
        }
        if ((*param_2 == 0x2d) || (*param_2 == 0x2f)) {
          param_2 = param_2 + 1;
          bVar4 = *param_2;
          while ((bVar4 != 0 && (in_stack_0000fffc = param_3_00, *param_2 != 0x20))) {
            bVar4 = *param_2;
            if (bVar4 == 0x77) {
LAB_1008_017e:
              pbVar1 = (byte *)&PTR_DAT_10a8_0000_10a8_56fa;
              *pbVar1 = *pbVar1 | 4;
            }
            else if (bVar4 < 0x78) {
              if (bVar4 == 0x57) goto LAB_1008_017e;
              if ((char)bVar4 < 'X') {
                cVar7 = bVar4 + 0xbd;
              }
              else {
                cVar7 = bVar4 + 0x9d;
              }
              if (cVar7 == '\0') {
                puVar2 = (uint *)&PTR_DAT_10a8_0000_10a8_56fa;
                *puVar2 = *puVar2 ^ (byte)(('\x01' - (*(char *)&DAT_10a8_85dc == '\0')) * '\x02' ^
                                          *(byte *)&PTR_DAT_10a8_0000_10a8_56fa) & 2;
              }
              else if (cVar7 == '\x04') {
                pbVar1 = (byte *)&PTR_DAT_10a8_0000_10a8_56fa;
                *pbVar1 = *pbVar1 | 8;
              }
              else if (cVar7 == '\r') {
                param_2 = param_2 + 1;
                bVar4 = *param_2;
                while (bVar4 == 0x20) {
                  param_2 = param_2 + 1;
                  bVar4 = *param_2;
                }
                bVar4 = *param_2;
                for (pbVar14 = (byte *)&PTR_DAT_10a8_0000_10a8_573c;
                    ((bVar4 != 0 && (*param_2 != 0x20)) && (pbVar14 < (byte *)0x574b));
                    pbVar14 = pbVar14 + 1) {
                  *pbVar14 = *param_2;
                  param_2 = param_2 + 1;
                  bVar4 = *param_2;
                }
                *pbVar14 = 0;
                param_2 = param_2 + -1;
                uVar9 = FUN_1010_2710((char *)&PTR_DAT_10a8_0000_10a8_573c);
                *(undefined2 *)&PTR_DAT_10a8_0000_10a8_0250 = uVar9;
                *(undefined2 *)0x252 = uVar12;
                HVar15 = unaff_SS;
              }
              else if (cVar7 == '\x11') {
                pbVar1 = (byte *)&PTR_DAT_10a8_0000_10a8_56fa;
                *pbVar1 = *pbVar1 | 0x14;
              }
            }
            param_2 = param_2 + 1;
            bVar4 = *param_2;
            in_stack_0000fffc = param_3_00;
          }
        }
        else {
          pbVar14 = (byte *)&DAT_10a8_85dc;
          bVar4 = *param_2;
          while ((bVar4 != 0 && (*param_2 != 0x20))) {
            *pbVar14 = *param_2;
            pbVar14 = pbVar14 + 1;
            param_2 = param_2 + 1;
            bVar4 = *param_2;
          }
          *pbVar14 = 0;
          pbVar1 = (byte *)&PTR_DAT_10a8_0000_10a8_56fa;
          *pbVar1 = *pbVar1 | 3;
          in_stack_0000fffc = param_3_00;
        }
      }
      POSTMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffea,
                                      CONCAT212(in_stack_0000ffe8,
                                                CONCAT210(unaff_DI,CONCAT19(uVar18,CONCAT18(uVar17,
                                                  CONCAT26(*(undefined2 *)
                                                            &PTR_DAT_10a8_0000_10a8_58b4,
                                                           0x46400000000)))))),in_stack_0000ffec,
                  in_stack_0000ffee);
      bVar10 = GETMESSAGE((MSG16 *)0x0,0,
                          (uint16)(ZEXT1416(CONCAT212(in_stack_0000ffec,
                                                      CONCAT210(in_stack_0000ffea,
                                                                CONCAT28(in_stack_0000ffe8,
                                                                         CONCAT26(unaff_DI,CONCAT15(
                                                  uVar18,CONCAT14(uVar17,CONCAT22(unaff_SS,&
                                                  stack0xffe8)))))))) << 0x10),
                          (uint16)CONCAT214(in_stack_0000fffc,
                                            CONCAT104(in_stack_0000fff2,in_stack_0000ffee)));
      do {
        if (bVar10 == 0) {
          FUN_1008_0458();
          return in_stack_0000ffec;
        }
        if (*(int *)&PTR_DAT_10a8_0000_10a8_0242 == 0) {
          hwnd = *(HWND16 *)&PTR_DAT_10a8_0000_10a8_58b4;
          bVar10 = ISICONIC(hwnd);
          if (bVar10 == 0) {
            uVar12 = *(undefined2 *)&PTR_DAT_10a8_0000_10a8_58b4;
            uVar17 = (undefined)uVar12;
            uVar18 = (undefined)((uint)uVar12 >> 8);
            piVar8 = TRANSLATEACCELERATOR
                               ((int16 *)&stack0xffe8,unaff_SS,
                                *(HACCEL16 *)&PTR_DAT_10a8_0000_10a8_5782,
                                (LPMSG16)CONCAT22(hwnd,uVar12));
            msg = (MSG16 *)CONCAT11(uVar18,uVar17);
            if (piVar8 != (int16 *)0x0) goto LAB_1008_025d;
          }
          uVar17 = (undefined)unaff_SS;
          uVar18 = (undefined)(unaff_SS >> 8);
          TRANSLATEMESSAGE((MSG16 *)&stack0xffe8);
          if ((in_stack_0000ffea == 0x100) || (in_stack_0000ffea == 0x101)) {
            uVar17 = (undefined)((ulong)in_stack_0000ffee >> 0x10);
            uVar18 = (undefined)((ulong)in_stack_0000ffee >> 0x18);
            iVar11 = FUN_1008_5218(in_stack_0000ffe8,in_stack_0000ffea,in_stack_0000ffec,
                                   in_stack_0000ffee);
            msg = (MSG16 *)CONCAT11(uVar18,uVar17);
            if (iVar11 != 0) goto LAB_1008_025d;
          }
          msg = (MSG16 *)CONCAT11(uVar18,uVar17);
          if (in_stack_0000ffea == 0x102) {
            uVar17 = (undefined)((ulong)in_stack_0000ffee >> 0x10);
            uVar18 = (undefined)((ulong)in_stack_0000ffee >> 0x18);
            iVar11 = FUN_1008_51cc(in_stack_0000ffe8,in_stack_0000ffec,in_stack_0000ffee);
            msg = (MSG16 *)CONCAT11(uVar18,uVar17);
            if (iVar11 != 0) goto LAB_1008_025d;
          }
LAB_1008_0253:
          DISPATCHMESSAGE((MSG16 *)&stack0xffe8);
        }
        else {
          hwnd = *(HWND16 *)&PTR_DAT_10a8_0000_10a8_58b4;
          HVar5 = *(HACCEL16 *)&PTR_DAT_10a8_0000_10a8_7c32;
          uVar17 = (undefined)HVar5;
          uVar18 = (undefined)(HVar5 >> 8);
          piVar8 = TRANSLATEACCELERATOR
                             ((int16 *)&stack0xffe8,unaff_SS,HVar5,
                              (LPMSG16)CONCAT22(in_stack_0000ffe8,hwnd));
          msg = (MSG16 *)CONCAT11(uVar18,uVar17);
          if (piVar8 == (int16 *)0x0) {
            msg = (MSG16 *)&stack0xffe8;
            hwnd = unaff_SS;
            TRANSLATEMESSAGE(msg);
            goto LAB_1008_0253;
          }
        }
LAB_1008_025d:
        bVar10 = GETMESSAGE((MSG16 *)0x0,0,
                            (uint16)(ZEXT1416(CONCAT212(in_stack_0000ffec,
                                                        CONCAT210(in_stack_0000ffea,
                                                                  CONCAT28(in_stack_0000ffe8,
                                                                           CONCAT26(hwnd,CONCAT15((
                                                  char)((uint)msg >> 8),
                                                  CONCAT14((char)msg,CONCAT22(unaff_SS,&stack0xffe8)
                                                          ))))))) << 0x10),
                            (uint16)CONCAT214(in_stack_0000fffc,
                                              CONCAT104(in_stack_0000fff2,in_stack_0000ffee)));
      } while( true );
    }
  }
  FUN_1018_50b2(0x14,0x10);
  return 0;
}


undefined2 __cdecl16far FUN_1008_0280(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int16 *__return_storage_ptr__;
  int16 *piVar2;
  int16 *piVar3;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  COLORREF CVar4;
  void *pvVar5;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  HDC16 hdc;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;

  if (PTR_DAT_10a8_0000_10a8_0010 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0010);
  }
  if (PTR_DAT_10a8_0000_10a8_0014 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0014);
  }
  if (PTR_DAT_10a8_0000_10a8_0016 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0016);
  }
  if (PTR_DAT_10a8_0000_10a8_0012 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0012);
  }
  if (PTR_DAT_10a8_0000_10a8_001a != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_001a);
  }
  if (PTR_DAT_10a8_0000_10a8_0018 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0018);
  }
  if (PTR_DAT_10a8_0000_10a8_001c != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_001c);
  }
  if (PTR_DAT_10a8_0000_10a8_001e != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_001e);
  }
  uVar14 = 0xf;
  _DAT_10a8_5714 =
       GETSYSCOLOR((int16)CONCAT214(param_3,CONCAT212(param_2,CONCAT210(param_1,CONCAT28(
                                                  in_stack_00000002,
                                                  CONCAT26(in_stack_00000000,
                                                           CONCAT24(unaff_DI,CONCAT22(unaff_SI,0xf))
                                                          ))))));
  PTR_DAT_10a8_0000_10a8_0010 = (undefined *)FUN_1018_66a6(_DAT_10a8_5714);
  uVar13 = 0x14;
  CVar4 = GETSYSCOLOR((int16)CONCAT214(param_2,CONCAT212(param_1,CONCAT210(in_stack_00000002,
                                                                           CONCAT28(
                                                  in_stack_00000000,
                                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(
                                                  uVar14,0x14))))))));
  PTR_DAT_10a8_0000_10a8_0014 = (undefined *)FUN_1018_66a6(CVar4.value);
  uVar12 = 0x10;
  CVar4 = GETSYSCOLOR((int16)CONCAT214(param_1,CONCAT212(in_stack_00000002,
                                                         CONCAT210(in_stack_00000000,
                                                                   CONCAT28(unaff_DI,CONCAT26(
                                                  unaff_SI,CONCAT24(uVar14,CONCAT22(uVar13,0x10)))))
                                                  )));
  PTR_DAT_10a8_0000_10a8_0016 = (undefined *)FUN_1018_66a6(CVar4.value);
  uVar11 = 0x12;
  _PTR_DAT_10a8_0000_10a8_5910 =
       GETSYSCOLOR((int16)CONCAT214(in_stack_00000002,
                                    CONCAT212(in_stack_00000000,
                                              CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(uVar14,
                                                  CONCAT24(uVar13,CONCAT22(uVar12,0x12))))))));
  PTR_DAT_10a8_0000_10a8_0012 = (undefined *)FUN_1018_66a6(_PTR_DAT_10a8_0000_10a8_5910);
  uVar10 = 6;
  CVar4 = GETSYSCOLOR((int16)CONCAT214(in_stack_00000000,
                                       CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(uVar14,
                                                  CONCAT26(uVar13,CONCAT24(uVar12,CONCAT22(uVar11,6)
                                                                          )))))));
  PTR_DAT_10a8_0000_10a8_001c = (undefined *)FUN_1018_66a6(CVar4.value);
  uVar9 = 1;
  CVar4 = GETSYSCOLOR((int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(uVar14,CONCAT28(uVar13,
                                                  CONCAT26(uVar12,CONCAT24(uVar11,CONCAT22(uVar10,1)
                                                                          )))))));
  PTR_DAT_10a8_0000_10a8_001e = (undefined *)FUN_1018_66a6(CVar4.value);
  uVar8 = 5;
  _PTR_DAT_10a8_0000_10a8_58a0 =
       GETSYSCOLOR((int16)CONCAT214(unaff_SI,CONCAT212(uVar14,CONCAT210(uVar13,CONCAT28(uVar12,
                                                  CONCAT26(uVar11,CONCAT24(uVar10,CONCAT22(uVar9,5))
                                                          ))))));
  PTR_DAT_10a8_0000_10a8_0018 = (undefined *)FUN_1018_66a6(_PTR_DAT_10a8_0000_10a8_58a0);
  uVar7 = 8;
  _PTR_DAT_10a8_0000_10a8_7ac8 =
       GETSYSCOLOR((int16)CONCAT214(uVar14,CONCAT212(uVar13,CONCAT210(uVar12,CONCAT28(uVar11,
                                                  CONCAT26(uVar10,CONCAT24(uVar9,CONCAT22(uVar8,8)))
                                                  )))));
  PTR_DAT_10a8_0000_10a8_001a = (undefined *)FUN_1018_66a6(_PTR_DAT_10a8_0000_10a8_7ac8);
  uVar6 = 4;
  PTR_DAT_10a8_0000_10a8_81dc =
       (undefined *)
       GETSYSTEMMETRICS((int16 *)&PTR_LOOP_10a8_0004,
                        (int16)CONCAT214(uVar14,CONCAT212(uVar13,CONCAT210(uVar12,CONCAT28(uVar11,
                                                  CONCAT26(uVar10,CONCAT24(uVar9,CONCAT22(uVar8,
                                                  uVar7))))))));
  uVar14 = 0x20;
  PTR_DAT_10a8_0000_10a8_5784 =
       (undefined *)
       GETSYSTEMMETRICS((int16 *)&PTR_DAT_10a8_0000_10a8_0020,
                        (int16)CONCAT214(uVar13,CONCAT212(uVar12,CONCAT210(uVar11,CONCAT28(uVar10,
                                                  CONCAT26(uVar9,CONCAT24(uVar8,CONCAT22(uVar7,uVar6
                                                                                        ))))))));
  hdc = 0x21;
  PTR_DAT_10a8_0000_10a8_5786 =
       (undefined *)
       GETSYSTEMMETRICS((int16 *)((int)&PTR_DAT_10a8_0000_10a8_0020 + 1),
                        (int16)CONCAT214(uVar12,CONCAT212(uVar11,CONCAT210(uVar10,CONCAT28(uVar9,
                                                  CONCAT26(uVar8,CONCAT24(uVar7,CONCAT22(uVar6,
                                                  uVar14))))))));
  if (PTR_DAT_10a8_0000_10a8_1310 != (undefined *)0x0) {
    pvVar5 = GLOBALLOCK((HGLOBAL16)PTR_DAT_10a8_0000_10a8_1310);
    uVar12 = (undefined2)((ulong)pvVar5 >> 0x10);
    iVar1 = (int)pvVar5;
    *(undefined *)(iVar1 + 0x40e) = DAT_10a8_5714;
    *(undefined *)(iVar1 + 0x40d) = DAT_10a8_5715;
    *(undefined *)(iVar1 + 0x40c) = PTR_DAT_10a8_0000_10a8_5716._0_1_;
    GLOBALUNLOCK((HGLOBAL16)PTR_DAT_10a8_0000_10a8_1310);
  }
  __return_storage_ptr__ = (int16 *)GETDC(0);
  piVar2 = GETDEVICECAPS((int16 *)&PTR_DAT_10a8_0000_10a8_000c,(HDC16)__return_storage_ptr__,
                         (int16)CONCAT214(uVar11,CONCAT212(uVar10,CONCAT210(uVar9,CONCAT28(uVar8,
                                                  CONCAT26(uVar7,CONCAT24(uVar6,CONCAT22(uVar14,hdc)
                                                                         )))))));
  piVar3 = GETDEVICECAPS((int16 *)0xe,(HDC16)__return_storage_ptr__,
                         (int16)CONCAT214(uVar11,CONCAT212(uVar10,CONCAT210(uVar9,CONCAT28(uVar8,
                                                  CONCAT26(uVar7,CONCAT24(uVar6,CONCAT22(uVar14,hdc)
                                                                         )))))));
  PTR_DAT_10a8_0000_10a8_839c = (undefined *)((int)piVar3 * (int)piVar2);
  RELEASEDC(__return_storage_ptr__,0,hdc);
  return 1;
}


void __cdecl16far FUN_1008_0458(void)

{
  undefined4 uVar1;
  HCURSOR16 hCursor;
  HGDIOBJ16 *pHVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;

  if (PTR_DAT_10a8_0000_10a8_0010 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0010);
  }
  if (PTR_DAT_10a8_0000_10a8_0014 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0014);
  }
  if (PTR_DAT_10a8_0000_10a8_0016 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0016);
  }
  if (PTR_DAT_10a8_0000_10a8_0012 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0012);
  }
  if (PTR_DAT_10a8_0000_10a8_001a != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_001a);
  }
  if (PTR_DAT_10a8_0000_10a8_0018 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0018);
  }
  if (PTR_DAT_10a8_0000_10a8_001c != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_001c);
  }
  if (PTR_DAT_10a8_0000_10a8_001e != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_001e);
  }
  if (PTR_DAT_10a8_0000_10a8_0024 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0024);
  }
  if (PTR_DAT_10a8_0000_10a8_0026 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0026);
  }
  if (PTR_DAT_10a8_0000_10a8_0028 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0028);
  }
  pHVar2 = (HGDIOBJ16 *)&PTR_DAT_10a8_0000_10a8_58a4;
  do {
    if (*pHVar2 != 0) {
      FUN_1018_673a(*pHVar2);
    }
    pHVar2 = pHVar2 + 1;
  } while (pHVar2 < (HGDIOBJ16 *)((int)&PTR_DAT_10a8_0000_10a8_58ac + 1));
  pHVar2 = (HGDIOBJ16 *)&PTR_DAT_10a8_0000_10a8_85ba;
  local_4 = 3;
  do {
    iVar4 = 2;
    do {
      FUN_1018_673a(*pHVar2);
      pHVar2 = pHVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pHVar2 = (HGDIOBJ16 *)&PTR_DAT_10a8_0000_10a8_85cc;
  local_4 = 4;
  do {
    iVar4 = 2;
    do {
      FUN_1018_673a(*pHVar2);
      pHVar2 = pHVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FREEPROCINSTANCE(_PTR_DAT_10a8_0000_10a8_588e);
  FREEPROCINSTANCE(_PTR_DAT_10a8_0000_10a8_5798);
  FREEPROCINSTANCE(_PTR_DAT_10a8_0000_10a8_830a);
  FREEPROCINSTANCE(_PTR_DAT_10a8_0000_10a8_82d4);
  if (_PTR_DAT_10a8_0000_10a8_002a != (void *)0x0) {
    FREEPROCINSTANCE(_PTR_DAT_10a8_0000_10a8_002a);
  }
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_8344);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_5718);
  hCursor = LOADCURSOR(0x7f00,(LPCSTR)0x0);
  SETCURSOR(hCursor);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_7c3e);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_7d50);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_8390);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_86dc);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_58b2);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_71dc);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_5788);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_59d2);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_82d2);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_7ad0);
  DESTROYCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_834a);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_7c34);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_5738);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_71e4);
  DESTROYICON((HICON16)PTR_DAT_10a8_0000_10a8_0246);
  DESTROYICON((HICON16)PTR_DAT_10a8_0000_10a8_0248);
  FREERESOURCE((HGLOBAL16)PTR_DAT_10a8_0000_10a8_7b42);
  FREERESOURCE((HGLOBAL16)PTR_DAT_10a8_0000_10a8_84d6);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_5846);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_591e);
  FREERESOURCE((HGLOBAL16)PTR_DAT_10a8_0000_10a8_1310);
  iVar4 = 0;
  do {
    DELETEOBJECT(*(HGDIOBJ16 *)((int)&PTR_DAT_10a8_0000_10a8_575a + iVar4));
    FREERESOURCE(*(HGLOBAL16 *)((int)&PTR_DAT_10a8_0000_10a8_7d46 + iVar4));
    iVar4 = iVar4 + 2;
  } while (iVar4 < 8);
  FUN_1038_04ca((uint)_PTR_DAT_10a8_0000_10a8_0fce,
                (uint)((ulong)_PTR_DAT_10a8_0000_10a8_0fce >> 0x10),4);
  _PTR_DAT_10a8_0000_10a8_0fce = 0;
  FUN_1038_04ca((uint)_PTR_DAT_10a8_0000_10a8_103c,
                (uint)((ulong)_PTR_DAT_10a8_0000_10a8_103c >> 0x10),2);
  _PTR_DAT_10a8_0000_10a8_103c = 0;
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_839e);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_7d60);
  if (PTR_DAT_10a8_0000_10a8_0584 != (undefined *)0x0) {
    DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0584);
  }
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_83a2);
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_87de);
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_578a);
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_8852);
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_57a0);
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_589a);
  if (PTR_DAT_10a8_0000_10a8_85c8 != (undefined *)0x0) {
    FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_85c8);
  }
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0020);
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_0022);
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_5720);
  FUN_1018_673a((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_82b8);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_7d4e);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_8316);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_8fbe);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_83c8);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_8844);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_574e);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_85c6);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_7b46);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_8802);
  if (PTR_DAT_10a8_0000_10a8_85b8 != (undefined *)0x0) {
    DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_85b8);
  }
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_85ca);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_59d0);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_5764);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_7a66);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_7a68);
  pHVar2 = (HGDIOBJ16 *)&PTR_DAT_10a8_0000_10a8_59c4;
  do {
    DELETEOBJECT(*pHVar2);
    pHVar2 = pHVar2 + 1;
  } while (pHVar2 < (HGDIOBJ16 *)&PTR_DAT_10a8_0000_10a8_59cc);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_59ce);
  DELETEOBJECT((HGDIOBJ16)PTR_DAT_10a8_0000_10a8_59cc);
  puVar3 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_440e;
  do {
    uVar1 = *puVar3;
    FUN_1038_01b0((uint)uVar1,(uint)((ulong)uVar1 >> 0x10));
    puVar3 = puVar3 + 1;
  } while (puVar3 < (undefined4 *)0x4432);
  return;
}


bool __cdecl16far FUN_1008_086c(void)

{
  ATOM AVar1;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  undefined extraout_AH_04;
  undefined extraout_AH_05;
  undefined extraout_AH_06;
  UINT UVar2;
  WNDPROC pWVar3;
  int iVar4;
  int iVar5;
  HINSTANCE pHVar6;
  HICON pHVar7;
  HCURSOR pHVar8;

  iVar4 = 0;
  pHVar6 = (HINSTANCE)0x0;
  pHVar7 = (HICON)PTR_DAT_10a8_0000_10a8_839a;
  LOADCURSOR(0x7f00,(LPCSTR)0x0);
  AVar1 = REGISTERCLASS((WNDCLASS *)&stack0xffe4);
  if (CONCAT11(extraout_AH,AVar1) != 0) {
    GETSTOCKOBJECT((int16)ZEXT1416(CONCAT212(pHVar7,CONCAT210(pHVar6,CONCAT28(iVar4,
                                                  0x10102af8020b0001)))));
    AVar1 = REGISTERCLASS((WNDCLASS *)&stack0xffe4);
    if (CONCAT11(extraout_AH_00,AVar1) != 0) {
      pHVar8 = (HCURSOR)0x0;
      GETSTOCKOBJECT((int16)ZEXT1416(CONCAT212(pHVar7,CONCAT210(pHVar6,CONCAT28(iVar4,
                                                  0x10300000020b0004)))));
      AVar1 = REGISTERCLASS((WNDCLASS *)&stack0xffe4);
      if (CONCAT11(extraout_AH_01,AVar1) != 0) {
        GETSTOCKOBJECT((int16)CONCAT214(pHVar8,CONCAT212(pHVar7,CONCAT210(pHVar6,CONCAT28(iVar4,
                                                  0x100879f4020b0001)))));
        pHVar8 = (HCURSOR)0x0;
        AVar1 = REGISTERCLASS((WNDCLASS *)&stack0xffe4);
        if (CONCAT11(extraout_AH_02,AVar1) != 0) {
          GETSTOCKOBJECT((int16)CONCAT214(pHVar8,CONCAT212(pHVar7,CONCAT210(pHVar6,CONCAT28(iVar4,
                                                  0x1020000002000001)))));
          pHVar8 = (HCURSOR)0x0;
          AVar1 = REGISTERCLASS((WNDCLASS *)&stack0xffe4);
          if (CONCAT11(extraout_AH_03,AVar1) != 0) {
            GETSTOCKOBJECT((int16)CONCAT214(pHVar8,CONCAT212(pHVar7,CONCAT210(pHVar6,CONCAT28(iVar4,
                                                  0x1058000002000000)))));
            pHVar8 = (HCURSOR)0x0;
            AVar1 = REGISTERCLASS((WNDCLASS *)&stack0xffe4);
            if (CONCAT11(extraout_AH_04,AVar1) != 0) {
              GETSTOCKOBJECT((int16)CONCAT214(pHVar8,CONCAT212(pHVar7,CONCAT210(pHVar6,CONCAT28(
                                                  iVar4,0x1070177402000001)))));
              AVar1 = REGISTERCLASS((WNDCLASS *)&stack0xffe4);
              if (CONCAT11(extraout_AH_05,AVar1) != 0) {
                pWVar3 = (WNDPROC)0x748a;
                iVar4 = (int)s_backup_d_10a8_1001 + 7;
                iVar5 = 0;
                pHVar6 = (HINSTANCE)0x0;
                UVar2 = 0;
                pHVar8 = (HCURSOR)0x0;
                pHVar7 = (HICON)PTR_DAT_10a8_0000_10a8_839a;
                LOADCURSOR(0x7f00,(LPCSTR)0x0);
                GETSTOCKOBJECT((int16)CONCAT214(pHVar8,CONCAT212(pHVar7,CONCAT210(pHVar6,CONCAT28(
                                                  iVar5,CONCAT26(iVar4,CONCAT24(pWVar3,CONCAT22(
                                                  UVar2,4))))))));
                AVar1 = REGISTERCLASS((WNDCLASS *)&stack0xffe4);
                return (bool)('\x01' - (CONCAT11(extraout_AH_06,AVar1) == 0));
              }
            }
          }
        }
      }
    }
  }
  return false;
}


int16 * __cdecl16far
window_op_1008_0e20(int16 *__return_storage_ptr__,HWND16 hwnd_arg1,undefined8 param_2,int16 param_3,
                   HWND16 hwnd_arg4,HMENU16 hmenu_arg5,HINSTANCE16 hinstance_arg6,LPVOID param_7)

{
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined4 in_stack_00000000;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;

  PTR_DAT_10a8_0000_10a8_56fa._0_1_ = (byte)PTR_DAT_10a8_0000_10a8_56fa & 0x1a;
  PTR_DAT_10a8_0000_10a8_5700 = (undefined *)0xffff;
  FUN_1008_6538();
  uVar1 = (undefined2)_PTR_DAT_10a8_0000_10a8_56f0;
  uVar2 = (undefined2)(_PTR_DAT_10a8_0000_10a8_56f0 >> 0x10);
  uVar3 = (undefined2)_PTR_DAT_10a8_0000_10a8_56f4;
  uVar4 = (undefined2)(_PTR_DAT_10a8_0000_10a8_56f4 >> 0x10);
  PTR_DAT_10a8_0000_10a8_58b4 =
       (undefined *)
       CREATEWINDOW((LPCSTR)0x0,(LPCSTR)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                    _PTR_DAT_10a8_0000_10a8_56f4 & 0xffff0000,
                    (int16)ZEXT1516(CONCAT114(0xd8,CONCAT212(0x10a8,CONCAT210(0x2ae,CONCAT46(
                                                  0xcf0000,CONCAT24(uVar1,
                                                  _PTR_DAT_10a8_0000_10a8_56f0 & 0xffff0000 |
                                                  _PTR_DAT_10a8_0000_10a8_56f4 & 0xffff)))))),
                    (int16)CONCAT214(unaff_BP,CONCAT212(uVar4,CONCAT210(uVar3,CONCAT28(uVar2,
                                                  CONCAT26(uVar1,CONCAT24(unaff_DI,CONCAT22(unaff_SI
                                                  ,0x10a8))))))),
                    (int16)CONCAT88(param_2,CONCAT26(hwnd_arg1,
                                                     CONCAT24(__return_storage_ptr__,
                                                              in_stack_00000000))),param_3,hwnd_arg4
                    ,hmenu_arg5,hinstance_arg6,param_7);
  if (((PTR_DAT_10a8_0000_10a8_58b4 != (undefined *)0x0) &&
      (PTR_DAT_10a8_0000_10a8_0238 = PTR_DAT_10a8_0000_10a8_58b4,
      PTR_DAT_10a8_0000_10a8_5782 = (undefined *)LOADACCELERATORS(0x74,(LPCSTR)0x0),
      PTR_DAT_10a8_0000_10a8_5782 != (undefined *)0x0)) &&
     (PTR_DAT_10a8_0000_10a8_7c32 = (undefined *)LOADACCELERATORS(0x438,(LPCSTR)0x0),
     PTR_DAT_10a8_0000_10a8_7c32 != (undefined *)0x0)) {
    if (__return_storage_ptr__ == (int16 *)&DAT_10a8_0001) {
      if (((byte)PTR_DAT_10a8_0000_10a8_56f8 & 3) == 0) {
        __return_storage_ptr__ = (int16 *)&DAT_10a8_0001;
      }
      else {
        __return_storage_ptr__ = (int16 *)&DAT_10a8_0003;
      }
    }
    SHOWWINDOW((HWND16)__return_storage_ptr__,
               (int16)CONCAT412(in_stack_00000000,
                                CONCAT210(unaff_BP,CONCAT28(uVar4,CONCAT26(uVar3,CONCAT24(uVar2,
                                                  CONCAT22(uVar1,PTR_DAT_10a8_0000_10a8_58b4)))))));
    SHOWWINDOW(0,(int16)CONCAT412(in_stack_00000000,
                                  CONCAT210(unaff_BP,CONCAT28(uVar4,CONCAT26(uVar3,CONCAT24(uVar2,
                                                  CONCAT22(uVar1,PTR_DAT_10a8_0000_10a8_58b4)))))));
    return (int16 *)&DAT_10a8_0001;
  }
  return (int16 *)0x0;
}


void __cdecl16far window_op_1008_0ede(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  char *pcVar4;
  undefined2 unaff_SS;
  undefined *hwnd;
  undefined *puVar5;
  undefined uVar6;
  undefined uVar7;
  char *in_stack_0000ff84;
  undefined2 in_stack_0000ff86;
  bool16 in_stack_0000ff88;
  bool16 in_stack_0000ff8a;
  undefined2 in_stack_0000ff8c;
  unkbyte10 in_stack_0000ff8e;
  undefined2 in_stack_0000ff98;
  undefined2 in_stack_0000ff9a;
  undefined2 in_stack_0000ff9c;
  unkbyte10 in_stack_0000ff9e;
  HWND16 in_stack_0000ffa8;
  HWND16 in_stack_0000ffaa;
  HWND16 in_stack_0000ffac;
  HWND16 in_stack_0000ffae;
  HMENU16 in_stack_0000ffb0;
  HINSTANCE16 in_stack_0000ffb2;
  undefined2 in_stack_0000ffb4;
  undefined2 in_stack_0000ffb6;
  undefined auStack_17 [9];
  undefined local_e;
  undefined2 local_6;
  undefined2 local_4;

  uVar6 = (undefined)unaff_SI;
  uVar7 = (undefined)((uint)unaff_SI >> 8);
  if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
    _WSPRINTF((int16 *)&stack0xff86,(LPSTR)CONCAT22(0x2d3,unaff_SS),(LPCSTR)0x4410a8,
              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
  }
  else {
    pcVar4 = (char *)&DAT_10a8_85dc;
    uVar3 = 0xffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
    pcVar4 = (char *)((int)&PTR_DAT_10a8_0000_10a8_85da + ~uVar3);
    do {
      pcVar2 = pcVar4;
      if ((pcVar2 <= (char *)&DAT_10a8_85dc) ||
         (in_stack_0000ff84 = pcVar2 + -1, *in_stack_0000ff84 == '\\')) break;
      pcVar4 = in_stack_0000ff84;
    } while (*in_stack_0000ff84 != ':');
    local_e = 0;
    FUN_10a0_0352(auStack_17 + 1,pcVar2,8);
    FUN_10a0_053c(auStack_17 + 1);
    pcVar4 = auStack_17;
    uVar3 = 0xffff;
    do {
      pcVar4 = pcVar4 + 1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
    } while (*pcVar4 != '\0');
    _WSPRINTF((int16 *)(auStack_17 + ~uVar3),(LPSTR)CONCAT22(0x2b5,unaff_SS),
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0001_10a8_00c0 + 1,0x10a8),
              (VA_LIST16)CONCAT11(uVar7,uVar6));
    FUN_1010_0792((int)PTR_DAT_10a8_0001_10a8_00c0,0,1,0,0,0);
    _WSPRINTF((int16 *)&stack0xff86,(LPSTR)CONCAT22(0x2ba,unaff_SS),(LPCSTR)0x4410a8,
              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
  }
  hwnd = &stack0xff86;
  puVar5 = PTR_DAT_10a8_0000_10a8_58b4;
  SETWINDOWTEXT((HWND16)hwnd,CONCAT22(PTR_DAT_10a8_0000_10a8_58b4,unaff_SS));
  if (PTR_DAT_10a8_0001_10a8_00c0 != (undefined *)0xffff) {
    if (PTR_DAT_10a8_0000_10a8_00c4 == (undefined *)0x0) {
      PTR_DAT_10a8_0000_10a8_00c4 =
           (undefined *)
           CREATEWINDOW((LPCSTR)0x0,(LPCSTR)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                        CONCAT22(10,PTR_DAT_10a8_0000_10a8_58b4),
                        (int16)CONCAT214(0xe4,ZEXT1014(CONCAT28(0x5000,0xff38ff38000a))),
                        (int16)CONCAT214(in_stack_0000ff86,
                                         CONCAT212(in_stack_0000ff84,
                                                   CONCAT210(unaff_DI,CONCAT19(uVar7,CONCAT18(uVar6,
                                                  CONCAT26(puVar5,CONCAT24(unaff_SS,CONCAT22(hwnd,
                                                  0x10a8)))))))),
                        (int16)CONCAT106(in_stack_0000ff8e,
                                         CONCAT24(in_stack_0000ff8c,
                                                  CONCAT22(in_stack_0000ff8a,in_stack_0000ff88))),
                        (int16)CONCAT106(in_stack_0000ff9e,
                                         CONCAT24(in_stack_0000ff9c,
                                                  CONCAT22(in_stack_0000ff9a,in_stack_0000ff98))),
                        in_stack_0000ffa8,in_stack_0000ffaa,in_stack_0000ffac,
                        (LPVOID)CONCAT22(in_stack_0000ffb0,in_stack_0000ffae));
      PTR_DAT_10a8_0000_10a8_023c = PTR_DAT_10a8_0000_10a8_00c4;
    }
    else {
      INVALIDATERECT(1,(RECT16 *)0x0,0);
      PTR_DAT_10a8_0000_10a8_589c = (undefined *)((int)s__s___s_computer_player__10a8_03d3 + 0x15);
      PTR_DAT_10a8_0000_10a8_589e = (undefined *)((int)s__s___s_computer_player__10a8_03d3 + 0x15);
      FUN_1030_2b72(PTR_DAT_10a8_0000_10a8_00c4,
                    CONCAT210(in_stack_0000ff86,
                              CONCAT28(in_stack_0000ff84,
                                       CONCAT26(unaff_DI,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT22(
                                                  puVar5,unaff_SS)))))),in_stack_0000ff88,
                    in_stack_0000ff8a);
    }
    if (PTR_DAT_10a8_0000_10a8_00c8 == (undefined *)0x0) {
      PTR_DAT_10a8_0000_10a8_00c8 =
           (undefined *)
           CREATEWINDOW((LPCSTR)0x0,(LPCSTR)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                        CONCAT22(local_4,PTR_DAT_10a8_0000_10a8_58b4),
                        (int16)CONCAT214(0xee,ZEXT1014(CONCAT28(0x5000,(qword)CONCAT24(0xfe0c,
                                                  CONCAT22(0xfe0c,local_6))))),
                        (int16)CONCAT214(in_stack_0000ff88,
                                         CONCAT212(in_stack_0000ff86,
                                                   CONCAT210(in_stack_0000ff84,
                                                             CONCAT28(unaff_DI,CONCAT17(uVar7,
                                                  CONCAT16(uVar6,CONCAT24(puVar5,CONCAT22(unaff_SS,
                                                  0x10a8)))))))),
                        (int16)CONCAT214(in_stack_0000ff98,
                                         CONCAT104(in_stack_0000ff8e,
                                                   CONCAT22(in_stack_0000ff8c,in_stack_0000ff8a))),
                        (int16)CONCAT214(in_stack_0000ffa8,
                                         CONCAT104(in_stack_0000ff9e,
                                                   CONCAT22(in_stack_0000ff9c,in_stack_0000ff9a))),
                        in_stack_0000ffaa,in_stack_0000ffac,in_stack_0000ffae,
                        (LPVOID)CONCAT22(in_stack_0000ffb2,in_stack_0000ffb0));
      PTR_DAT_10a8_0000_10a8_0240 = PTR_DAT_10a8_0000_10a8_00c8;
    }
    else {
      INVALIDATERECT(1,(RECT16 *)0x0,0);
    }
    if (PTR_DAT_10a8_0000_10a8_00ca == (undefined *)0x0) {
      PTR_DAT_10a8_0000_10a8_00ca =
           (undefined *)
           CREATEWINDOW((LPCSTR)0x0,(LPCSTR)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                        CONCAT22(10,PTR_DAT_10a8_0000_10a8_58b4),
                        (int16)CONCAT214(0xf8,ZEXT1014(CONCAT28(0x5000,0xfe0cfe0c000a))),
                        (int16)CONCAT214(in_stack_0000ff8a,
                                         CONCAT212(in_stack_0000ff88,
                                                   CONCAT210(in_stack_0000ff86,
                                                             CONCAT28(in_stack_0000ff84,
                                                                      CONCAT26(unaff_DI,CONCAT15(
                                                  uVar7,CONCAT14(uVar6,CONCAT22(puVar5,0x10a8)))))))
                                        ),
                        (int16)CONCAT214(in_stack_0000ff9a,
                                         CONCAT212(in_stack_0000ff98,
                                                   CONCAT102(in_stack_0000ff8e,in_stack_0000ff8c))),
                        (int16)CONCAT214(in_stack_0000ffaa,
                                         CONCAT212(in_stack_0000ffa8,
                                                   CONCAT102(in_stack_0000ff9e,in_stack_0000ff9c))),
                        in_stack_0000ffac,in_stack_0000ffae,in_stack_0000ffb0,
                        (LPVOID)CONCAT22(in_stack_0000ffb4,in_stack_0000ffb2));
      PTR_DAT_10a8_0000_10a8_023a = PTR_DAT_10a8_0000_10a8_00ca;
    }
    else {
      INVALIDATERECT(1,(RECT16 *)0x0,0);
    }
    if (PTR_DAT_10a8_0000_10a8_00cc != (undefined *)0x0) {
      FUN_1040_17a6(3);
    }
    PTR_DAT_10a8_0000_10a8_00cc =
         (undefined *)
         CREATEWINDOW((LPCSTR)0x0,(LPCSTR)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                      CONCAT22(10,PTR_DAT_10a8_0000_10a8_58b4),
                      (int16)CONCAT214(0x104,ZEXT1014(CONCAT28(0x5000,0xfe0cfe0c000a))),
                      (int16)CONCAT214(in_stack_0000ff8c,
                                       CONCAT212(in_stack_0000ff8a,
                                                 CONCAT210(in_stack_0000ff88,
                                                           CONCAT28(in_stack_0000ff86,
                                                                    CONCAT26(in_stack_0000ff84,
                                                                             CONCAT24(unaff_DI,
                                                  CONCAT13(uVar7,CONCAT12(uVar6,0x10a8)))))))),
                      (int16)CONCAT214(in_stack_0000ff9c,
                                       CONCAT212(in_stack_0000ff9a,
                                                 CONCAT210(in_stack_0000ff98,in_stack_0000ff8e))),
                      (int16)CONCAT214(in_stack_0000ffac,
                                       CONCAT212(in_stack_0000ffaa,
                                                 CONCAT210(in_stack_0000ffa8,in_stack_0000ff9e))),
                      in_stack_0000ffae,in_stack_0000ffb0,in_stack_0000ffb2,
                      (LPVOID)CONCAT22(in_stack_0000ffb6,in_stack_0000ffb4));
    PTR_DAT_10a8_0000_10a8_023e = PTR_DAT_10a8_0000_10a8_00cc;
    FUN_1008_71ca();
  }
  return;
}
