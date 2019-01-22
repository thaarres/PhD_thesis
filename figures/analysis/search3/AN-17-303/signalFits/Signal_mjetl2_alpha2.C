void Signal_mjetl2_alpha2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:19:11 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,-0.927835,5728.857,5.515464);
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
   
   Double_t _fx1197[13] = {
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
   Double_t _fy1197[13] = {
   2.020495,
   2.216225,
   1.99765,
   2.024256,
   2.052346,
   2.032177,
   2.02577,
   1.891566,
   2.07284,
   2.011758,
   1.841748,
   1.721076,
   1.728193};
   Double_t _fex1197[13] = {
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
   Double_t _fey1197[13] = {
   0.06656208,
   0.05356385,
   0.04420188,
   0.03846902,
   0.03881606,
   0.03705581,
   0.03779617,
   0.03475814,
   0.03629321,
   0.05166839,
   0.03470873,
   0.03641858,
   0.05382375};
   TGraphErrors *gre = new TGraphErrors(13,_fx1197,_fy1197,_fex1197,_fey1197);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1197 = new TH1F("Graph_Graph1197","",100,550,5950);
   Graph_Graph1197->SetMinimum(0);
   Graph_Graph1197->SetMaximum(5);
   Graph_Graph1197->SetDirectory(0);
   Graph_Graph1197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1197->SetLineColor(ci);
   Graph_Graph1197->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1197->GetXaxis()->SetRange(11,92);
   Graph_Graph1197->GetXaxis()->SetNdivisions(209);
   Graph_Graph1197->GetXaxis()->SetLabelFont(42);
   Graph_Graph1197->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1197->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1197->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1197->GetXaxis()->SetTitleFont(42);
   Graph_Graph1197->GetYaxis()->SetTitle("alpha2 (GeV)");
   Graph_Graph1197->GetYaxis()->SetNdivisions(504);
   Graph_Graph1197->GetYaxis()->SetLabelFont(42);
   Graph_Graph1197->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1197->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1197->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1197->GetYaxis()->SetTitleFont(42);
   Graph_Graph1197->GetZaxis()->SetLabelFont(42);
   Graph_Graph1197->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1197->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1197);
   
   
   TF1 *alpha2_func1198 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1198->SetBit(TF1::kNotDraw);
   alpha2_func1198->SetFillColor(19);
   alpha2_func1198->SetFillStyle(0);
   alpha2_func1198->SetLineColor(2);
   alpha2_func1198->SetLineWidth(2);
   alpha2_func1198->SetChisquare(35.22211);
   alpha2_func1198->SetNDF(9);
   alpha2_func1198->GetXaxis()->SetLabelFont(42);
   alpha2_func1198->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1198->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1198->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1198->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1198->GetXaxis()->SetTitleFont(42);
   alpha2_func1198->GetYaxis()->SetLabelFont(42);
   alpha2_func1198->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1198->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1198->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1198->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1198->GetYaxis()->SetTitleFont(42);
   alpha2_func1198->SetParameter(0,2.251255);
   alpha2_func1198->SetParError(0,0.1656955);
   alpha2_func1198->SetParLimits(0,0,0);
   alpha2_func1198->SetParameter(1,-0.0002262185);
   alpha2_func1198->SetParError(1,0.0001848616);
   alpha2_func1198->SetParLimits(1,0,0);
   alpha2_func1198->SetParameter(2,7.716304e-08);
   alpha2_func1198->SetParError(2,6.173078e-08);
   alpha2_func1198->SetParLimits(2,0,0);
   alpha2_func1198->SetParameter(3,-1.015717e-11);
   alpha2_func1198->SetParError(3,6.318868e-12);
   alpha2_func1198->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1198);
   gre->Draw("ap");
   
   Double_t _fx1199[13] = {
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
   Double_t _fy1199[13] = {
   1.364669,
   1.466642,
   1.509529,
   1.527242,
   1.566511,
   1.606509,
   1.599797,
   1.548046,
   1.607236,
   1.664882,
   1.597222,
   1.631668,
   1.36023};
   Double_t _fex1199[13] = {
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
   Double_t _fey1199[13] = {
   0.0310491,
   0.03328219,
   0.03237613,
   0.03021045,
   0.0312741,
   0.03117654,
   0.03368838,
   0.03105715,
   0.04369103,
   0.03761801,
   0.06485214,
   0.04599187,
   0.05325304};
   gre = new TGraphErrors(13,_fx1199,_fy1199,_fex1199,_fey1199);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1199 = new TH1F("Graph_Graph1199","",100,550,5950);
   Graph_Graph1199->SetMinimum(1.267425);
   Graph_Graph1199->SetMaximum(1.742052);
   Graph_Graph1199->SetDirectory(0);
   Graph_Graph1199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1199->SetLineColor(ci);
   Graph_Graph1199->GetXaxis()->SetLabelFont(42);
   Graph_Graph1199->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1199->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1199->GetXaxis()->SetTitleFont(42);
   Graph_Graph1199->GetYaxis()->SetLabelFont(42);
   Graph_Graph1199->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1199->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1199->GetYaxis()->SetTitleFont(42);
   Graph_Graph1199->GetZaxis()->SetLabelFont(42);
   Graph_Graph1199->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1199->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1199);
   
   
   TF1 *alpha2_func1200 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1200->SetBit(TF1::kNotDraw);
   alpha2_func1200->SetFillColor(19);
   alpha2_func1200->SetFillStyle(0);
   alpha2_func1200->SetLineColor(2);
   alpha2_func1200->SetLineWidth(2);
   alpha2_func1200->SetChisquare(23.47755);
   alpha2_func1200->SetNDF(9);
   alpha2_func1200->GetXaxis()->SetLabelFont(42);
   alpha2_func1200->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1200->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1200->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1200->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1200->GetXaxis()->SetTitleFont(42);
   alpha2_func1200->GetYaxis()->SetLabelFont(42);
   alpha2_func1200->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1200->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1200->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1200->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1200->GetYaxis()->SetTitleFont(42);
   alpha2_func1200->SetParameter(0,1.167035);
   alpha2_func1200->SetParError(0,0.1151241);
   alpha2_func1200->SetParLimits(0,0,0);
   alpha2_func1200->SetParameter(1,0.0002964597);
   alpha2_func1200->SetParError(1,0.0001394806);
   alpha2_func1200->SetParLimits(1,0,0);
   alpha2_func1200->SetParameter(2,-5.066678e-08);
   alpha2_func1200->SetParError(2,4.95094e-08);
   alpha2_func1200->SetParLimits(2,0,0);
   alpha2_func1200->SetParameter(3,1.178264e-12);
   alpha2_func1200->SetParError(3,5.27268e-12);
   alpha2_func1200->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1200);
   gre->Draw("p");
   
   Double_t _fx1201[13] = {
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
   Double_t _fy1201[13] = {
   2.020495,
   2.216225,
   1.99765,
   2.024256,
   2.052346,
   2.032177,
   2.02577,
   1.891566,
   2.07284,
   2.011758,
   1.841748,
   1.721076,
   1.728193};
   Double_t _fex1201[13] = {
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
   Double_t _fey1201[13] = {
   0.06656208,
   0.05356385,
   0.04420188,
   0.03846902,
   0.03881606,
   0.03705581,
   0.03779617,
   0.03475814,
   0.03629321,
   0.05166839,
   0.03470873,
   0.03641858,
   0.05382375};
   gre = new TGraphErrors(13,_fx1201,_fy1201,_fex1201,_fey1201);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11971201 = new TH1F("Graph_Graph_Graph11971201","",100,550,5950);
   Graph_Graph_Graph11971201->SetMinimum(0);
   Graph_Graph_Graph11971201->SetMaximum(5);
   Graph_Graph_Graph11971201->SetDirectory(0);
   Graph_Graph_Graph11971201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11971201->SetLineColor(ci);
   Graph_Graph_Graph11971201->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph11971201->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph11971201->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11971201->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11971201->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11971201->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11971201->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11971201->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11971201->GetYaxis()->SetTitle("alpha2 (GeV)");
   Graph_Graph_Graph11971201->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11971201->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11971201->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11971201->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11971201->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11971201->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11971201->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11971201->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11971201->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11971201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11971201);
   
   
   TF1 *alpha2_func1202 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1202->SetBit(TF1::kNotDraw);
   alpha2_func1202->SetFillColor(19);
   alpha2_func1202->SetFillStyle(0);
   alpha2_func1202->SetLineColor(2);
   alpha2_func1202->SetLineWidth(2);
   alpha2_func1202->SetChisquare(35.22211);
   alpha2_func1202->SetNDF(9);
   alpha2_func1202->GetXaxis()->SetLabelFont(42);
   alpha2_func1202->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1202->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1202->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1202->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1202->GetXaxis()->SetTitleFont(42);
   alpha2_func1202->GetYaxis()->SetLabelFont(42);
   alpha2_func1202->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1202->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1202->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1202->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1202->GetYaxis()->SetTitleFont(42);
   alpha2_func1202->SetParameter(0,2.251255);
   alpha2_func1202->SetParError(0,0.1656955);
   alpha2_func1202->SetParLimits(0,0,0);
   alpha2_func1202->SetParameter(1,-0.0002262185);
   alpha2_func1202->SetParError(1,0.0001848616);
   alpha2_func1202->SetParLimits(1,0,0);
   alpha2_func1202->SetParameter(2,7.716304e-08);
   alpha2_func1202->SetParError(2,6.173078e-08);
   alpha2_func1202->SetParLimits(2,0,0);
   alpha2_func1202->SetParameter(3,-1.015717e-11);
   alpha2_func1202->SetParError(3,6.318868e-12);
   alpha2_func1202->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1202);
   gre->Draw("p");
   
   TF1 *alpha2_func1203 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1203->SetFillColor(19);
   alpha2_func1203->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   alpha2_func1203->SetMarkerColor(ci);
   alpha2_func1203->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   alpha2_func1203->SetLineColor(ci);
   alpha2_func1203->SetLineWidth(3);
   alpha2_func1203->SetChisquare(35.22211);
   alpha2_func1203->SetNDF(9);
   alpha2_func1203->GetXaxis()->SetLabelFont(42);
   alpha2_func1203->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1203->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1203->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1203->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1203->GetXaxis()->SetTitleFont(42);
   alpha2_func1203->GetYaxis()->SetLabelFont(42);
   alpha2_func1203->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1203->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1203->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1203->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1203->GetYaxis()->SetTitleFont(42);
   alpha2_func1203->SetParameter(0,2.251255);
   alpha2_func1203->SetParError(0,0.1656955);
   alpha2_func1203->SetParLimits(0,0,0);
   alpha2_func1203->SetParameter(1,-0.0002262185);
   alpha2_func1203->SetParError(1,0.0001848616);
   alpha2_func1203->SetParLimits(1,0,0);
   alpha2_func1203->SetParameter(2,7.716304e-08);
   alpha2_func1203->SetParError(2,6.173078e-08);
   alpha2_func1203->SetParLimits(2,0,0);
   alpha2_func1203->SetParameter(3,-1.015717e-11);
   alpha2_func1203->SetParError(3,6.318868e-12);
   alpha2_func1203->SetParLimits(3,0,0);
   alpha2_func1203->Draw("Csame");
   
   TF1 *alpha2_func1204 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1204->SetFillColor(19);
   alpha2_func1204->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   alpha2_func1204->SetMarkerColor(ci);
   alpha2_func1204->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   alpha2_func1204->SetLineColor(ci);
   alpha2_func1204->SetLineWidth(3);
   alpha2_func1204->SetLineStyle(9);
   alpha2_func1204->SetChisquare(23.47755);
   alpha2_func1204->SetNDF(9);
   alpha2_func1204->GetXaxis()->SetLabelFont(42);
   alpha2_func1204->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1204->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1204->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1204->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1204->GetXaxis()->SetTitleFont(42);
   alpha2_func1204->GetYaxis()->SetLabelFont(42);
   alpha2_func1204->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1204->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1204->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1204->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1204->GetYaxis()->SetTitleFont(42);
   alpha2_func1204->SetParameter(0,1.167035);
   alpha2_func1204->SetParError(0,0.1151241);
   alpha2_func1204->SetParLimits(0,0,0);
   alpha2_func1204->SetParameter(1,0.0002964597);
   alpha2_func1204->SetParError(1,0.0001394806);
   alpha2_func1204->SetParLimits(1,0,0);
   alpha2_func1204->SetParameter(2,-5.066678e-08);
   alpha2_func1204->SetParError(2,4.95094e-08);
   alpha2_func1204->SetParLimits(2,0,0);
   alpha2_func1204->SetParameter(3,1.178264e-12);
   alpha2_func1204->SetParError(3,5.27268e-12);
   alpha2_func1204->SetParLimits(3,0,0);
   alpha2_func1204->Draw("Csame");
   
   Double_t _fx1203[13] = {
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
   Double_t _fy1203[13] = {
   1.204113,
   1.233638,
   1.277996,
   1.33265,
   1.389943,
   1.41969,
   1.473724,
   1.480284,
   1.47867,
   1.470575,
   1.520937,
   1.33218,
   1.451203};
   Double_t _fex1203[13] = {
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
   Double_t _fey1203[13] = {
   0.007201099,
   0.006558035,
   0.006715673,
   0.00674188,
   0.006844241,
   0.006867037,
   0.007393955,
   0.007795266,
   0.008567159,
   0.01040358,
   0.006756686,
   0.02132329,
   0.01956669};
   gre = new TGraphErrors(13,_fx1203,_fy1203,_fex1203,_fey1203);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1203 = new TH1F("Graph_Graph1203","",100,550,5950);
   Graph_Graph1203->SetMinimum(1.163834);
   Graph_Graph1203->SetMaximum(1.560772);
   Graph_Graph1203->SetDirectory(0);
   Graph_Graph1203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1203->SetLineColor(ci);
   Graph_Graph1203->GetXaxis()->SetLabelFont(42);
   Graph_Graph1203->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1203->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1203->GetXaxis()->SetTitleFont(42);
   Graph_Graph1203->GetYaxis()->SetLabelFont(42);
   Graph_Graph1203->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1203->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1203->GetYaxis()->SetTitleFont(42);
   Graph_Graph1203->GetZaxis()->SetLabelFont(42);
   Graph_Graph1203->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1203->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1203);
   
   
   TF1 *alpha2_func1204 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1204->SetBit(TF1::kNotDraw);
   alpha2_func1204->SetFillColor(19);
   alpha2_func1204->SetFillStyle(0);
   alpha2_func1204->SetLineColor(2);
   alpha2_func1204->SetLineWidth(2);
   alpha2_func1204->SetChisquare(112.6576);
   alpha2_func1204->SetNDF(9);
   alpha2_func1204->GetXaxis()->SetLabelFont(42);
   alpha2_func1204->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1204->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1204->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1204->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1204->GetXaxis()->SetTitleFont(42);
   alpha2_func1204->GetYaxis()->SetLabelFont(42);
   alpha2_func1204->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1204->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1204->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1204->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1204->GetYaxis()->SetTitleFont(42);
   alpha2_func1204->SetParameter(0,0.7968758);
   alpha2_func1204->SetParError(0,0.02629346);
   alpha2_func1204->SetParLimits(0,0,0);
   alpha2_func1204->SetParameter(1,0.0004966236);
   alpha2_func1204->SetParError(1,3.240106e-05);
   alpha2_func1204->SetParLimits(1,0,0);
   alpha2_func1204->SetParameter(2,-1.117664e-07);
   alpha2_func1204->SetParError(2,1.184589e-08);
   alpha2_func1204->SetParLimits(2,0,0);
   alpha2_func1204->SetParameter(3,7.867859e-12);
   alpha2_func1204->SetParError(3,1.322562e-12);
   alpha2_func1204->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1204);
   gre->Draw("p");
   
   Double_t _fx1205[13] = {
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
   Double_t _fy1205[13] = {
   1.816643,
   1.84796,
   1.880387,
   1.887299,
   1.897153,
   1.770211,
   1.873111,
   1.796077,
   1.770704,
   1.740231,
   1.708439,
   1.689093,
   1.57564};
   Double_t _fex1205[13] = {
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
   Double_t _fey1205[13] = {
   0.01284416,
   0.0109993,
   0.01055626,
   0.009949979,
   0.009423632,
   0.01196335,
   0.008691984,
   0.007922166,
   0.00758178,
   0.007178918,
   0.006630435,
   0.02060857,
   0.01563591};
   gre = new TGraphErrors(13,_fx1205,_fy1205,_fex1205,_fey1205);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1205 = new TH1F("Graph_Graph1205","",100,550,5950);
   Graph_Graph1205->SetMinimum(1.525347);
   Graph_Graph1205->SetMaximum(1.941234);
   Graph_Graph1205->SetDirectory(0);
   Graph_Graph1205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1205->SetLineColor(ci);
   Graph_Graph1205->GetXaxis()->SetLabelFont(42);
   Graph_Graph1205->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1205->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1205->GetXaxis()->SetTitleFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1205->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1205->GetYaxis()->SetTitleFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1205->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1205);
   
   
   TF1 *alpha2_func1206 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1206->SetBit(TF1::kNotDraw);
   alpha2_func1206->SetFillColor(19);
   alpha2_func1206->SetFillStyle(0);
   alpha2_func1206->SetLineColor(2);
   alpha2_func1206->SetLineWidth(2);
   alpha2_func1206->SetChisquare(117.1409);
   alpha2_func1206->SetNDF(9);
   alpha2_func1206->GetXaxis()->SetLabelFont(42);
   alpha2_func1206->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1206->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1206->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1206->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1206->GetXaxis()->SetTitleFont(42);
   alpha2_func1206->GetYaxis()->SetLabelFont(42);
   alpha2_func1206->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1206->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1206->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1206->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1206->GetYaxis()->SetTitleFont(42);
   alpha2_func1206->SetParameter(0,1.766151);
   alpha2_func1206->SetParError(0,0.03588905);
   alpha2_func1206->SetParLimits(0,0,0);
   alpha2_func1206->SetParameter(1,0.0001263163);
   alpha2_func1206->SetParError(1,4.0988e-05);
   alpha2_func1206->SetParLimits(1,0,0);
   alpha2_func1206->SetParameter(2,-4.6447e-08);
   alpha2_func1206->SetParError(2,1.386015e-08);
   alpha2_func1206->SetParLimits(2,0,0);
   alpha2_func1206->SetParameter(3,3.320854e-12);
   alpha2_func1206->SetParError(3,1.444009e-12);
   alpha2_func1206->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1206);
   gre->Draw("p");
   
   TF1 *alpha2_func1207 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1207->SetFillColor(19);
   alpha2_func1207->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   alpha2_func1207->SetMarkerColor(ci);
   alpha2_func1207->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   alpha2_func1207->SetLineColor(ci);
   alpha2_func1207->SetLineWidth(3);
   alpha2_func1207->SetChisquare(117.1409);
   alpha2_func1207->SetNDF(9);
   alpha2_func1207->GetXaxis()->SetLabelFont(42);
   alpha2_func1207->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1207->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1207->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1207->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1207->GetXaxis()->SetTitleFont(42);
   alpha2_func1207->GetYaxis()->SetLabelFont(42);
   alpha2_func1207->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1207->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1207->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1207->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1207->GetYaxis()->SetTitleFont(42);
   alpha2_func1207->SetParameter(0,1.766151);
   alpha2_func1207->SetParError(0,0.03588905);
   alpha2_func1207->SetParLimits(0,0,0);
   alpha2_func1207->SetParameter(1,0.0001263163);
   alpha2_func1207->SetParError(1,4.0988e-05);
   alpha2_func1207->SetParLimits(1,0,0);
   alpha2_func1207->SetParameter(2,-4.6447e-08);
   alpha2_func1207->SetParError(2,1.386015e-08);
   alpha2_func1207->SetParLimits(2,0,0);
   alpha2_func1207->SetParameter(3,3.320854e-12);
   alpha2_func1207->SetParError(3,1.444009e-12);
   alpha2_func1207->SetParLimits(3,0,0);
   alpha2_func1207->Draw("Csame");
   
   TF1 *alpha2_func1208 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1208->SetFillColor(19);
   alpha2_func1208->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   alpha2_func1208->SetMarkerColor(ci);
   alpha2_func1208->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   alpha2_func1208->SetLineColor(ci);
   alpha2_func1208->SetLineWidth(3);
   alpha2_func1208->SetLineStyle(9);
   alpha2_func1208->SetChisquare(112.6576);
   alpha2_func1208->SetNDF(9);
   alpha2_func1208->GetXaxis()->SetLabelFont(42);
   alpha2_func1208->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1208->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1208->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1208->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1208->GetXaxis()->SetTitleFont(42);
   alpha2_func1208->GetYaxis()->SetLabelFont(42);
   alpha2_func1208->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1208->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1208->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1208->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1208->GetYaxis()->SetTitleFont(42);
   alpha2_func1208->SetParameter(0,0.7968758);
   alpha2_func1208->SetParError(0,0.02629346);
   alpha2_func1208->SetParLimits(0,0,0);
   alpha2_func1208->SetParameter(1,0.0004966236);
   alpha2_func1208->SetParError(1,3.240106e-05);
   alpha2_func1208->SetParLimits(1,0,0);
   alpha2_func1208->SetParameter(2,-1.117664e-07);
   alpha2_func1208->SetParError(2,1.184589e-08);
   alpha2_func1208->SetParLimits(2,0,0);
   alpha2_func1208->SetParameter(3,7.867859e-12);
   alpha2_func1208->SetParError(3,1.322562e-12);
   alpha2_func1208->SetParLimits(3,0,0);
   alpha2_func1208->Draw("Csame");
   
   Double_t _fx1207[13] = {
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
   Double_t _fy1207[13] = {
   1.626415,
   1.722428,
   1.776823,
   1.805779,
   1.87332,
   1.909464,
   2.053385,
   2.065035,
   2.079566,
   2.177152,
   2.118626,
   2.132376,
   2.135454};
   Double_t _fex1207[13] = {
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
   Double_t _fey1207[13] = {
   0.02727103,
   0.0306629,
   0.03193944,
   0.02932176,
   0.03805265,
   0.03510714,
   0.0342544,
   0.03772184,
   0.04662005,
   0.04451107,
   0.04457172,
   0.05100653,
   0.05348889};
   gre = new TGraphErrors(13,_fx1207,_fy1207,_fex1207,_fey1207);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1207 = new TH1F("Graph_Graph1207","",100,550,5950);
   Graph_Graph1207->SetMinimum(1.536892);
   Graph_Graph1207->SetMaximum(2.283916);
   Graph_Graph1207->SetDirectory(0);
   Graph_Graph1207->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1207->SetLineColor(ci);
   Graph_Graph1207->GetXaxis()->SetLabelFont(42);
   Graph_Graph1207->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1207->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1207->GetXaxis()->SetTitleFont(42);
   Graph_Graph1207->GetYaxis()->SetLabelFont(42);
   Graph_Graph1207->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1207->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1207->GetYaxis()->SetTitleFont(42);
   Graph_Graph1207->GetZaxis()->SetLabelFont(42);
   Graph_Graph1207->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1207->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1207);
   
   
   TF1 *alpha2_func1208 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1208->SetBit(TF1::kNotDraw);
   alpha2_func1208->SetFillColor(19);
   alpha2_func1208->SetFillStyle(0);
   alpha2_func1208->SetLineColor(2);
   alpha2_func1208->SetLineWidth(2);
   alpha2_func1208->SetChisquare(4.256894);
   alpha2_func1208->SetNDF(9);
   alpha2_func1208->GetXaxis()->SetLabelFont(42);
   alpha2_func1208->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1208->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1208->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1208->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1208->GetXaxis()->SetTitleFont(42);
   alpha2_func1208->GetYaxis()->SetLabelFont(42);
   alpha2_func1208->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1208->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1208->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1208->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1208->GetYaxis()->SetTitleFont(42);
   alpha2_func1208->SetParameter(0,1.161367);
   alpha2_func1208->SetParError(0,0.1105567);
   alpha2_func1208->SetParLimits(0,0,0);
   alpha2_func1208->SetParameter(1,0.0005745786);
   alpha2_func1208->SetParError(1,0.0001370397);
   alpha2_func1208->SetParLimits(1,0,0);
   alpha2_func1208->SetParameter(2,-1.10429e-07);
   alpha2_func1208->SetParError(2,4.917444e-08);
   alpha2_func1208->SetParLimits(2,0,0);
   alpha2_func1208->SetParameter(3,6.900624e-12);
   alpha2_func1208->SetParError(3,5.279984e-12);
   alpha2_func1208->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1208);
   gre->Draw("p");
   
   Double_t _fx1209[13] = {
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
   Double_t _fy1209[13] = {
   2.445994,
   2.68332,
   2.490808,
   2.61103,
   2.491808,
   2.625232,
   2.635035,
   2.468918,
   2.538702,
   2.547978,
   2.486166,
   2.3221,
   2.256782};
   Double_t _fex1209[13] = {
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
   Double_t _fey1209[13] = {
   0.06364888,
   0.06942297,
   0.0539531,
   0.09763426,
   0.05003161,
   0.07048495,
   0.06520826,
   0.05253011,
   0.05012213,
   0.06121553,
   0.05702689,
   0.04128707,
   0.03899428};
   gre = new TGraphErrors(13,_fx1209,_fy1209,_fex1209,_fey1209);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1209 = new TH1F("Graph_Graph1209","",100,550,5950);
   Graph_Graph1209->SetMinimum(2.164292);
   Graph_Graph1209->SetMaximum(2.806239);
   Graph_Graph1209->SetDirectory(0);
   Graph_Graph1209->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1209->SetLineColor(ci);
   Graph_Graph1209->GetXaxis()->SetLabelFont(42);
   Graph_Graph1209->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1209->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1209->GetXaxis()->SetTitleFont(42);
   Graph_Graph1209->GetYaxis()->SetLabelFont(42);
   Graph_Graph1209->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1209->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1209->GetYaxis()->SetTitleFont(42);
   Graph_Graph1209->GetZaxis()->SetLabelFont(42);
   Graph_Graph1209->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1209->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1209);
   
   
   TF1 *alpha2_func1210 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1210->SetBit(TF1::kNotDraw);
   alpha2_func1210->SetFillColor(19);
   alpha2_func1210->SetFillStyle(0);
   alpha2_func1210->SetLineColor(2);
   alpha2_func1210->SetLineWidth(2);
   alpha2_func1210->SetChisquare(15.97219);
   alpha2_func1210->SetNDF(9);
   alpha2_func1210->GetXaxis()->SetLabelFont(42);
   alpha2_func1210->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1210->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1210->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1210->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1210->GetXaxis()->SetTitleFont(42);
   alpha2_func1210->GetYaxis()->SetLabelFont(42);
   alpha2_func1210->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1210->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1210->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1210->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1210->GetYaxis()->SetTitleFont(42);
   alpha2_func1210->SetParameter(0,2.475298);
   alpha2_func1210->SetParError(0,0.1971629);
   alpha2_func1210->SetParLimits(0,0,0);
   alpha2_func1210->SetParameter(1,3.59683e-05);
   alpha2_func1210->SetParError(1,0.0002253852);
   alpha2_func1210->SetParLimits(1,0,0);
   alpha2_func1210->SetParameter(2,1.009104e-08);
   alpha2_func1210->SetParError(2,7.460494e-08);
   alpha2_func1210->SetParLimits(2,0,0);
   alpha2_func1210->SetParameter(3,-4.394939e-12);
   alpha2_func1210->SetParError(3,7.448416e-12);
   alpha2_func1210->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1210);
   gre->Draw("p");
   
   TF1 *alpha2_func1211 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1211->SetFillColor(19);
   alpha2_func1211->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   alpha2_func1211->SetMarkerColor(ci);
   alpha2_func1211->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   alpha2_func1211->SetLineColor(ci);
   alpha2_func1211->SetLineWidth(3);
   alpha2_func1211->SetChisquare(15.97219);
   alpha2_func1211->SetNDF(9);
   alpha2_func1211->GetXaxis()->SetLabelFont(42);
   alpha2_func1211->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1211->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1211->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1211->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1211->GetXaxis()->SetTitleFont(42);
   alpha2_func1211->GetYaxis()->SetLabelFont(42);
   alpha2_func1211->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1211->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1211->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1211->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1211->GetYaxis()->SetTitleFont(42);
   alpha2_func1211->SetParameter(0,2.475298);
   alpha2_func1211->SetParError(0,0.1971629);
   alpha2_func1211->SetParLimits(0,0,0);
   alpha2_func1211->SetParameter(1,3.59683e-05);
   alpha2_func1211->SetParError(1,0.0002253852);
   alpha2_func1211->SetParLimits(1,0,0);
   alpha2_func1211->SetParameter(2,1.009104e-08);
   alpha2_func1211->SetParError(2,7.460494e-08);
   alpha2_func1211->SetParLimits(2,0,0);
   alpha2_func1211->SetParameter(3,-4.394939e-12);
   alpha2_func1211->SetParError(3,7.448416e-12);
   alpha2_func1211->SetParLimits(3,0,0);
   alpha2_func1211->Draw("Csame");
   
   TF1 *alpha2_func1212 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1212->SetFillColor(19);
   alpha2_func1212->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   alpha2_func1212->SetMarkerColor(ci);
   alpha2_func1212->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   alpha2_func1212->SetLineColor(ci);
   alpha2_func1212->SetLineWidth(3);
   alpha2_func1212->SetLineStyle(9);
   alpha2_func1212->SetChisquare(4.256894);
   alpha2_func1212->SetNDF(9);
   alpha2_func1212->GetXaxis()->SetLabelFont(42);
   alpha2_func1212->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1212->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1212->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1212->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1212->GetXaxis()->SetTitleFont(42);
   alpha2_func1212->GetYaxis()->SetLabelFont(42);
   alpha2_func1212->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1212->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1212->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1212->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1212->GetYaxis()->SetTitleFont(42);
   alpha2_func1212->SetParameter(0,1.161367);
   alpha2_func1212->SetParError(0,0.1105567);
   alpha2_func1212->SetParLimits(0,0,0);
   alpha2_func1212->SetParameter(1,0.0005745786);
   alpha2_func1212->SetParError(1,0.0001370397);
   alpha2_func1212->SetParLimits(1,0,0);
   alpha2_func1212->SetParameter(2,-1.10429e-07);
   alpha2_func1212->SetParError(2,4.917444e-08);
   alpha2_func1212->SetParLimits(2,0,0);
   alpha2_func1212->SetParameter(3,6.900624e-12);
   alpha2_func1212->SetParError(3,5.279984e-12);
   alpha2_func1212->SetParLimits(3,0,0);
   alpha2_func1212->Draw("Csame");
   
   Double_t _fx1211[13] = {
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
   Double_t _fy1211[13] = {
   1.311738,
   1.397559,
   1.44211,
   1.499967,
   1.599234,
   1.666186,
   1.869926,
   1.947299,
   2.01677,
   2.036073,
   2.168013,
   2.055883,
   2.160462};
   Double_t _fex1211[13] = {
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
   Double_t _fey1211[13] = {
   0.006365656,
   0.006510932,
   0.006506375,
   0.007063866,
   0.008328607,
   0.009478857,
   0.008793197,
   0.01186977,
   0.01060781,
   0.01253401,
   0.04259275,
   0.04077737,
   0.08321475};
   gre = new TGraphErrors(13,_fx1211,_fy1211,_fex1211,_fey1211);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1211 = new TH1F("Graph_Graph1211","",100,550,5950);
   Graph_Graph1211->SetMinimum(1.211542);
   Graph_Graph1211->SetMaximum(2.337507);
   Graph_Graph1211->SetDirectory(0);
   Graph_Graph1211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1211->SetLineColor(ci);
   Graph_Graph1211->GetXaxis()->SetLabelFont(42);
   Graph_Graph1211->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1211->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1211->GetXaxis()->SetTitleFont(42);
   Graph_Graph1211->GetYaxis()->SetLabelFont(42);
   Graph_Graph1211->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1211->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1211->GetYaxis()->SetTitleFont(42);
   Graph_Graph1211->GetZaxis()->SetLabelFont(42);
   Graph_Graph1211->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1211->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1211);
   
   
   TF1 *alpha2_func1212 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1212->SetBit(TF1::kNotDraw);
   alpha2_func1212->SetFillColor(19);
   alpha2_func1212->SetFillStyle(0);
   alpha2_func1212->SetLineColor(2);
   alpha2_func1212->SetLineWidth(2);
   alpha2_func1212->SetChisquare(90.8988);
   alpha2_func1212->SetNDF(9);
   alpha2_func1212->GetXaxis()->SetLabelFont(42);
   alpha2_func1212->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1212->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1212->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1212->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1212->GetXaxis()->SetTitleFont(42);
   alpha2_func1212->GetYaxis()->SetLabelFont(42);
   alpha2_func1212->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1212->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1212->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1212->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1212->GetYaxis()->SetTitleFont(42);
   alpha2_func1212->SetParameter(0,0.8899548);
   alpha2_func1212->SetParError(0,0.03343486);
   alpha2_func1212->SetParLimits(0,0,0);
   alpha2_func1212->SetParameter(1,0.0004246412);
   alpha2_func1212->SetParError(1,4.55719e-05);
   alpha2_func1212->SetParLimits(1,0,0);
   alpha2_func1212->SetParameter(2,-3.677404e-09);
   alpha2_func1212->SetParError(2,1.860504e-08);
   alpha2_func1212->SetParLimits(2,0,0);
   alpha2_func1212->SetParameter(3,-7.086558e-12);
   alpha2_func1212->SetParError(3,2.33248e-12);
   alpha2_func1212->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1212);
   gre->Draw("p");
   
   Double_t _fx1213[13] = {
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
   Double_t _fy1213[13] = {
   2.069568,
   2.154599,
   2.21129,
   2.259919,
   2.26914,
   2.303736,
   2.273734,
   2.243645,
   2.155195,
   2.133381,
   2.137716,
   2.142319,
   1.937614};
   Double_t _fex1213[13] = {
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
   Double_t _fey1213[13] = {
   0.01188072,
   0.01164196,
   0.01186506,
   0.01189407,
   0.01197361,
   0.01196128,
   0.01163513,
   0.01255678,
   0.01136574,
   0.01285427,
   0.05659893,
   0.03342017,
   0.03760977};
   gre = new TGraphErrors(13,_fx1213,_fy1213,_fex1213,_fey1213);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1213 = new TH1F("Graph_Graph1213","",100,550,5950);
   Graph_Graph1213->SetMinimum(1.858435);
   Graph_Graph1213->SetMaximum(2.357267);
   Graph_Graph1213->SetDirectory(0);
   Graph_Graph1213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1213->SetLineColor(ci);
   Graph_Graph1213->GetXaxis()->SetLabelFont(42);
   Graph_Graph1213->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1213->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1213->GetXaxis()->SetTitleFont(42);
   Graph_Graph1213->GetYaxis()->SetLabelFont(42);
   Graph_Graph1213->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1213->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1213->GetYaxis()->SetTitleFont(42);
   Graph_Graph1213->GetZaxis()->SetLabelFont(42);
   Graph_Graph1213->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1213->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1213);
   
   
   TF1 *alpha2_func1214 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1214->SetBit(TF1::kNotDraw);
   alpha2_func1214->SetFillColor(19);
   alpha2_func1214->SetFillStyle(0);
   alpha2_func1214->SetLineColor(2);
   alpha2_func1214->SetLineWidth(2);
   alpha2_func1214->SetChisquare(38.9904);
   alpha2_func1214->SetNDF(9);
   alpha2_func1214->GetXaxis()->SetLabelFont(42);
   alpha2_func1214->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1214->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1214->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1214->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1214->GetXaxis()->SetTitleFont(42);
   alpha2_func1214->GetYaxis()->SetLabelFont(42);
   alpha2_func1214->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1214->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1214->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1214->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1214->GetYaxis()->SetTitleFont(42);
   alpha2_func1214->SetParameter(0,1.495633);
   alpha2_func1214->SetParError(0,0.04530283);
   alpha2_func1214->SetParLimits(0,0,0);
   alpha2_func1214->SetParameter(1,0.0008343151);
   alpha2_func1214->SetParError(1,5.588067e-05);
   alpha2_func1214->SetParLimits(1,0,0);
   alpha2_func1214->SetParameter(2,-2.684051e-07);
   alpha2_func1214->SetParError(2,2.031295e-08);
   alpha2_func1214->SetParLimits(2,0,0);
   alpha2_func1214->SetParameter(3,2.458099e-11);
   alpha2_func1214->SetParError(3,2.252895e-12);
   alpha2_func1214->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1214);
   gre->Draw("p");
   
   TF1 *alpha2_func1215 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1215->SetFillColor(19);
   alpha2_func1215->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   alpha2_func1215->SetMarkerColor(ci);
   alpha2_func1215->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   alpha2_func1215->SetLineColor(ci);
   alpha2_func1215->SetLineWidth(3);
   alpha2_func1215->SetChisquare(38.9904);
   alpha2_func1215->SetNDF(9);
   alpha2_func1215->GetXaxis()->SetLabelFont(42);
   alpha2_func1215->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1215->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1215->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1215->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1215->GetXaxis()->SetTitleFont(42);
   alpha2_func1215->GetYaxis()->SetLabelFont(42);
   alpha2_func1215->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1215->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1215->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1215->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1215->GetYaxis()->SetTitleFont(42);
   alpha2_func1215->SetParameter(0,1.495633);
   alpha2_func1215->SetParError(0,0.04530283);
   alpha2_func1215->SetParLimits(0,0,0);
   alpha2_func1215->SetParameter(1,0.0008343151);
   alpha2_func1215->SetParError(1,5.588067e-05);
   alpha2_func1215->SetParLimits(1,0,0);
   alpha2_func1215->SetParameter(2,-2.684051e-07);
   alpha2_func1215->SetParError(2,2.031295e-08);
   alpha2_func1215->SetParLimits(2,0,0);
   alpha2_func1215->SetParameter(3,2.458099e-11);
   alpha2_func1215->SetParError(3,2.252895e-12);
   alpha2_func1215->SetParLimits(3,0,0);
   alpha2_func1215->Draw("Csame");
   
   TF1 *alpha2_func1216 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1216->SetFillColor(19);
   alpha2_func1216->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   alpha2_func1216->SetMarkerColor(ci);
   alpha2_func1216->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   alpha2_func1216->SetLineColor(ci);
   alpha2_func1216->SetLineWidth(3);
   alpha2_func1216->SetLineStyle(9);
   alpha2_func1216->SetChisquare(90.8988);
   alpha2_func1216->SetNDF(9);
   alpha2_func1216->GetXaxis()->SetLabelFont(42);
   alpha2_func1216->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1216->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1216->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1216->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1216->GetXaxis()->SetTitleFont(42);
   alpha2_func1216->GetYaxis()->SetLabelFont(42);
   alpha2_func1216->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1216->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1216->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1216->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1216->GetYaxis()->SetTitleFont(42);
   alpha2_func1216->SetParameter(0,0.8899548);
   alpha2_func1216->SetParError(0,0.03343486);
   alpha2_func1216->SetParLimits(0,0,0);
   alpha2_func1216->SetParameter(1,0.0004246412);
   alpha2_func1216->SetParError(1,4.55719e-05);
   alpha2_func1216->SetParLimits(1,0,0);
   alpha2_func1216->SetParameter(2,-3.677404e-09);
   alpha2_func1216->SetParError(2,1.860504e-08);
   alpha2_func1216->SetParLimits(2,0,0);
   alpha2_func1216->SetParameter(3,-7.086558e-12);
   alpha2_func1216->SetParError(3,2.33248e-12);
   alpha2_func1216->SetParLimits(3,0,0);
   alpha2_func1216->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("alpha2_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha2_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha2_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha2_func","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.7788945,0.1783217,0.9974874,0.2482517,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","HPHP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","HPLP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
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
