void Signal_mVV_MEAN()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:19:27 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-842.5257,5806.667,7681.959);
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
   
   TF1 *MEAN_func1235 = new TF1("MEAN_func","pol1",0,13000);
   MEAN_func1235->SetFillColor(19);
   MEAN_func1235->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   MEAN_func1235->SetMarkerColor(ci);
   MEAN_func1235->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   MEAN_func1235->SetLineColor(ci);
   MEAN_func1235->SetLineWidth(3);
   MEAN_func1235->SetChisquare(28.3973);
   MEAN_func1235->SetNDF(11);
   MEAN_func1235->GetXaxis()->SetTitle("M_{VV} (GeV)");
   MEAN_func1235->GetXaxis()->SetRange(9,43);
   MEAN_func1235->GetXaxis()->SetNdivisions(209);
   MEAN_func1235->GetXaxis()->SetLabelFont(42);
   MEAN_func1235->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1235->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1235->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1235->GetXaxis()->SetTitleOffset(0.94);
   MEAN_func1235->GetXaxis()->SetTitleFont(42);
   MEAN_func1235->GetYaxis()->SetTitle("MEAN (GeV)");
   MEAN_func1235->GetYaxis()->SetNdivisions(504);
   MEAN_func1235->GetYaxis()->SetLabelFont(42);
   MEAN_func1235->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1235->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1235->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1235->GetYaxis()->SetTitleOffset(0.97);
   MEAN_func1235->GetYaxis()->SetTitleFont(42);
   MEAN_func1235->SetParameter(0,31.79794);
   MEAN_func1235->SetParError(0,0.7836535);
   MEAN_func1235->SetParLimits(0,0,0);
   MEAN_func1235->SetParameter(1,0.9961375);
   MEAN_func1235->SetParError(1,0.0003708877);
   MEAN_func1235->SetParLimits(1,0,0);
   MEAN_func1235->Draw("C");
   
   Double_t _fx1233[13] = {
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
   Double_t _fy1233[13] = {
   1029.163,
   1226.492,
   1427.049,
   1622.939,
   1826.581,
   2022.89,
   2523.596,
   3018.037,
   3519.526,
   4009.913,
   4513.349,
   5015.236,
   5518.653};
   Double_t _fex1233[13] = {
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
   Double_t _fey1233[13] = {
   0.8268325,
   0.9502939,
   1.068087,
   1.145301,
   1.238386,
   1.328333,
   1.616428,
   1.83078,
   2.148956,
   2.368366,
   2.545012,
   2.846478,
   3.295328};
   TGraphErrors *gre = new TGraphErrors(13,_fx1233,_fy1233,_fex1233,_fey1233);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1233 = new TH1F("Graph_Graph1233","",100,550,5950);
   Graph_Graph1233->SetMinimum(578.9748);
   Graph_Graph1233->SetMaximum(5971.31);
   Graph_Graph1233->SetDirectory(0);
   Graph_Graph1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1233->SetLineColor(ci);
   Graph_Graph1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph1233->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1233->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph1233->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1233->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph1233->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1233->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1233);
   
   
   TF1 *MEAN_func1234 = new TF1("MEAN_func","pol1",1000,5500);
   MEAN_func1234->SetBit(TF1::kNotDraw);
   MEAN_func1234->SetFillColor(19);
   MEAN_func1234->SetFillStyle(0);
   MEAN_func1234->SetLineColor(2);
   MEAN_func1234->SetLineWidth(2);
   MEAN_func1234->SetChisquare(28.3973);
   MEAN_func1234->SetNDF(11);
   MEAN_func1234->GetXaxis()->SetLabelFont(42);
   MEAN_func1234->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1234->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1234->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1234->GetXaxis()->SetTitleOffset(0.9);
   MEAN_func1234->GetXaxis()->SetTitleFont(42);
   MEAN_func1234->GetYaxis()->SetLabelFont(42);
   MEAN_func1234->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1234->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1234->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1234->GetYaxis()->SetTitleOffset(1.25);
   MEAN_func1234->GetYaxis()->SetTitleFont(42);
   MEAN_func1234->SetParameter(0,31.79794);
   MEAN_func1234->SetParError(0,0.7836535);
   MEAN_func1234->SetParLimits(0,0,0);
   MEAN_func1234->SetParameter(1,0.9961375);
   MEAN_func1234->SetParError(1,0.0003708877);
   MEAN_func1234->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(MEAN_func1234);
   gre->Draw("p");
   
   TF1 *MEAN_func1235 = new TF1("MEAN_func","pol1",0,13000);
   MEAN_func1235->SetFillColor(19);
   MEAN_func1235->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   MEAN_func1235->SetMarkerColor(ci);
   MEAN_func1235->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   MEAN_func1235->SetLineColor(ci);
   MEAN_func1235->SetLineWidth(3);
   MEAN_func1235->SetChisquare(28.3973);
   MEAN_func1235->SetNDF(11);
   MEAN_func1235->GetXaxis()->SetTitle("M_{VV} (GeV)");
   MEAN_func1235->GetXaxis()->SetRange(9,43);
   MEAN_func1235->GetXaxis()->SetNdivisions(209);
   MEAN_func1235->GetXaxis()->SetLabelFont(42);
   MEAN_func1235->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1235->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1235->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1235->GetXaxis()->SetTitleOffset(0.94);
   MEAN_func1235->GetXaxis()->SetTitleFont(42);
   MEAN_func1235->GetYaxis()->SetTitle("MEAN (GeV)");
   MEAN_func1235->GetYaxis()->SetNdivisions(504);
   MEAN_func1235->GetYaxis()->SetLabelFont(42);
   MEAN_func1235->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1235->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1235->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1235->GetYaxis()->SetTitleOffset(0.97);
   MEAN_func1235->GetYaxis()->SetTitleFont(42);
   MEAN_func1235->SetParameter(0,31.79794);
   MEAN_func1235->SetParError(0,0.7836535);
   MEAN_func1235->SetParLimits(0,0,0);
   MEAN_func1235->SetParameter(1,0.9961375);
   MEAN_func1235->SetParError(1,0.0003708877);
   MEAN_func1235->SetParLimits(1,0,0);
   MEAN_func1235->Draw("Csame");
   
   Double_t _fx1235[12] = {
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
   Double_t _fy1235[12] = {
   1033.663,
   1232.345,
   1432.607,
   1629.215,
   1834.464,
   2031.676,
   2531.134,
   3027.012,
   3528.253,
   4028.495,
   4525.778,
   5544.197};
   Double_t _fex1235[12] = {
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
   Double_t _fey1235[12] = {
   0.2790406,
   0.3056694,
   0.3398565,
   0.3713805,
   0.3913293,
   0.4217352,
   0.4975493,
   0.5843378,
   0.6502778,
   0.7281042,
   0.7868356,
   3.065754};
   gre = new TGraphErrors(12,_fx1235,_fy1235,_fex1235,_fey1235);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1235 = new TH1F("Graph_Graph1235","",100,550,5950);
   Graph_Graph1235->SetMinimum(581.9956);
   Graph_Graph1235->SetMaximum(5998.65);
   Graph_Graph1235->SetDirectory(0);
   Graph_Graph1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1235->SetLineColor(ci);
   Graph_Graph1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph1235->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1235->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph1235->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1235->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph1235->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1235->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1235);
   
   
   TF1 *MEAN_func1236 = new TF1("MEAN_func","pol1",1000,5500);
   MEAN_func1236->SetBit(TF1::kNotDraw);
   MEAN_func1236->SetFillColor(19);
   MEAN_func1236->SetFillStyle(0);
   MEAN_func1236->SetLineColor(2);
   MEAN_func1236->SetLineWidth(2);
   MEAN_func1236->SetChisquare(177.9321);
   MEAN_func1236->SetNDF(10);
   MEAN_func1236->GetXaxis()->SetLabelFont(42);
   MEAN_func1236->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1236->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1236->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1236->GetXaxis()->SetTitleOffset(0.9);
   MEAN_func1236->GetXaxis()->SetTitleFont(42);
   MEAN_func1236->GetYaxis()->SetLabelFont(42);
   MEAN_func1236->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1236->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1236->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1236->GetYaxis()->SetTitleOffset(1.25);
   MEAN_func1236->GetYaxis()->SetTitleFont(42);
   MEAN_func1236->SetParameter(0,34.97026);
   MEAN_func1236->SetParError(0,0.2824665);
   MEAN_func1236->SetParLimits(0,0,0);
   MEAN_func1236->SetParameter(1,0.9981762);
   MEAN_func1236->SetParError(1,0.0001423612);
   MEAN_func1236->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(MEAN_func1236);
   gre->Draw("p");
   
   TF1 *MEAN_func1237 = new TF1("MEAN_func","pol1",0,13000);
   MEAN_func1237->SetFillColor(19);
   MEAN_func1237->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   MEAN_func1237->SetMarkerColor(ci);
   MEAN_func1237->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   MEAN_func1237->SetLineColor(ci);
   MEAN_func1237->SetLineWidth(3);
   MEAN_func1237->SetChisquare(177.9321);
   MEAN_func1237->SetNDF(10);
   MEAN_func1237->GetXaxis()->SetLabelFont(42);
   MEAN_func1237->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1237->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1237->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1237->GetXaxis()->SetTitleOffset(0.9);
   MEAN_func1237->GetXaxis()->SetTitleFont(42);
   MEAN_func1237->GetYaxis()->SetLabelFont(42);
   MEAN_func1237->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1237->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1237->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1237->GetYaxis()->SetTitleOffset(1.25);
   MEAN_func1237->GetYaxis()->SetTitleFont(42);
   MEAN_func1237->SetParameter(0,34.97026);
   MEAN_func1237->SetParError(0,0.2824665);
   MEAN_func1237->SetParLimits(0,0,0);
   MEAN_func1237->SetParameter(1,0.9981762);
   MEAN_func1237->SetParError(1,0.0001423612);
   MEAN_func1237->SetParLimits(1,0,0);
   MEAN_func1237->Draw("Csame");
   
   Double_t _fx1237[13] = {
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
   Double_t _fy1237[13] = {
   1023.519,
   1220.601,
   1419.941,
   1611.316,
   1819.712,
   2013.212,
   2511.826,
   3001.554,
   3504.256,
   3996.171,
   4492.075,
   5001.084,
   5506.963};
   Double_t _fex1237[13] = {
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
   Double_t _fey1237[13] = {
   0.6194233,
   0.6597261,
   0.7389239,
   0.7989802,
   0.8858627,
   0.9574606,
   1.146428,
   1.298043,
   1.521968,
   1.686092,
   1.832471,
   2.022899,
   2.386257};
   gre = new TGraphErrors(13,_fx1237,_fy1237,_fex1237,_fey1237);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1237 = new TH1F("Graph_Graph1237","",100,550,5950);
   Graph_Graph1237->SetMinimum(574.2546);
   Graph_Graph1237->SetMaximum(5957.994);
   Graph_Graph1237->SetDirectory(0);
   Graph_Graph1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1237->SetLineColor(ci);
   Graph_Graph1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph1237->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1237->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph1237->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1237->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph1237->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1237->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1237);
   
   
   TF1 *MEAN_func1238 = new TF1("MEAN_func","pol1",1000,5500);
   MEAN_func1238->SetBit(TF1::kNotDraw);
   MEAN_func1238->SetFillColor(19);
   MEAN_func1238->SetFillStyle(0);
   MEAN_func1238->SetLineColor(2);
   MEAN_func1238->SetLineWidth(2);
   MEAN_func1238->SetChisquare(189.9091);
   MEAN_func1238->SetNDF(11);
   MEAN_func1238->GetXaxis()->SetLabelFont(42);
   MEAN_func1238->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1238->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1238->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1238->GetXaxis()->SetTitleOffset(0.9);
   MEAN_func1238->GetXaxis()->SetTitleFont(42);
   MEAN_func1238->GetYaxis()->SetLabelFont(42);
   MEAN_func1238->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1238->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1238->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1238->GetYaxis()->SetTitleOffset(1.25);
   MEAN_func1238->GetYaxis()->SetTitleFont(42);
   MEAN_func1238->SetParameter(0,28.40812);
   MEAN_func1238->SetParError(0,0.5628961);
   MEAN_func1238->SetParLimits(0,0,0);
   MEAN_func1238->SetParameter(1,0.9931223);
   MEAN_func1238->SetParError(1,0.0002661828);
   MEAN_func1238->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(MEAN_func1238);
   gre->Draw("p");
   
   TF1 *MEAN_func1239 = new TF1("MEAN_func","pol1",0,13000);
   MEAN_func1239->SetFillColor(19);
   MEAN_func1239->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   MEAN_func1239->SetMarkerColor(ci);
   MEAN_func1239->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   MEAN_func1239->SetLineColor(ci);
   MEAN_func1239->SetLineWidth(3);
   MEAN_func1239->SetChisquare(189.9091);
   MEAN_func1239->SetNDF(11);
   MEAN_func1239->GetXaxis()->SetLabelFont(42);
   MEAN_func1239->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1239->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1239->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1239->GetXaxis()->SetTitleOffset(0.9);
   MEAN_func1239->GetXaxis()->SetTitleFont(42);
   MEAN_func1239->GetYaxis()->SetLabelFont(42);
   MEAN_func1239->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1239->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1239->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1239->GetYaxis()->SetTitleOffset(1.25);
   MEAN_func1239->GetYaxis()->SetTitleFont(42);
   MEAN_func1239->SetParameter(0,28.40812);
   MEAN_func1239->SetParError(0,0.5628961);
   MEAN_func1239->SetParLimits(0,0,0);
   MEAN_func1239->SetParameter(1,0.9931223);
   MEAN_func1239->SetParError(1,0.0002661828);
   MEAN_func1239->SetParLimits(1,0,0);
   MEAN_func1239->Draw("Csame");
   
   Double_t _fx1239[13] = {
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
   Double_t _fy1239[13] = {
   1023.732,
   1220.516,
   1418.927,
   1611.949,
   1816.865,
   2011.379,
   2508.191,
   2998.586,
   3500.417,
   3990.993,
   4488.783,
   4995.247,
   5504.416};
   Double_t _fex1239[13] = {
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
   Double_t _fey1239[13] = {
   0.1989549,
   0.2142933,
   0.2413062,
   0.2591272,
   0.2973924,
   0.3077641,
   0.3688428,
   0.4481832,
   0.4979141,
   0.5508269,
   1.852031,
   2.035383,
   2.295636};
   gre = new TGraphErrors(13,_fx1239,_fy1239,_fex1239,_fey1239);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1239 = new TH1F("Graph_Graph1239","",100,550,5950);
   Graph_Graph1239->SetMinimum(575.2151);
   Graph_Graph1239->SetMaximum(5955.03);
   Graph_Graph1239->SetDirectory(0);
   Graph_Graph1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1239->SetLineColor(ci);
   Graph_Graph1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph1239->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1239->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph1239->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1239->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph1239->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1239->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1239);
   
   
   TF1 *MEAN_func1240 = new TF1("MEAN_func","pol1",1000,5500);
   MEAN_func1240->SetBit(TF1::kNotDraw);
   MEAN_func1240->SetFillColor(19);
   MEAN_func1240->SetFillStyle(0);
   MEAN_func1240->SetLineColor(2);
   MEAN_func1240->SetLineWidth(2);
   MEAN_func1240->SetChisquare(723.74);
   MEAN_func1240->SetNDF(11);
   MEAN_func1240->GetXaxis()->SetLabelFont(42);
   MEAN_func1240->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1240->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1240->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1240->GetXaxis()->SetTitleOffset(0.9);
   MEAN_func1240->GetXaxis()->SetTitleFont(42);
   MEAN_func1240->GetYaxis()->SetLabelFont(42);
   MEAN_func1240->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1240->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1240->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1240->GetYaxis()->SetTitleOffset(1.25);
   MEAN_func1240->GetYaxis()->SetTitleFont(42);
   MEAN_func1240->SetParameter(0,32.37603);
   MEAN_func1240->SetParError(0,0.2189256);
   MEAN_func1240->SetParLimits(0,0,0);
   MEAN_func1240->SetParameter(1,0.9900095);
   MEAN_func1240->SetParError(1,0.0001179813);
   MEAN_func1240->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(MEAN_func1240);
   gre->Draw("p");
   
   TF1 *MEAN_func1241 = new TF1("MEAN_func","pol1",0,13000);
   MEAN_func1241->SetFillColor(19);
   MEAN_func1241->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   MEAN_func1241->SetMarkerColor(ci);
   MEAN_func1241->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   MEAN_func1241->SetLineColor(ci);
   MEAN_func1241->SetLineWidth(3);
   MEAN_func1241->SetChisquare(723.74);
   MEAN_func1241->SetNDF(11);
   MEAN_func1241->GetXaxis()->SetLabelFont(42);
   MEAN_func1241->GetXaxis()->SetLabelOffset(0.007);
   MEAN_func1241->GetXaxis()->SetLabelSize(0.05);
   MEAN_func1241->GetXaxis()->SetTitleSize(0.06);
   MEAN_func1241->GetXaxis()->SetTitleOffset(0.9);
   MEAN_func1241->GetXaxis()->SetTitleFont(42);
   MEAN_func1241->GetYaxis()->SetLabelFont(42);
   MEAN_func1241->GetYaxis()->SetLabelOffset(0.007);
   MEAN_func1241->GetYaxis()->SetLabelSize(0.05);
   MEAN_func1241->GetYaxis()->SetTitleSize(0.06);
   MEAN_func1241->GetYaxis()->SetTitleOffset(1.25);
   MEAN_func1241->GetYaxis()->SetTitleFont(42);
   MEAN_func1241->SetParameter(0,32.37603);
   MEAN_func1241->SetParError(0,0.2189256);
   MEAN_func1241->SetParLimits(0,0,0);
   MEAN_func1241->SetParameter(1,0.9900095);
   MEAN_func1241->SetParError(1,0.0001179813);
   MEAN_func1241->SetParLimits(1,0,0);
   MEAN_func1241->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("MEAN_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MEAN_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MEAN_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("MEAN_func","G_{B}#rightarrow ZZ","L");

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
