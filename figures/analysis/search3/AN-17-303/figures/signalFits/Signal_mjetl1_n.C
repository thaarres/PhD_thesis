void Signal_mjetl1_n()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:17:56 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,-0.742268,5728.857,4.412371);
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
   
   Double_t _fx1071[13] = {
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
   Double_t _fy1071[13] = {
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85};
   Double_t _fex1071[13] = {
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
   Double_t _fey1071[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,_fx1071,_fy1071,_fex1071,_fey1071);
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
   
   TH1F *Graph_Graph1071 = new TH1F("Graph_Graph1071","",100,550,5950);
   Graph_Graph1071->SetMinimum(0);
   Graph_Graph1071->SetMaximum(4);
   Graph_Graph1071->SetDirectory(0);
   Graph_Graph1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1071->SetLineColor(ci);
   Graph_Graph1071->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1071->GetXaxis()->SetRange(11,92);
   Graph_Graph1071->GetXaxis()->SetNdivisions(209);
   Graph_Graph1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph1071->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1071->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1071->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph1071->GetYaxis()->SetTitle("n (GeV)");
   Graph_Graph1071->GetYaxis()->SetNdivisions(504);
   Graph_Graph1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph1071->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1071->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1071->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1071->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1071);
   
   
   TF1 *n_func1072 = new TF1("n_func","pol0",1000,5500);
   n_func1072->SetBit(TF1::kNotDraw);
   n_func1072->SetFillColor(19);
   n_func1072->SetFillStyle(0);
   n_func1072->SetLineColor(2);
   n_func1072->SetLineWidth(2);
   n_func1072->SetChisquare(2.307418e-29);
   n_func1072->SetNDF(12);
   n_func1072->GetXaxis()->SetLabelFont(42);
   n_func1072->GetXaxis()->SetLabelOffset(0.007);
   n_func1072->GetXaxis()->SetLabelSize(0.05);
   n_func1072->GetXaxis()->SetTitleSize(0.06);
   n_func1072->GetXaxis()->SetTitleOffset(0.9);
   n_func1072->GetXaxis()->SetTitleFont(42);
   n_func1072->GetYaxis()->SetLabelFont(42);
   n_func1072->GetYaxis()->SetLabelOffset(0.007);
   n_func1072->GetYaxis()->SetLabelSize(0.05);
   n_func1072->GetYaxis()->SetTitleSize(0.06);
   n_func1072->GetYaxis()->SetTitleOffset(1.25);
   n_func1072->GetYaxis()->SetTitleFont(42);
   n_func1072->SetParameter(0,2.85);
   n_func1072->SetParError(0,3.845925e-16);
   n_func1072->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1072);
   gre->Draw("ap");
   
   Double_t _fx1073[13] = {
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
   Double_t _fy1073[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1073[13] = {
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
   Double_t _fey1073[13] = {
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
   gre = new TGraphErrors(13,_fx1073,_fy1073,_fex1073,_fey1073);
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
   
   TH1F *Graph_Graph1073 = new TH1F("Graph_Graph1073","",100,550,5950);
   Graph_Graph1073->SetMinimum(1.9);
   Graph_Graph1073->SetMaximum(3.1);
   Graph_Graph1073->SetDirectory(0);
   Graph_Graph1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1073->SetLineColor(ci);
   Graph_Graph1073->GetXaxis()->SetLabelFont(42);
   Graph_Graph1073->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1073->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1073->GetXaxis()->SetTitleFont(42);
   Graph_Graph1073->GetYaxis()->SetLabelFont(42);
   Graph_Graph1073->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1073->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1073->GetYaxis()->SetTitleFont(42);
   Graph_Graph1073->GetZaxis()->SetLabelFont(42);
   Graph_Graph1073->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1073->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1073);
   
   
   TF1 *n_func1074 = new TF1("n_func","pol0",1000,5500);
   n_func1074->SetBit(TF1::kNotDraw);
   n_func1074->SetFillColor(19);
   n_func1074->SetFillStyle(0);
   n_func1074->SetLineColor(2);
   n_func1074->SetLineWidth(2);
   n_func1074->SetChisquare(2.563798e-30);
   n_func1074->SetNDF(12);
   n_func1074->GetXaxis()->SetLabelFont(42);
   n_func1074->GetXaxis()->SetLabelOffset(0.007);
   n_func1074->GetXaxis()->SetLabelSize(0.05);
   n_func1074->GetXaxis()->SetTitleSize(0.06);
   n_func1074->GetXaxis()->SetTitleOffset(0.9);
   n_func1074->GetXaxis()->SetTitleFont(42);
   n_func1074->GetYaxis()->SetLabelFont(42);
   n_func1074->GetYaxis()->SetLabelOffset(0.007);
   n_func1074->GetYaxis()->SetLabelSize(0.05);
   n_func1074->GetYaxis()->SetTitleSize(0.06);
   n_func1074->GetYaxis()->SetTitleOffset(1.25);
   n_func1074->GetYaxis()->SetTitleFont(42);
   n_func1074->SetParameter(0,2);
   n_func1074->SetParError(0,1.281975e-16);
   n_func1074->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1074);
   gre->Draw("p");
   
   Double_t _fx1075[13] = {
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
   Double_t _fy1075[13] = {
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85};
   Double_t _fex1075[13] = {
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
   Double_t _fey1075[13] = {
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
   gre = new TGraphErrors(13,_fx1075,_fy1075,_fex1075,_fey1075);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10711075 = new TH1F("Graph_Graph_Graph10711075","",100,550,5950);
   Graph_Graph_Graph10711075->SetMinimum(0);
   Graph_Graph_Graph10711075->SetMaximum(4);
   Graph_Graph_Graph10711075->SetDirectory(0);
   Graph_Graph_Graph10711075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10711075->SetLineColor(ci);
   Graph_Graph_Graph10711075->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph10711075->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph10711075->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10711075->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10711075->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10711075->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10711075->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10711075->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10711075->GetYaxis()->SetTitle("n (GeV)");
   Graph_Graph_Graph10711075->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10711075->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10711075->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10711075->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10711075->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10711075->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10711075->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10711075->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10711075->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10711075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10711075);
   
   
   TF1 *n_func1076 = new TF1("n_func","pol0",1000,5500);
   n_func1076->SetBit(TF1::kNotDraw);
   n_func1076->SetFillColor(19);
   n_func1076->SetFillStyle(0);
   n_func1076->SetLineColor(2);
   n_func1076->SetLineWidth(2);
   n_func1076->SetChisquare(2.307418e-29);
   n_func1076->SetNDF(12);
   n_func1076->GetXaxis()->SetLabelFont(42);
   n_func1076->GetXaxis()->SetLabelOffset(0.007);
   n_func1076->GetXaxis()->SetLabelSize(0.05);
   n_func1076->GetXaxis()->SetTitleSize(0.06);
   n_func1076->GetXaxis()->SetTitleOffset(0.9);
   n_func1076->GetXaxis()->SetTitleFont(42);
   n_func1076->GetYaxis()->SetLabelFont(42);
   n_func1076->GetYaxis()->SetLabelOffset(0.007);
   n_func1076->GetYaxis()->SetLabelSize(0.05);
   n_func1076->GetYaxis()->SetTitleSize(0.06);
   n_func1076->GetYaxis()->SetTitleOffset(1.25);
   n_func1076->GetYaxis()->SetTitleFont(42);
   n_func1076->SetParameter(0,2.85);
   n_func1076->SetParError(0,3.845925e-16);
   n_func1076->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1076);
   gre->Draw("p");
   
   TF1 *n_func1077 = new TF1("n_func","pol0",0,13000);
   n_func1077->SetFillColor(19);
   n_func1077->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   n_func1077->SetMarkerColor(ci);
   n_func1077->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   n_func1077->SetLineColor(ci);
   n_func1077->SetLineWidth(3);
   n_func1077->SetChisquare(2.307418e-29);
   n_func1077->SetNDF(12);
   n_func1077->GetXaxis()->SetLabelFont(42);
   n_func1077->GetXaxis()->SetLabelOffset(0.007);
   n_func1077->GetXaxis()->SetLabelSize(0.05);
   n_func1077->GetXaxis()->SetTitleSize(0.06);
   n_func1077->GetXaxis()->SetTitleOffset(0.9);
   n_func1077->GetXaxis()->SetTitleFont(42);
   n_func1077->GetYaxis()->SetLabelFont(42);
   n_func1077->GetYaxis()->SetLabelOffset(0.007);
   n_func1077->GetYaxis()->SetLabelSize(0.05);
   n_func1077->GetYaxis()->SetTitleSize(0.06);
   n_func1077->GetYaxis()->SetTitleOffset(1.25);
   n_func1077->GetYaxis()->SetTitleFont(42);
   n_func1077->SetParameter(0,2.85);
   n_func1077->SetParError(0,3.845925e-16);
   n_func1077->SetParLimits(0,0,0);
   n_func1077->Draw("Csame");
   
   TF1 *n_func1078 = new TF1("n_func","pol0",0,13000);
   n_func1078->SetFillColor(19);
   n_func1078->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   n_func1078->SetMarkerColor(ci);
   n_func1078->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   n_func1078->SetLineColor(ci);
   n_func1078->SetLineWidth(3);
   n_func1078->SetLineStyle(9);
   n_func1078->SetChisquare(2.563798e-30);
   n_func1078->SetNDF(12);
   n_func1078->GetXaxis()->SetLabelFont(42);
   n_func1078->GetXaxis()->SetLabelOffset(0.007);
   n_func1078->GetXaxis()->SetLabelSize(0.05);
   n_func1078->GetXaxis()->SetTitleSize(0.06);
   n_func1078->GetXaxis()->SetTitleOffset(0.9);
   n_func1078->GetXaxis()->SetTitleFont(42);
   n_func1078->GetYaxis()->SetLabelFont(42);
   n_func1078->GetYaxis()->SetLabelOffset(0.007);
   n_func1078->GetYaxis()->SetLabelSize(0.05);
   n_func1078->GetYaxis()->SetTitleSize(0.06);
   n_func1078->GetYaxis()->SetTitleOffset(1.25);
   n_func1078->GetYaxis()->SetTitleFont(42);
   n_func1078->SetParameter(0,2);
   n_func1078->SetParError(0,1.281975e-16);
   n_func1078->SetParLimits(0,0,0);
   n_func1078->Draw("Csame");
   
   Double_t _fx1077[13] = {
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
   Double_t _fy1077[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1077[13] = {
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
   Double_t _fey1077[13] = {
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
   gre = new TGraphErrors(13,_fx1077,_fy1077,_fex1077,_fey1077);
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
   
   TH1F *Graph_Graph1077 = new TH1F("Graph_Graph1077","",100,550,5950);
   Graph_Graph1077->SetMinimum(1.9);
   Graph_Graph1077->SetMaximum(3.1);
   Graph_Graph1077->SetDirectory(0);
   Graph_Graph1077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1077->SetLineColor(ci);
   Graph_Graph1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph1077->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1077->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph1077->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1077->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1077->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1077);
   
   
   TF1 *n_func1078 = new TF1("n_func","pol0",1000,5500);
   n_func1078->SetBit(TF1::kNotDraw);
   n_func1078->SetFillColor(19);
   n_func1078->SetFillStyle(0);
   n_func1078->SetLineColor(2);
   n_func1078->SetLineWidth(2);
   n_func1078->SetChisquare(2.563798e-30);
   n_func1078->SetNDF(12);
   n_func1078->GetXaxis()->SetLabelFont(42);
   n_func1078->GetXaxis()->SetLabelOffset(0.007);
   n_func1078->GetXaxis()->SetLabelSize(0.05);
   n_func1078->GetXaxis()->SetTitleSize(0.06);
   n_func1078->GetXaxis()->SetTitleOffset(0.9);
   n_func1078->GetXaxis()->SetTitleFont(42);
   n_func1078->GetYaxis()->SetLabelFont(42);
   n_func1078->GetYaxis()->SetLabelOffset(0.007);
   n_func1078->GetYaxis()->SetLabelSize(0.05);
   n_func1078->GetYaxis()->SetTitleSize(0.06);
   n_func1078->GetYaxis()->SetTitleOffset(1.25);
   n_func1078->GetYaxis()->SetTitleFont(42);
   n_func1078->SetParameter(0,2);
   n_func1078->SetParError(0,1.281975e-16);
   n_func1078->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1078);
   gre->Draw("p");
   
   Double_t _fx1079[13] = {
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
   Double_t _fy1079[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1079[13] = {
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
   Double_t _fey1079[13] = {
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
   gre = new TGraphErrors(13,_fx1079,_fy1079,_fex1079,_fey1079);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1079 = new TH1F("Graph_Graph1079","",100,550,5950);
   Graph_Graph1079->SetMinimum(1.9);
   Graph_Graph1079->SetMaximum(3.1);
   Graph_Graph1079->SetDirectory(0);
   Graph_Graph1079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1079->SetLineColor(ci);
   Graph_Graph1079->GetXaxis()->SetLabelFont(42);
   Graph_Graph1079->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1079->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1079->GetXaxis()->SetTitleFont(42);
   Graph_Graph1079->GetYaxis()->SetLabelFont(42);
   Graph_Graph1079->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1079->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1079->GetYaxis()->SetTitleFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1079->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1079);
   
   
   TF1 *n_func1080 = new TF1("n_func","pol0",1000,5500);
   n_func1080->SetBit(TF1::kNotDraw);
   n_func1080->SetFillColor(19);
   n_func1080->SetFillStyle(0);
   n_func1080->SetLineColor(2);
   n_func1080->SetLineWidth(2);
   n_func1080->SetChisquare(2.563798e-30);
   n_func1080->SetNDF(12);
   n_func1080->GetXaxis()->SetLabelFont(42);
   n_func1080->GetXaxis()->SetLabelOffset(0.007);
   n_func1080->GetXaxis()->SetLabelSize(0.05);
   n_func1080->GetXaxis()->SetTitleSize(0.06);
   n_func1080->GetXaxis()->SetTitleOffset(0.9);
   n_func1080->GetXaxis()->SetTitleFont(42);
   n_func1080->GetYaxis()->SetLabelFont(42);
   n_func1080->GetYaxis()->SetLabelOffset(0.007);
   n_func1080->GetYaxis()->SetLabelSize(0.05);
   n_func1080->GetYaxis()->SetTitleSize(0.06);
   n_func1080->GetYaxis()->SetTitleOffset(1.25);
   n_func1080->GetYaxis()->SetTitleFont(42);
   n_func1080->SetParameter(0,2);
   n_func1080->SetParError(0,1.281975e-16);
   n_func1080->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1080);
   gre->Draw("p");
   
   TF1 *n_func1081 = new TF1("n_func","pol0",0,13000);
   n_func1081->SetFillColor(19);
   n_func1081->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   n_func1081->SetMarkerColor(ci);
   n_func1081->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   n_func1081->SetLineColor(ci);
   n_func1081->SetLineWidth(3);
   n_func1081->SetChisquare(2.563798e-30);
   n_func1081->SetNDF(12);
   n_func1081->GetXaxis()->SetLabelFont(42);
   n_func1081->GetXaxis()->SetLabelOffset(0.007);
   n_func1081->GetXaxis()->SetLabelSize(0.05);
   n_func1081->GetXaxis()->SetTitleSize(0.06);
   n_func1081->GetXaxis()->SetTitleOffset(0.9);
   n_func1081->GetXaxis()->SetTitleFont(42);
   n_func1081->GetYaxis()->SetLabelFont(42);
   n_func1081->GetYaxis()->SetLabelOffset(0.007);
   n_func1081->GetYaxis()->SetLabelSize(0.05);
   n_func1081->GetYaxis()->SetTitleSize(0.06);
   n_func1081->GetYaxis()->SetTitleOffset(1.25);
   n_func1081->GetYaxis()->SetTitleFont(42);
   n_func1081->SetParameter(0,2);
   n_func1081->SetParError(0,1.281975e-16);
   n_func1081->SetParLimits(0,0,0);
   n_func1081->Draw("Csame");
   
   TF1 *n_func1082 = new TF1("n_func","pol0",0,13000);
   n_func1082->SetFillColor(19);
   n_func1082->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   n_func1082->SetMarkerColor(ci);
   n_func1082->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   n_func1082->SetLineColor(ci);
   n_func1082->SetLineWidth(3);
   n_func1082->SetLineStyle(9);
   n_func1082->SetChisquare(2.563798e-30);
   n_func1082->SetNDF(12);
   n_func1082->GetXaxis()->SetLabelFont(42);
   n_func1082->GetXaxis()->SetLabelOffset(0.007);
   n_func1082->GetXaxis()->SetLabelSize(0.05);
   n_func1082->GetXaxis()->SetTitleSize(0.06);
   n_func1082->GetXaxis()->SetTitleOffset(0.9);
   n_func1082->GetXaxis()->SetTitleFont(42);
   n_func1082->GetYaxis()->SetLabelFont(42);
   n_func1082->GetYaxis()->SetLabelOffset(0.007);
   n_func1082->GetYaxis()->SetLabelSize(0.05);
   n_func1082->GetYaxis()->SetTitleSize(0.06);
   n_func1082->GetYaxis()->SetTitleOffset(1.25);
   n_func1082->GetYaxis()->SetTitleFont(42);
   n_func1082->SetParameter(0,2);
   n_func1082->SetParError(0,1.281975e-16);
   n_func1082->SetParLimits(0,0,0);
   n_func1082->Draw("Csame");
   
   Double_t _fx1081[13] = {
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
   Double_t _fy1081[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1081[13] = {
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
   Double_t _fey1081[13] = {
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
   gre = new TGraphErrors(13,_fx1081,_fy1081,_fex1081,_fey1081);
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
   
   TH1F *Graph_Graph1081 = new TH1F("Graph_Graph1081","",100,550,5950);
   Graph_Graph1081->SetMinimum(1.9);
   Graph_Graph1081->SetMaximum(3.1);
   Graph_Graph1081->SetDirectory(0);
   Graph_Graph1081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1081->SetLineColor(ci);
   Graph_Graph1081->GetXaxis()->SetLabelFont(42);
   Graph_Graph1081->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1081->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1081->GetXaxis()->SetTitleFont(42);
   Graph_Graph1081->GetYaxis()->SetLabelFont(42);
   Graph_Graph1081->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1081->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1081->GetYaxis()->SetTitleFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1081);
   
   
   TF1 *n_func1082 = new TF1("n_func","pol0",1000,5500);
   n_func1082->SetBit(TF1::kNotDraw);
   n_func1082->SetFillColor(19);
   n_func1082->SetFillStyle(0);
   n_func1082->SetLineColor(2);
   n_func1082->SetLineWidth(2);
   n_func1082->SetChisquare(2.563798e-30);
   n_func1082->SetNDF(12);
   n_func1082->GetXaxis()->SetLabelFont(42);
   n_func1082->GetXaxis()->SetLabelOffset(0.007);
   n_func1082->GetXaxis()->SetLabelSize(0.05);
   n_func1082->GetXaxis()->SetTitleSize(0.06);
   n_func1082->GetXaxis()->SetTitleOffset(0.9);
   n_func1082->GetXaxis()->SetTitleFont(42);
   n_func1082->GetYaxis()->SetLabelFont(42);
   n_func1082->GetYaxis()->SetLabelOffset(0.007);
   n_func1082->GetYaxis()->SetLabelSize(0.05);
   n_func1082->GetYaxis()->SetTitleSize(0.06);
   n_func1082->GetYaxis()->SetTitleOffset(1.25);
   n_func1082->GetYaxis()->SetTitleFont(42);
   n_func1082->SetParameter(0,2);
   n_func1082->SetParError(0,1.281975e-16);
   n_func1082->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1082);
   gre->Draw("p");
   
   Double_t _fx1083[13] = {
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
   Double_t _fy1083[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1083[13] = {
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
   Double_t _fey1083[13] = {
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
   gre = new TGraphErrors(13,_fx1083,_fy1083,_fex1083,_fey1083);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1083 = new TH1F("Graph_Graph1083","",100,550,5950);
   Graph_Graph1083->SetMinimum(1.9);
   Graph_Graph1083->SetMaximum(3.1);
   Graph_Graph1083->SetDirectory(0);
   Graph_Graph1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1083->SetLineColor(ci);
   Graph_Graph1083->GetXaxis()->SetLabelFont(42);
   Graph_Graph1083->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1083->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1083->GetXaxis()->SetTitleFont(42);
   Graph_Graph1083->GetYaxis()->SetLabelFont(42);
   Graph_Graph1083->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1083->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1083->GetYaxis()->SetTitleFont(42);
   Graph_Graph1083->GetZaxis()->SetLabelFont(42);
   Graph_Graph1083->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1083->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1083);
   
   
   TF1 *n_func1084 = new TF1("n_func","pol0",1000,5500);
   n_func1084->SetBit(TF1::kNotDraw);
   n_func1084->SetFillColor(19);
   n_func1084->SetFillStyle(0);
   n_func1084->SetLineColor(2);
   n_func1084->SetLineWidth(2);
   n_func1084->SetChisquare(2.563798e-30);
   n_func1084->SetNDF(12);
   n_func1084->GetXaxis()->SetLabelFont(42);
   n_func1084->GetXaxis()->SetLabelOffset(0.007);
   n_func1084->GetXaxis()->SetLabelSize(0.05);
   n_func1084->GetXaxis()->SetTitleSize(0.06);
   n_func1084->GetXaxis()->SetTitleOffset(0.9);
   n_func1084->GetXaxis()->SetTitleFont(42);
   n_func1084->GetYaxis()->SetLabelFont(42);
   n_func1084->GetYaxis()->SetLabelOffset(0.007);
   n_func1084->GetYaxis()->SetLabelSize(0.05);
   n_func1084->GetYaxis()->SetTitleSize(0.06);
   n_func1084->GetYaxis()->SetTitleOffset(1.25);
   n_func1084->GetYaxis()->SetTitleFont(42);
   n_func1084->SetParameter(0,2);
   n_func1084->SetParError(0,1.281975e-16);
   n_func1084->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1084);
   gre->Draw("p");
   
   TF1 *n_func1085 = new TF1("n_func","pol0",0,13000);
   n_func1085->SetFillColor(19);
   n_func1085->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   n_func1085->SetMarkerColor(ci);
   n_func1085->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   n_func1085->SetLineColor(ci);
   n_func1085->SetLineWidth(3);
   n_func1085->SetChisquare(2.563798e-30);
   n_func1085->SetNDF(12);
   n_func1085->GetXaxis()->SetLabelFont(42);
   n_func1085->GetXaxis()->SetLabelOffset(0.007);
   n_func1085->GetXaxis()->SetLabelSize(0.05);
   n_func1085->GetXaxis()->SetTitleSize(0.06);
   n_func1085->GetXaxis()->SetTitleOffset(0.9);
   n_func1085->GetXaxis()->SetTitleFont(42);
   n_func1085->GetYaxis()->SetLabelFont(42);
   n_func1085->GetYaxis()->SetLabelOffset(0.007);
   n_func1085->GetYaxis()->SetLabelSize(0.05);
   n_func1085->GetYaxis()->SetTitleSize(0.06);
   n_func1085->GetYaxis()->SetTitleOffset(1.25);
   n_func1085->GetYaxis()->SetTitleFont(42);
   n_func1085->SetParameter(0,2);
   n_func1085->SetParError(0,1.281975e-16);
   n_func1085->SetParLimits(0,0,0);
   n_func1085->Draw("Csame");
   
   TF1 *n_func1086 = new TF1("n_func","pol0",0,13000);
   n_func1086->SetFillColor(19);
   n_func1086->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   n_func1086->SetMarkerColor(ci);
   n_func1086->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   n_func1086->SetLineColor(ci);
   n_func1086->SetLineWidth(3);
   n_func1086->SetLineStyle(9);
   n_func1086->SetChisquare(2.563798e-30);
   n_func1086->SetNDF(12);
   n_func1086->GetXaxis()->SetLabelFont(42);
   n_func1086->GetXaxis()->SetLabelOffset(0.007);
   n_func1086->GetXaxis()->SetLabelSize(0.05);
   n_func1086->GetXaxis()->SetTitleSize(0.06);
   n_func1086->GetXaxis()->SetTitleOffset(0.9);
   n_func1086->GetXaxis()->SetTitleFont(42);
   n_func1086->GetYaxis()->SetLabelFont(42);
   n_func1086->GetYaxis()->SetLabelOffset(0.007);
   n_func1086->GetYaxis()->SetLabelSize(0.05);
   n_func1086->GetYaxis()->SetTitleSize(0.06);
   n_func1086->GetYaxis()->SetTitleOffset(1.25);
   n_func1086->GetYaxis()->SetTitleFont(42);
   n_func1086->SetParameter(0,2);
   n_func1086->SetParError(0,1.281975e-16);
   n_func1086->SetParLimits(0,0,0);
   n_func1086->Draw("Csame");
   
   Double_t _fx1085[13] = {
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
   Double_t _fy1085[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1085[13] = {
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
   Double_t _fey1085[13] = {
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
   gre = new TGraphErrors(13,_fx1085,_fy1085,_fex1085,_fey1085);
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
   
   TH1F *Graph_Graph1085 = new TH1F("Graph_Graph1085","",100,550,5950);
   Graph_Graph1085->SetMinimum(1.9);
   Graph_Graph1085->SetMaximum(3.1);
   Graph_Graph1085->SetDirectory(0);
   Graph_Graph1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1085->SetLineColor(ci);
   Graph_Graph1085->GetXaxis()->SetLabelFont(42);
   Graph_Graph1085->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1085->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1085->GetXaxis()->SetTitleFont(42);
   Graph_Graph1085->GetYaxis()->SetLabelFont(42);
   Graph_Graph1085->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1085->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1085->GetYaxis()->SetTitleFont(42);
   Graph_Graph1085->GetZaxis()->SetLabelFont(42);
   Graph_Graph1085->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1085->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1085);
   
   
   TF1 *n_func1086 = new TF1("n_func","pol0",1000,5500);
   n_func1086->SetBit(TF1::kNotDraw);
   n_func1086->SetFillColor(19);
   n_func1086->SetFillStyle(0);
   n_func1086->SetLineColor(2);
   n_func1086->SetLineWidth(2);
   n_func1086->SetChisquare(2.563798e-30);
   n_func1086->SetNDF(12);
   n_func1086->GetXaxis()->SetLabelFont(42);
   n_func1086->GetXaxis()->SetLabelOffset(0.007);
   n_func1086->GetXaxis()->SetLabelSize(0.05);
   n_func1086->GetXaxis()->SetTitleSize(0.06);
   n_func1086->GetXaxis()->SetTitleOffset(0.9);
   n_func1086->GetXaxis()->SetTitleFont(42);
   n_func1086->GetYaxis()->SetLabelFont(42);
   n_func1086->GetYaxis()->SetLabelOffset(0.007);
   n_func1086->GetYaxis()->SetLabelSize(0.05);
   n_func1086->GetYaxis()->SetTitleSize(0.06);
   n_func1086->GetYaxis()->SetTitleOffset(1.25);
   n_func1086->GetYaxis()->SetTitleFont(42);
   n_func1086->SetParameter(0,2);
   n_func1086->SetParError(0,1.281975e-16);
   n_func1086->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1086);
   gre->Draw("p");
   
   Double_t _fx1087[13] = {
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
   Double_t _fy1087[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1087[13] = {
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
   Double_t _fey1087[13] = {
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
   gre = new TGraphErrors(13,_fx1087,_fy1087,_fex1087,_fey1087);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1087 = new TH1F("Graph_Graph1087","",100,550,5950);
   Graph_Graph1087->SetMinimum(1.9);
   Graph_Graph1087->SetMaximum(3.1);
   Graph_Graph1087->SetDirectory(0);
   Graph_Graph1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1087->SetLineColor(ci);
   Graph_Graph1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph1087->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1087->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph1087->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1087->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1087->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1087);
   
   
   TF1 *n_func1088 = new TF1("n_func","pol0",1000,5500);
   n_func1088->SetBit(TF1::kNotDraw);
   n_func1088->SetFillColor(19);
   n_func1088->SetFillStyle(0);
   n_func1088->SetLineColor(2);
   n_func1088->SetLineWidth(2);
   n_func1088->SetChisquare(2.563798e-30);
   n_func1088->SetNDF(12);
   n_func1088->GetXaxis()->SetLabelFont(42);
   n_func1088->GetXaxis()->SetLabelOffset(0.007);
   n_func1088->GetXaxis()->SetLabelSize(0.05);
   n_func1088->GetXaxis()->SetTitleSize(0.06);
   n_func1088->GetXaxis()->SetTitleOffset(0.9);
   n_func1088->GetXaxis()->SetTitleFont(42);
   n_func1088->GetYaxis()->SetLabelFont(42);
   n_func1088->GetYaxis()->SetLabelOffset(0.007);
   n_func1088->GetYaxis()->SetLabelSize(0.05);
   n_func1088->GetYaxis()->SetTitleSize(0.06);
   n_func1088->GetYaxis()->SetTitleOffset(1.25);
   n_func1088->GetYaxis()->SetTitleFont(42);
   n_func1088->SetParameter(0,2);
   n_func1088->SetParError(0,1.281975e-16);
   n_func1088->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1088);
   gre->Draw("p");
   
   TF1 *n_func1089 = new TF1("n_func","pol0",0,13000);
   n_func1089->SetFillColor(19);
   n_func1089->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   n_func1089->SetMarkerColor(ci);
   n_func1089->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   n_func1089->SetLineColor(ci);
   n_func1089->SetLineWidth(3);
   n_func1089->SetChisquare(2.563798e-30);
   n_func1089->SetNDF(12);
   n_func1089->GetXaxis()->SetLabelFont(42);
   n_func1089->GetXaxis()->SetLabelOffset(0.007);
   n_func1089->GetXaxis()->SetLabelSize(0.05);
   n_func1089->GetXaxis()->SetTitleSize(0.06);
   n_func1089->GetXaxis()->SetTitleOffset(0.9);
   n_func1089->GetXaxis()->SetTitleFont(42);
   n_func1089->GetYaxis()->SetLabelFont(42);
   n_func1089->GetYaxis()->SetLabelOffset(0.007);
   n_func1089->GetYaxis()->SetLabelSize(0.05);
   n_func1089->GetYaxis()->SetTitleSize(0.06);
   n_func1089->GetYaxis()->SetTitleOffset(1.25);
   n_func1089->GetYaxis()->SetTitleFont(42);
   n_func1089->SetParameter(0,2);
   n_func1089->SetParError(0,1.281975e-16);
   n_func1089->SetParLimits(0,0,0);
   n_func1089->Draw("Csame");
   
   TF1 *n_func1090 = new TF1("n_func","pol0",0,13000);
   n_func1090->SetFillColor(19);
   n_func1090->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   n_func1090->SetMarkerColor(ci);
   n_func1090->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   n_func1090->SetLineColor(ci);
   n_func1090->SetLineWidth(3);
   n_func1090->SetLineStyle(9);
   n_func1090->SetChisquare(2.563798e-30);
   n_func1090->SetNDF(12);
   n_func1090->GetXaxis()->SetLabelFont(42);
   n_func1090->GetXaxis()->SetLabelOffset(0.007);
   n_func1090->GetXaxis()->SetLabelSize(0.05);
   n_func1090->GetXaxis()->SetTitleSize(0.06);
   n_func1090->GetXaxis()->SetTitleOffset(0.9);
   n_func1090->GetXaxis()->SetTitleFont(42);
   n_func1090->GetYaxis()->SetLabelFont(42);
   n_func1090->GetYaxis()->SetLabelOffset(0.007);
   n_func1090->GetYaxis()->SetLabelSize(0.05);
   n_func1090->GetYaxis()->SetTitleSize(0.06);
   n_func1090->GetYaxis()->SetTitleOffset(1.25);
   n_func1090->GetYaxis()->SetTitleFont(42);
   n_func1090->SetParameter(0,2);
   n_func1090->SetParError(0,1.281975e-16);
   n_func1090->SetParLimits(0,0,0);
   n_func1090->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("n_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n_func","G_{B}#rightarrow ZZ","L");

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
