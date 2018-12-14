void Signal_mVV_N1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:19:54 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-1.85567,5806.667,11.03093);
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
   
   TF1 *N1_func1266 = new TF1("N1_func","pol0",0,13000);
   N1_func1266->SetFillColor(19);
   N1_func1266->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   N1_func1266->SetMarkerColor(ci);
   N1_func1266->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   N1_func1266->SetLineColor(ci);
   N1_func1266->SetLineWidth(3);
   N1_func1266->GetXaxis()->SetTitle("M_{VV} (GeV)");
   N1_func1266->GetXaxis()->SetRange(9,43);
   N1_func1266->GetXaxis()->SetNdivisions(209);
   N1_func1266->GetXaxis()->SetLabelFont(42);
   N1_func1266->GetXaxis()->SetLabelOffset(0.007);
   N1_func1266->GetXaxis()->SetLabelSize(0.05);
   N1_func1266->GetXaxis()->SetTitleSize(0.06);
   N1_func1266->GetXaxis()->SetTitleOffset(0.94);
   N1_func1266->GetXaxis()->SetTitleFont(42);
   N1_func1266->GetYaxis()->SetTitle("N1 (GeV)");
   N1_func1266->GetYaxis()->SetNdivisions(504);
   N1_func1266->GetYaxis()->SetLabelFont(42);
   N1_func1266->GetYaxis()->SetLabelOffset(0.007);
   N1_func1266->GetYaxis()->SetLabelSize(0.05);
   N1_func1266->GetYaxis()->SetTitleSize(0.06);
   N1_func1266->GetYaxis()->SetTitleOffset(0.97);
   N1_func1266->GetYaxis()->SetTitleFont(42);
   N1_func1266->SetParameter(0,1.61364);
   N1_func1266->SetParError(0,0.2773501);
   N1_func1266->SetParLimits(0,0,0);
   N1_func1266->Draw("C");
   
   Double_t _fx1265[13] = {
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
   Double_t _fy1265[13] = {
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364};
   Double_t _fex1265[13] = {
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
   Double_t _fey1265[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,_fx1265,_fy1265,_fex1265,_fey1265);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1265 = new TH1F("Graph_Graph1265","",100,550,5950);
   Graph_Graph1265->SetMinimum(1.51364);
   Graph_Graph1265->SetMaximum(2.71364);
   Graph_Graph1265->SetDirectory(0);
   Graph_Graph1265->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1265->SetLineColor(ci);
   Graph_Graph1265->GetXaxis()->SetLabelFont(42);
   Graph_Graph1265->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1265->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1265->GetXaxis()->SetTitleFont(42);
   Graph_Graph1265->GetYaxis()->SetLabelFont(42);
   Graph_Graph1265->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1265->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1265->GetYaxis()->SetTitleFont(42);
   Graph_Graph1265->GetZaxis()->SetLabelFont(42);
   Graph_Graph1265->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1265->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1265->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1265);
   
   
   TF1 *N1_func1266 = new TF1("N1_func","pol0",1000,5500);
   N1_func1266->SetBit(TF1::kNotDraw);
   N1_func1266->SetFillColor(19);
   N1_func1266->SetFillStyle(0);
   N1_func1266->SetLineColor(2);
   N1_func1266->SetLineWidth(2);
   N1_func1266->GetXaxis()->SetLabelFont(42);
   N1_func1266->GetXaxis()->SetLabelOffset(0.007);
   N1_func1266->GetXaxis()->SetLabelSize(0.05);
   N1_func1266->GetXaxis()->SetTitleSize(0.06);
   N1_func1266->GetXaxis()->SetTitleOffset(0.9);
   N1_func1266->GetXaxis()->SetTitleFont(42);
   N1_func1266->GetYaxis()->SetLabelFont(42);
   N1_func1266->GetYaxis()->SetLabelOffset(0.007);
   N1_func1266->GetYaxis()->SetLabelSize(0.05);
   N1_func1266->GetYaxis()->SetTitleSize(0.06);
   N1_func1266->GetYaxis()->SetTitleOffset(1.25);
   N1_func1266->GetYaxis()->SetTitleFont(42);
   N1_func1266->SetParameter(0,1.61364);
   N1_func1266->SetParError(0,0.2773501);
   N1_func1266->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(N1_func1266);
   gre->Draw("p");
   
   TF1 *N1_func1267 = new TF1("N1_func","pol0",0,13000);
   N1_func1267->SetFillColor(19);
   N1_func1267->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   N1_func1267->SetMarkerColor(ci);
   N1_func1267->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   N1_func1267->SetLineColor(ci);
   N1_func1267->SetLineWidth(3);
   N1_func1267->GetXaxis()->SetTitle("M_{VV} (GeV)");
   N1_func1267->GetXaxis()->SetRange(9,43);
   N1_func1267->GetXaxis()->SetNdivisions(209);
   N1_func1267->GetXaxis()->SetLabelFont(42);
   N1_func1267->GetXaxis()->SetLabelOffset(0.007);
   N1_func1267->GetXaxis()->SetLabelSize(0.05);
   N1_func1267->GetXaxis()->SetTitleSize(0.06);
   N1_func1267->GetXaxis()->SetTitleOffset(0.94);
   N1_func1267->GetXaxis()->SetTitleFont(42);
   N1_func1267->GetYaxis()->SetTitle("N1 (GeV)");
   N1_func1267->GetYaxis()->SetNdivisions(504);
   N1_func1267->GetYaxis()->SetLabelFont(42);
   N1_func1267->GetYaxis()->SetLabelOffset(0.007);
   N1_func1267->GetYaxis()->SetLabelSize(0.05);
   N1_func1267->GetYaxis()->SetTitleSize(0.06);
   N1_func1267->GetYaxis()->SetTitleOffset(0.97);
   N1_func1267->GetYaxis()->SetTitleFont(42);
   N1_func1267->SetParameter(0,1.61364);
   N1_func1267->SetParError(0,0.2773501);
   N1_func1267->SetParLimits(0,0,0);
   N1_func1267->Draw("Csame");
   
   Double_t _fx1267[12] = {
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
   Double_t _fy1267[12] = {
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364};
   Double_t _fex1267[12] = {
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
   Double_t _fey1267[12] = {
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
   gre = new TGraphErrors(12,_fx1267,_fy1267,_fex1267,_fey1267);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1267 = new TH1F("Graph_Graph1267","",100,550,5950);
   Graph_Graph1267->SetMinimum(1.51364);
   Graph_Graph1267->SetMaximum(2.71364);
   Graph_Graph1267->SetDirectory(0);
   Graph_Graph1267->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1267->SetLineColor(ci);
   Graph_Graph1267->GetXaxis()->SetLabelFont(42);
   Graph_Graph1267->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1267->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1267->GetXaxis()->SetTitleFont(42);
   Graph_Graph1267->GetYaxis()->SetLabelFont(42);
   Graph_Graph1267->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1267->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1267->GetYaxis()->SetTitleFont(42);
   Graph_Graph1267->GetZaxis()->SetLabelFont(42);
   Graph_Graph1267->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1267->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1267->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1267);
   
   
   TF1 *N1_func1268 = new TF1("N1_func","pol0",1000,5500);
   N1_func1268->SetBit(TF1::kNotDraw);
   N1_func1268->SetFillColor(19);
   N1_func1268->SetFillStyle(0);
   N1_func1268->SetLineColor(2);
   N1_func1268->SetLineWidth(2);
   N1_func1268->SetChisquare(5.916457e-31);
   N1_func1268->SetNDF(11);
   N1_func1268->GetXaxis()->SetLabelFont(42);
   N1_func1268->GetXaxis()->SetLabelOffset(0.007);
   N1_func1268->GetXaxis()->SetLabelSize(0.05);
   N1_func1268->GetXaxis()->SetTitleSize(0.06);
   N1_func1268->GetXaxis()->SetTitleOffset(0.9);
   N1_func1268->GetXaxis()->SetTitleFont(42);
   N1_func1268->GetYaxis()->SetLabelFont(42);
   N1_func1268->GetYaxis()->SetLabelOffset(0.007);
   N1_func1268->GetYaxis()->SetLabelSize(0.05);
   N1_func1268->GetYaxis()->SetTitleSize(0.06);
   N1_func1268->GetYaxis()->SetTitleOffset(1.25);
   N1_func1268->GetYaxis()->SetTitleFont(42);
   N1_func1268->SetParameter(0,1.61364);
   N1_func1268->SetParError(0,6.694897e-17);
   N1_func1268->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(N1_func1268);
   gre->Draw("p");
   
   TF1 *N1_func1269 = new TF1("N1_func","pol0",0,13000);
   N1_func1269->SetFillColor(19);
   N1_func1269->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   N1_func1269->SetMarkerColor(ci);
   N1_func1269->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   N1_func1269->SetLineColor(ci);
   N1_func1269->SetLineWidth(3);
   N1_func1269->SetChisquare(5.916457e-31);
   N1_func1269->SetNDF(11);
   N1_func1269->GetXaxis()->SetLabelFont(42);
   N1_func1269->GetXaxis()->SetLabelOffset(0.007);
   N1_func1269->GetXaxis()->SetLabelSize(0.05);
   N1_func1269->GetXaxis()->SetTitleSize(0.06);
   N1_func1269->GetXaxis()->SetTitleOffset(0.9);
   N1_func1269->GetXaxis()->SetTitleFont(42);
   N1_func1269->GetYaxis()->SetLabelFont(42);
   N1_func1269->GetYaxis()->SetLabelOffset(0.007);
   N1_func1269->GetYaxis()->SetLabelSize(0.05);
   N1_func1269->GetYaxis()->SetTitleSize(0.06);
   N1_func1269->GetYaxis()->SetTitleOffset(1.25);
   N1_func1269->GetYaxis()->SetTitleFont(42);
   N1_func1269->SetParameter(0,1.61364);
   N1_func1269->SetParError(0,6.694897e-17);
   N1_func1269->SetParLimits(0,0,0);
   N1_func1269->Draw("Csame");
   
   Double_t _fx1269[13] = {
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
   Double_t _fy1269[13] = {
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364};
   Double_t _fex1269[13] = {
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
   Double_t _fey1269[13] = {
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
   gre = new TGraphErrors(13,_fx1269,_fy1269,_fex1269,_fey1269);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1269 = new TH1F("Graph_Graph1269","",100,550,5950);
   Graph_Graph1269->SetMinimum(1.51364);
   Graph_Graph1269->SetMaximum(2.71364);
   Graph_Graph1269->SetDirectory(0);
   Graph_Graph1269->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1269->SetLineColor(ci);
   Graph_Graph1269->GetXaxis()->SetLabelFont(42);
   Graph_Graph1269->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1269->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1269->GetXaxis()->SetTitleFont(42);
   Graph_Graph1269->GetYaxis()->SetLabelFont(42);
   Graph_Graph1269->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1269->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1269->GetYaxis()->SetTitleFont(42);
   Graph_Graph1269->GetZaxis()->SetLabelFont(42);
   Graph_Graph1269->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1269->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1269->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1269);
   
   
   TF1 *N1_func1270 = new TF1("N1_func","pol0",1000,5500);
   N1_func1270->SetBit(TF1::kNotDraw);
   N1_func1270->SetFillColor(19);
   N1_func1270->SetFillStyle(0);
   N1_func1270->SetLineColor(2);
   N1_func1270->SetLineWidth(2);
   N1_func1270->GetXaxis()->SetLabelFont(42);
   N1_func1270->GetXaxis()->SetLabelOffset(0.007);
   N1_func1270->GetXaxis()->SetLabelSize(0.05);
   N1_func1270->GetXaxis()->SetTitleSize(0.06);
   N1_func1270->GetXaxis()->SetTitleOffset(0.9);
   N1_func1270->GetXaxis()->SetTitleFont(42);
   N1_func1270->GetYaxis()->SetLabelFont(42);
   N1_func1270->GetYaxis()->SetLabelOffset(0.007);
   N1_func1270->GetYaxis()->SetLabelSize(0.05);
   N1_func1270->GetYaxis()->SetTitleSize(0.06);
   N1_func1270->GetYaxis()->SetTitleOffset(1.25);
   N1_func1270->GetYaxis()->SetTitleFont(42);
   N1_func1270->SetParameter(0,1.61364);
   N1_func1270->SetParError(0,0.2773501);
   N1_func1270->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(N1_func1270);
   gre->Draw("p");
   
   TF1 *N1_func1271 = new TF1("N1_func","pol0",0,13000);
   N1_func1271->SetFillColor(19);
   N1_func1271->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   N1_func1271->SetMarkerColor(ci);
   N1_func1271->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   N1_func1271->SetLineColor(ci);
   N1_func1271->SetLineWidth(3);
   N1_func1271->GetXaxis()->SetLabelFont(42);
   N1_func1271->GetXaxis()->SetLabelOffset(0.007);
   N1_func1271->GetXaxis()->SetLabelSize(0.05);
   N1_func1271->GetXaxis()->SetTitleSize(0.06);
   N1_func1271->GetXaxis()->SetTitleOffset(0.9);
   N1_func1271->GetXaxis()->SetTitleFont(42);
   N1_func1271->GetYaxis()->SetLabelFont(42);
   N1_func1271->GetYaxis()->SetLabelOffset(0.007);
   N1_func1271->GetYaxis()->SetLabelSize(0.05);
   N1_func1271->GetYaxis()->SetTitleSize(0.06);
   N1_func1271->GetYaxis()->SetTitleOffset(1.25);
   N1_func1271->GetYaxis()->SetTitleFont(42);
   N1_func1271->SetParameter(0,1.61364);
   N1_func1271->SetParError(0,0.2773501);
   N1_func1271->SetParLimits(0,0,0);
   N1_func1271->Draw("Csame");
   
   Double_t _fx1271[13] = {
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
   Double_t _fy1271[13] = {
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364,
   1.61364};
   Double_t _fex1271[13] = {
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
   Double_t _fey1271[13] = {
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
   gre = new TGraphErrors(13,_fx1271,_fy1271,_fex1271,_fey1271);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1271 = new TH1F("Graph_Graph1271","",100,550,5950);
   Graph_Graph1271->SetMinimum(1.51364);
   Graph_Graph1271->SetMaximum(2.71364);
   Graph_Graph1271->SetDirectory(0);
   Graph_Graph1271->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1271->SetLineColor(ci);
   Graph_Graph1271->GetXaxis()->SetLabelFont(42);
   Graph_Graph1271->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1271->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1271->GetXaxis()->SetTitleFont(42);
   Graph_Graph1271->GetYaxis()->SetLabelFont(42);
   Graph_Graph1271->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1271->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1271->GetYaxis()->SetTitleFont(42);
   Graph_Graph1271->GetZaxis()->SetLabelFont(42);
   Graph_Graph1271->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1271->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1271->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1271);
   
   
   TF1 *N1_func1272 = new TF1("N1_func","pol0",1000,5500);
   N1_func1272->SetBit(TF1::kNotDraw);
   N1_func1272->SetFillColor(19);
   N1_func1272->SetFillStyle(0);
   N1_func1272->SetLineColor(2);
   N1_func1272->SetLineWidth(2);
   N1_func1272->GetXaxis()->SetLabelFont(42);
   N1_func1272->GetXaxis()->SetLabelOffset(0.007);
   N1_func1272->GetXaxis()->SetLabelSize(0.05);
   N1_func1272->GetXaxis()->SetTitleSize(0.06);
   N1_func1272->GetXaxis()->SetTitleOffset(0.9);
   N1_func1272->GetXaxis()->SetTitleFont(42);
   N1_func1272->GetYaxis()->SetLabelFont(42);
   N1_func1272->GetYaxis()->SetLabelOffset(0.007);
   N1_func1272->GetYaxis()->SetLabelSize(0.05);
   N1_func1272->GetYaxis()->SetTitleSize(0.06);
   N1_func1272->GetYaxis()->SetTitleOffset(1.25);
   N1_func1272->GetYaxis()->SetTitleFont(42);
   N1_func1272->SetParameter(0,1.61364);
   N1_func1272->SetParError(0,0.2773501);
   N1_func1272->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(N1_func1272);
   gre->Draw("p");
   
   TF1 *N1_func1273 = new TF1("N1_func","pol0",0,13000);
   N1_func1273->SetFillColor(19);
   N1_func1273->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   N1_func1273->SetMarkerColor(ci);
   N1_func1273->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   N1_func1273->SetLineColor(ci);
   N1_func1273->SetLineWidth(3);
   N1_func1273->GetXaxis()->SetLabelFont(42);
   N1_func1273->GetXaxis()->SetLabelOffset(0.007);
   N1_func1273->GetXaxis()->SetLabelSize(0.05);
   N1_func1273->GetXaxis()->SetTitleSize(0.06);
   N1_func1273->GetXaxis()->SetTitleOffset(0.9);
   N1_func1273->GetXaxis()->SetTitleFont(42);
   N1_func1273->GetYaxis()->SetLabelFont(42);
   N1_func1273->GetYaxis()->SetLabelOffset(0.007);
   N1_func1273->GetYaxis()->SetLabelSize(0.05);
   N1_func1273->GetYaxis()->SetTitleSize(0.06);
   N1_func1273->GetYaxis()->SetTitleOffset(1.25);
   N1_func1273->GetYaxis()->SetTitleFont(42);
   N1_func1273->SetParameter(0,1.61364);
   N1_func1273->SetParError(0,0.2773501);
   N1_func1273->SetParLimits(0,0,0);
   N1_func1273->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("N1_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("N1_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("N1_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("N1_func","G_{B}#rightarrow ZZ","L");

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
