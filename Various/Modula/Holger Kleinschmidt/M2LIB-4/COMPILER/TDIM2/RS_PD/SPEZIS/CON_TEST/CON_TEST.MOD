MODULE ConTest;                       (* Kleiner Test f�r Konsolen-Fenster.*)
(* 2.5.95 RS *)
(*$S-,$T-,$Q+*)

FROM  Mini  IMPORT wt,wT, Pause;

VAR   Text: ARRAY [0..80] OF CHAR;

CONST TEXT =
      "H Hallo Zwilling - Haste etwa L�cken? Man pr�ft sie mit Turtle-Text.";

VAR   k: CARDINAL;
BEGIN Text := TEXT; k:= 0; wt (33c);
   WHILE (Text[k] # 0c) DO wt (Text[k]); wt (0c); INC (k) END;
   Pause;                            (* Dies ^ sollte unsch�dlich sein! *)
   END ConTest .
