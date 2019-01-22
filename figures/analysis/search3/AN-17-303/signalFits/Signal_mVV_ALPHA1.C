void c()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:59:07 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,602);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-0.1624143,5806.667,2.891427);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.144);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TF1 *ALPHA1_func1010 = new TF1("ALPHA1_func","pol5",0,13000);
   ALPHA1_func1010->SetFillColor(19);
   ALPHA1_func1010->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   ALPHA1_func1010->SetMarkerColor(ci);
   ALPHA1_func1010->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   ALPHA1_func1010->SetLineColor(ci);
   ALPHA1_func1010->SetLineWidth(3);
   ALPHA1_func1010->SetChisquare(66.08037);
   ALPHA1_func1010->SetNDF(7);
   ALPHA1_func1010->GetXaxis()->SetTitle("M_{VV} (GeV)");
   ALPHA1_func1010->GetXaxis()->SetRange(9,43);
   ALPHA1_func1010->GetXaxis()->SetNdivisions(209);
   ALPHA1_func1010->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1010->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1010->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1010->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1010->GetXaxis()->SetTitleOffset(0.94);
   ALPHA1_func1010->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1010->GetYaxis()->SetTitle("ALPHA1 (GeV)");
   ALPHA1_func1010->GetYaxis()->SetNdivisions(504);
   ALPHA1_func1010->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1010->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1010->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1010->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1010->GetYaxis()->SetTitleOffset(0.97);
   ALPHA1_func1010->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1010->SetParameter(0,0.3582118);
   ALPHA1_func1010->SetParError(0,0.5182414);
   ALPHA1_func1010->SetParLimits(0,0,0);
   ALPHA1_func1010->SetParameter(1,0.001334228);
   ALPHA1_func1010->SetParError(1,0.0010757);
   ALPHA1_func1010->SetParLimits(1,0,0);
   ALPHA1_func1010->SetParameter(2,-5.429446e-07);
   ALPHA1_func1010->SetParError(2,8.189645e-07);
   ALPHA1_func1010->SetParLimits(2,0,0);
   ALPHA1_func1010->SetParameter(3,6.625644e-11);
   ALPHA1_func1010->SetParError(3,2.878137e-10);
   ALPHA1_func1010->SetParLimits(3,0,0);
   ALPHA1_func1010->SetParameter(4,6.357246e-15);
   ALPHA1_func1010->SetParError(4,4.720712e-14);
   ALPHA1_func1010->SetParLimits(4,0,0);
   ALPHA1_func1010->SetParameter(5,-1.352577e-18);
   ALPHA1_func1010->SetParError(5,2.921504e-18);
   ALPHA1_func1010->SetParLimits(5,0,0);
   ALPHA1_func1010->Draw("C");
   
   Double_t _fx1009[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1009[13] = {
   1.256748,
   1.232764,
   1.344696,
   1.581315,
   1.360592,
   1.444041,
   1.405348,
   1.537095,
   1.402294,
   1.502684,
   1.530339,
   1.474285,
   1.308226};
   Double_t _fex1009[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[13] = {
   0.02824234,
   0.02575906,
   0.0266857,
   0.03096525,
   0.02665225,
   0.02705368,
   0.02729067,
   0.02901253,
   0.02830268,
   0.02887403,
   0.02878825,
   0.02747648,
   0.02869374};
   TGraphErrors *gre = new TGraphErrors(13,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10011009 = new TH1F("Graph_Graph_Graph10011009","",100,550,5950);
   Graph_Graph_Graph10011009->SetMinimum(1.166478);
   Graph_Graph_Graph10011009->SetMaximum(1.652808);
   Graph_Graph_Graph10011009->SetDirectory(0);
   Graph_Graph_Graph10011009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011009->SetLineColor(ci);
   Graph_Graph_Graph10011009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011009);
   
   
   TF1 *ALPHA1_func1010 = new TF1("ALPHA1_func","pol5",1000,5500);
   ALPHA1_func1010->SetBit(TF1::kNotDraw);
   ALPHA1_func1010->SetFillColor(19);
   ALPHA1_func1010->SetFillStyle(0);
   ALPHA1_func1010->SetLineColor(2);
   ALPHA1_func1010->SetLineWidth(2);
   ALPHA1_func1010->SetChisquare(66.08037);
   ALPHA1_func1010->SetNDF(7);
   ALPHA1_func1010->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1010->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1010->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1010->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1010->GetXaxis()->SetTitleOffset(0.9);
   ALPHA1_func1010->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1010->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1010->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1010->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1010->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1010->GetYaxis()->SetTitleOffset(1.25);
   ALPHA1_func1010->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1010->SetParameter(0,0.3582118);
   ALPHA1_func1010->SetParError(0,0.5182414);
   ALPHA1_func1010->SetParLimits(0,0,0);
   ALPHA1_func1010->SetParameter(1,0.001334228);
   ALPHA1_func1010->SetParError(1,0.0010757);
   ALPHA1_func1010->SetParLimits(1,0,0);
   ALPHA1_func1010->SetParameter(2,-5.429446e-07);
   ALPHA1_func1010->SetParError(2,8.189645e-07);
   ALPHA1_func1010->SetParLimits(2,0,0);
   ALPHA1_func1010->SetParameter(3,6.625644e-11);
   ALPHA1_func1010->SetParError(3,2.878137e-10);
   ALPHA1_func1010->SetParLimits(3,0,0);
   ALPHA1_func1010->SetParameter(4,6.357246e-15);
   ALPHA1_func1010->SetParError(4,4.720712e-14);
   ALPHA1_func1010->SetParLimits(4,0,0);
   ALPHA1_func1010->SetParameter(5,-1.352577e-18);
   ALPHA1_func1010->SetParError(5,2.921504e-18);
   ALPHA1_func1010->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(ALPHA1_func1010);
   gre->Draw("p");
   
   TF1 *ALPHA1_func1011 = new TF1("ALPHA1_func","pol5",0,13000);
   ALPHA1_func1011->SetFillColor(19);
   ALPHA1_func1011->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   ALPHA1_func1011->SetMarkerColor(ci);
   ALPHA1_func1011->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   ALPHA1_func1011->SetLineColor(ci);
   ALPHA1_func1011->SetLineWidth(3);
   ALPHA1_func1011->SetChisquare(66.08037);
   ALPHA1_func1011->SetNDF(7);
   ALPHA1_func1011->GetXaxis()->SetTitle("M_{VV} (GeV)");
   ALPHA1_func1011->GetXaxis()->SetRange(9,43);
   ALPHA1_func1011->GetXaxis()->SetNdivisions(209);
   ALPHA1_func1011->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1011->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1011->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1011->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1011->GetXaxis()->SetTitleOffset(0.94);
   ALPHA1_func1011->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1011->GetYaxis()->SetTitle("ALPHA1 (GeV)");
   ALPHA1_func1011->GetYaxis()->SetNdivisions(504);
   ALPHA1_func1011->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1011->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1011->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1011->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1011->GetYaxis()->SetTitleOffset(0.97);
   ALPHA1_func1011->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1011->SetParameter(0,0.3582118);
   ALPHA1_func1011->SetParError(0,0.5182414);
   ALPHA1_func1011->SetParLimits(0,0,0);
   ALPHA1_func1011->SetParameter(1,0.001334228);
   ALPHA1_func1011->SetParError(1,0.0010757);
   ALPHA1_func1011->SetParLimits(1,0,0);
   ALPHA1_func1011->SetParameter(2,-5.429446e-07);
   ALPHA1_func1011->SetParError(2,8.189645e-07);
   ALPHA1_func1011->SetParLimits(2,0,0);
   ALPHA1_func1011->SetParameter(3,6.625644e-11);
   ALPHA1_func1011->SetParError(3,2.878137e-10);
   ALPHA1_func1011->SetParLimits(3,0,0);
   ALPHA1_func1011->SetParameter(4,6.357246e-15);
   ALPHA1_func1011->SetParError(4,4.720712e-14);
   ALPHA1_func1011->SetParLimits(4,0,0);
   ALPHA1_func1011->SetParameter(5,-1.352577e-18);
   ALPHA1_func1011->SetParError(5,2.921504e-18);
   ALPHA1_func1011->SetParLimits(5,0,0);
   ALPHA1_func1011->Draw("Csame");
   
   Double_t _fx1011[12] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5500};
   Double_t _fy1011[12] = {
   1.334305,
   1.351434,
   1.427657,
   1.627091,
   1.405628,
   1.478283,
   1.45348,
   1.523084,
   1.428114,
   1.549511,
   1.549132,
   1.354561};
   Double_t _fex1011[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[12] = {
   0.01002649,
   0.008545344,
   0.00871458,
   0.01007056,
   0.008481672,
   0.008544708,
   0.008564259,
   0.008926594,
   0.008623059,
   0.008989569,
   0.008888578,
   0.02671036};
   gre = new TGraphErrors(12,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10031011 = new TH1F("Graph_Graph_Graph10031011","",100,550,5950);
   Graph_Graph_Graph10031011->SetMinimum(1.292991);
   Graph_Graph_Graph10031011->SetMaximum(1.66845);
   Graph_Graph_Graph10031011->SetDirectory(0);
   Graph_Graph_Graph10031011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10031011->SetLineColor(ci);
   Graph_Graph_Graph10031011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10031011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10031011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10031011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10031011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10031011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10031011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10031011);
   
   
   TF1 *ALPHA1_func1012 = new TF1("ALPHA1_func","pol5",1000,5500);
   ALPHA1_func1012->SetBit(TF1::kNotDraw);
   ALPHA1_func1012->SetFillColor(19);
   ALPHA1_func1012->SetFillStyle(0);
   ALPHA1_func1012->SetLineColor(2);
   ALPHA1_func1012->SetLineWidth(2);
   ALPHA1_func1012->SetChisquare(453.4234);
   ALPHA1_func1012->SetNDF(6);
   ALPHA1_func1012->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1012->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1012->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1012->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1012->GetXaxis()->SetTitleOffset(0.9);
   ALPHA1_func1012->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1012->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1012->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1012->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1012->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1012->GetYaxis()->SetTitleOffset(1.25);
   ALPHA1_func1012->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1012->SetParameter(0,0.2054195);
   ALPHA1_func1012->SetParError(0,0.2014646);
   ALPHA1_func1012->SetParLimits(0,0,0);
   ALPHA1_func1012->SetParameter(1,0.001959538);
   ALPHA1_func1012->SetParError(1,0.0004269027);
   ALPHA1_func1012->SetParLimits(1,0,0);
   ALPHA1_func1012->SetParameter(2,-1.088472e-06);
   ALPHA1_func1012->SetParError(2,3.334229e-07);
   ALPHA1_func1012->SetParLimits(2,0,0);
   ALPHA1_func1012->SetParameter(3,2.620116e-10);
   ALPHA1_func1012->SetParError(3,1.206069e-10);
   ALPHA1_func1012->SetParLimits(3,0,0);
   ALPHA1_func1012->SetParameter(4,-2.498617e-14);
   ALPHA1_func1012->SetParError(4,2.038346e-14);
   ALPHA1_func1012->SetParLimits(4,0,0);
   ALPHA1_func1012->SetParameter(5,5.105537e-19);
   ALPHA1_func1012->SetParError(5,1.298614e-18);
   ALPHA1_func1012->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(ALPHA1_func1012);
   gre->Draw("p");
   
   TF1 *ALPHA1_func1013 = new TF1("ALPHA1_func","pol5",0,13000);
   ALPHA1_func1013->SetFillColor(19);
   ALPHA1_func1013->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   ALPHA1_func1013->SetMarkerColor(ci);
   ALPHA1_func1013->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   ALPHA1_func1013->SetLineColor(ci);
   ALPHA1_func1013->SetLineWidth(3);
   ALPHA1_func1013->SetChisquare(453.4234);
   ALPHA1_func1013->SetNDF(6);
   ALPHA1_func1013->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1013->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1013->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1013->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1013->GetXaxis()->SetTitleOffset(0.9);
   ALPHA1_func1013->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1013->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1013->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1013->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1013->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1013->GetYaxis()->SetTitleOffset(1.25);
   ALPHA1_func1013->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1013->SetParameter(0,0.2054195);
   ALPHA1_func1013->SetParError(0,0.2014646);
   ALPHA1_func1013->SetParLimits(0,0,0);
   ALPHA1_func1013->SetParameter(1,0.001959538);
   ALPHA1_func1013->SetParError(1,0.0004269027);
   ALPHA1_func1013->SetParLimits(1,0,0);
   ALPHA1_func1013->SetParameter(2,-1.088472e-06);
   ALPHA1_func1013->SetParError(2,3.334229e-07);
   ALPHA1_func1013->SetParLimits(2,0,0);
   ALPHA1_func1013->SetParameter(3,2.620116e-10);
   ALPHA1_func1013->SetParError(3,1.206069e-10);
   ALPHA1_func1013->SetParLimits(3,0,0);
   ALPHA1_func1013->SetParameter(4,-2.498617e-14);
   ALPHA1_func1013->SetParError(4,2.038346e-14);
   ALPHA1_func1013->SetParLimits(4,0,0);
   ALPHA1_func1013->SetParameter(5,5.105537e-19);
   ALPHA1_func1013->SetParError(5,1.298614e-18);
   ALPHA1_func1013->SetParLimits(5,0,0);
   ALPHA1_func1013->Draw("Csame");
   
   Double_t _fx1013[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1013[13] = {
   1.143554,
   1.168475,
   1.238792,
   1.440187,
   1.244342,
   1.314151,
   1.258267,
   1.346209,
   1.208331,
   1.303049,
   1.32128,
   1.272953,
   1.164923};
   Double_t _fex1013[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[13] = {
   0.01983226,
   0.01761776,
   0.01734303,
   0.01991912,
   0.01729537,
   0.01764841,
   0.01723446,
   0.0177299,
   0.01711072,
   0.01736414,
   0.01748363,
   0.01628161,
   0.01787664};
   gre = new TGraphErrors(13,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10051013 = new TH1F("Graph_Graph_Graph10051013","",100,550,5950);
   Graph_Graph_Graph10051013->SetMinimum(1.090084);
   Graph_Graph_Graph10051013->SetMaximum(1.493744);
   Graph_Graph_Graph10051013->SetDirectory(0);
   Graph_Graph_Graph10051013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10051013->SetLineColor(ci);
   Graph_Graph_Graph10051013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10051013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10051013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10051013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10051013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10051013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10051013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10051013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10051013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10051013);
   
   
   TF1 *ALPHA1_func1014 = new TF1("ALPHA1_func","pol5",1000,5500);
   ALPHA1_func1014->SetBit(TF1::kNotDraw);
   ALPHA1_func1014->SetFillColor(19);
   ALPHA1_func1014->SetFillStyle(0);
   ALPHA1_func1014->SetLineColor(2);
   ALPHA1_func1014->SetLineWidth(2);
   ALPHA1_func1014->SetChisquare(112.174);
   ALPHA1_func1014->SetNDF(7);
   ALPHA1_func1014->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1014->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1014->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1014->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1014->GetXaxis()->SetTitleOffset(0.9);
   ALPHA1_func1014->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1014->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1014->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1014->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1014->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1014->GetYaxis()->SetTitleOffset(1.25);
   ALPHA1_func1014->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1014->SetParameter(0,-0.06052646);
   ALPHA1_func1014->SetParError(0,0.3364056);
   ALPHA1_func1014->SetParLimits(0,0,0);
   ALPHA1_func1014->SetParameter(1,0.002065429);
   ALPHA1_func1014->SetParError(1,0.0006914253);
   ALPHA1_func1014->SetParLimits(1,0,0);
   ALPHA1_func1014->SetParameter(2,-1.125647e-06);
   ALPHA1_func1014->SetParError(2,5.221714e-07);
   ALPHA1_func1014->SetParLimits(2,0,0);
   ALPHA1_func1014->SetParameter(3,2.68375e-10);
   ALPHA1_func1014->SetParError(3,1.823059e-10);
   ALPHA1_func1014->SetParLimits(3,0,0);
   ALPHA1_func1014->SetParameter(4,-2.662849e-14);
   ALPHA1_func1014->SetParError(4,2.974111e-14);
   ALPHA1_func1014->SetParLimits(4,0,0);
   ALPHA1_func1014->SetParameter(5,7.211741e-19);
   ALPHA1_func1014->SetParError(5,1.832516e-18);
   ALPHA1_func1014->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(ALPHA1_func1014);
   gre->Draw("p");
   
   TF1 *ALPHA1_func1015 = new TF1("ALPHA1_func","pol5",0,13000);
   ALPHA1_func1015->SetFillColor(19);
   ALPHA1_func1015->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   ALPHA1_func1015->SetMarkerColor(ci);
   ALPHA1_func1015->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   ALPHA1_func1015->SetLineColor(ci);
   ALPHA1_func1015->SetLineWidth(3);
   ALPHA1_func1015->SetChisquare(112.174);
   ALPHA1_func1015->SetNDF(7);
   ALPHA1_func1015->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1015->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1015->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1015->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1015->GetXaxis()->SetTitleOffset(0.9);
   ALPHA1_func1015->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1015->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1015->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1015->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1015->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1015->GetYaxis()->SetTitleOffset(1.25);
   ALPHA1_func1015->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1015->SetParameter(0,-0.06052646);
   ALPHA1_func1015->SetParError(0,0.3364056);
   ALPHA1_func1015->SetParLimits(0,0,0);
   ALPHA1_func1015->SetParameter(1,0.002065429);
   ALPHA1_func1015->SetParError(1,0.0006914253);
   ALPHA1_func1015->SetParLimits(1,0,0);
   ALPHA1_func1015->SetParameter(2,-1.125647e-06);
   ALPHA1_func1015->SetParError(2,5.221714e-07);
   ALPHA1_func1015->SetParLimits(2,0,0);
   ALPHA1_func1015->SetParameter(3,2.68375e-10);
   ALPHA1_func1015->SetParError(3,1.823059e-10);
   ALPHA1_func1015->SetParLimits(3,0,0);
   ALPHA1_func1015->SetParameter(4,-2.662849e-14);
   ALPHA1_func1015->SetParError(4,2.974111e-14);
   ALPHA1_func1015->SetParLimits(4,0,0);
   ALPHA1_func1015->SetParameter(5,7.211741e-19);
   ALPHA1_func1015->SetParError(5,1.832516e-18);
   ALPHA1_func1015->SetParLimits(5,0,0);
   ALPHA1_func1015->Draw("Csame");
   
   Double_t _fx1015[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1015[13] = {
   1.110432,
   1.13874,
   1.188491,
   1.378091,
   1.175168,
   1.228899,
   1.172589,
   1.218847,
   1.122226,
   1.22313,
   1.210521,
   1.18904,
   1.028525};
   Double_t _fex1015[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[13] = {
   0.006128572,
   0.005503128,
   0.005419564,
   0.006048652,
   0.00543017,
   0.005221083,
   0.005116828,
   0.005405204,
   0.005134958,
   0.005284529,
   0.01600331,
   0.015119,
   0.01486513};
   gre = new TGraphErrors(13,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10071015 = new TH1F("Graph_Graph_Graph10071015","",100,550,5950);
   Graph_Graph_Graph10071015->SetMinimum(0.9766117);
   Graph_Graph_Graph10071015->SetMaximum(1.421188);
   Graph_Graph_Graph10071015->SetDirectory(0);
   Graph_Graph_Graph10071015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10071015->SetLineColor(ci);
   Graph_Graph_Graph10071015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10071015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10071015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10071015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10071015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10071015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10071015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10071015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10071015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10071015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10071015);
   
   
   TF1 *ALPHA1_func1016 = new TF1("ALPHA1_func","pol5",1000,5500);
   ALPHA1_func1016->SetBit(TF1::kNotDraw);
   ALPHA1_func1016->SetFillColor(19);
   ALPHA1_func1016->SetFillStyle(0);
   ALPHA1_func1016->SetLineColor(2);
   ALPHA1_func1016->SetLineWidth(2);
   ALPHA1_func1016->SetChisquare(976.4952);
   ALPHA1_func1016->SetNDF(7);
   ALPHA1_func1016->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1016->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1016->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1016->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1016->GetXaxis()->SetTitleOffset(0.9);
   ALPHA1_func1016->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1016->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1016->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1016->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1016->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1016->GetYaxis()->SetTitleOffset(1.25);
   ALPHA1_func1016->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1016->SetParameter(0,-0.1367612);
   ALPHA1_func1016->SetParError(0,0.1221518);
   ALPHA1_func1016->SetParLimits(0,0,0);
   ALPHA1_func1016->SetParameter(1,0.002225592);
   ALPHA1_func1016->SetParError(1,0.0002599965);
   ALPHA1_func1016->SetParLimits(1,0,0);
   ALPHA1_func1016->SetParameter(2,-1.278656e-06);
   ALPHA1_func1016->SetParError(2,2.04597e-07);
   ALPHA1_func1016->SetParLimits(2,0,0);
   ALPHA1_func1016->SetParameter(3,3.125993e-10);
   ALPHA1_func1016->SetParError(3,7.483949e-11);
   ALPHA1_func1016->SetParLimits(3,0,0);
   ALPHA1_func1016->SetParameter(4,-3.072436e-14);
   ALPHA1_func1016->SetParError(4,1.282993e-14);
   ALPHA1_func1016->SetParLimits(4,0,0);
   ALPHA1_func1016->SetParameter(5,7.366169e-19);
   ALPHA1_func1016->SetParError(5,8.301695e-19);
   ALPHA1_func1016->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(ALPHA1_func1016);
   gre->Draw("p");
   
   TF1 *ALPHA1_func1017 = new TF1("ALPHA1_func","pol5",0,13000);
   ALPHA1_func1017->SetFillColor(19);
   ALPHA1_func1017->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   ALPHA1_func1017->SetMarkerColor(ci);
   ALPHA1_func1017->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   ALPHA1_func1017->SetLineColor(ci);
   ALPHA1_func1017->SetLineWidth(3);
   ALPHA1_func1017->SetChisquare(976.4952);
   ALPHA1_func1017->SetNDF(7);
   ALPHA1_func1017->GetXaxis()->SetLabelFont(42);
   ALPHA1_func1017->GetXaxis()->SetLabelOffset(0.007);
   ALPHA1_func1017->GetXaxis()->SetLabelSize(0.05);
   ALPHA1_func1017->GetXaxis()->SetTitleSize(0.06);
   ALPHA1_func1017->GetXaxis()->SetTitleOffset(0.9);
   ALPHA1_func1017->GetXaxis()->SetTitleFont(42);
   ALPHA1_func1017->GetYaxis()->SetLabelFont(42);
   ALPHA1_func1017->GetYaxis()->SetLabelOffset(0.007);
   ALPHA1_func1017->GetYaxis()->SetLabelSize(0.05);
   ALPHA1_func1017->GetYaxis()->SetTitleSize(0.06);
   ALPHA1_func1017->GetYaxis()->SetTitleOffset(1.25);
   ALPHA1_func1017->GetYaxis()->SetTitleFont(42);
   ALPHA1_func1017->SetParameter(0,-0.1367612);
   ALPHA1_func1017->SetParError(0,0.1221518);
   ALPHA1_func1017->SetParLimits(0,0,0);
   ALPHA1_func1017->SetParameter(1,0.002225592);
   ALPHA1_func1017->SetParError(1,0.0002599965);
   ALPHA1_func1017->SetParLimits(1,0,0);
   ALPHA1_func1017->SetParameter(2,-1.278656e-06);
   ALPHA1_func1017->SetParError(2,2.04597e-07);
   ALPHA1_func1017->SetParLimits(2,0,0);
   ALPHA1_func1017->SetParameter(3,3.125993e-10);
   ALPHA1_func1017->SetParError(3,7.483949e-11);
   ALPHA1_func1017->SetParLimits(3,0,0);
   ALPHA1_func1017->SetParameter(4,-3.072436e-14);
   ALPHA1_func1017->SetParError(4,1.282993e-14);
   ALPHA1_func1017->SetParLimits(4,0,0);
   ALPHA1_func1017->SetParameter(5,7.366169e-19);
   ALPHA1_func1017->SetParError(5,8.301695e-19);
   ALPHA1_func1017->SetParLimits(5,0,0);
   ALPHA1_func1017->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("ALPHA1_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ALPHA1_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ALPHA1_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ALPHA1_func","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.936,"(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.89284,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.83524,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03648);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
