void Signal_mVV_N2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:20:01 2018) by ROOT version6.02/05
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
   
   TF1 *N2_func1274 = new TF1("N2_func","pol0",0,13000);
   N2_func1274->SetFillColor(19);
   N2_func1274->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   N2_func1274->SetMarkerColor(ci);
   N2_func1274->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   N2_func1274->SetLineColor(ci);
   N2_func1274->SetLineWidth(3);
   N2_func1274->SetChisquare(1.025519e-29);
   N2_func1274->SetNDF(12);
   N2_func1274->GetXaxis()->SetTitle("M_{VV} (GeV)");
   N2_func1274->GetXaxis()->SetRange(9,43);
   N2_func1274->GetXaxis()->SetNdivisions(209);
   N2_func1274->GetXaxis()->SetLabelFont(42);
   N2_func1274->GetXaxis()->SetLabelOffset(0.007);
   N2_func1274->GetXaxis()->SetLabelSize(0.05);
   N2_func1274->GetXaxis()->SetTitleSize(0.06);
   N2_func1274->GetXaxis()->SetTitleOffset(0.94);
   N2_func1274->GetXaxis()->SetTitleFont(42);
   N2_func1274->GetYaxis()->SetTitle("N2 (GeV)");
   N2_func1274->GetYaxis()->SetNdivisions(504);
   N2_func1274->GetYaxis()->SetLabelFont(42);
   N2_func1274->GetYaxis()->SetLabelOffset(0.007);
   N2_func1274->GetYaxis()->SetLabelSize(0.05);
   N2_func1274->GetYaxis()->SetTitleSize(0.06);
   N2_func1274->GetYaxis()->SetTitleOffset(0.97);
   N2_func1274->GetYaxis()->SetTitleFont(42);
   N2_func1274->SetParameter(0,4.6012);
   N2_func1274->SetParError(0,2.56395e-16);
   N2_func1274->SetParLimits(0,0,0);
   N2_func1274->Draw("C");
   
   Double_t _fx1273[13] = {
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
   Double_t _fy1273[13] = {
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012};
   Double_t _fex1273[13] = {
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
   Double_t _fey1273[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,_fx1273,_fy1273,_fex1273,_fey1273);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1273 = new TH1F("Graph_Graph1273","",100,550,5950);
   Graph_Graph1273->SetMinimum(4.5012);
   Graph_Graph1273->SetMaximum(5.7012);
   Graph_Graph1273->SetDirectory(0);
   Graph_Graph1273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1273->SetLineColor(ci);
   Graph_Graph1273->GetXaxis()->SetLabelFont(42);
   Graph_Graph1273->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1273->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1273->GetXaxis()->SetTitleFont(42);
   Graph_Graph1273->GetYaxis()->SetLabelFont(42);
   Graph_Graph1273->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1273->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1273->GetYaxis()->SetTitleFont(42);
   Graph_Graph1273->GetZaxis()->SetLabelFont(42);
   Graph_Graph1273->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1273->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1273);
   
   
   TF1 *N2_func1274 = new TF1("N2_func","pol0",1000,5500);
   N2_func1274->SetBit(TF1::kNotDraw);
   N2_func1274->SetFillColor(19);
   N2_func1274->SetFillStyle(0);
   N2_func1274->SetLineColor(2);
   N2_func1274->SetLineWidth(2);
   N2_func1274->SetChisquare(1.025519e-29);
   N2_func1274->SetNDF(12);
   N2_func1274->GetXaxis()->SetLabelFont(42);
   N2_func1274->GetXaxis()->SetLabelOffset(0.007);
   N2_func1274->GetXaxis()->SetLabelSize(0.05);
   N2_func1274->GetXaxis()->SetTitleSize(0.06);
   N2_func1274->GetXaxis()->SetTitleOffset(0.9);
   N2_func1274->GetXaxis()->SetTitleFont(42);
   N2_func1274->GetYaxis()->SetLabelFont(42);
   N2_func1274->GetYaxis()->SetLabelOffset(0.007);
   N2_func1274->GetYaxis()->SetLabelSize(0.05);
   N2_func1274->GetYaxis()->SetTitleSize(0.06);
   N2_func1274->GetYaxis()->SetTitleOffset(1.25);
   N2_func1274->GetYaxis()->SetTitleFont(42);
   N2_func1274->SetParameter(0,4.6012);
   N2_func1274->SetParError(0,2.56395e-16);
   N2_func1274->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(N2_func1274);
   gre->Draw("p");
   
   TF1 *N2_func1275 = new TF1("N2_func","pol0",0,13000);
   N2_func1275->SetFillColor(19);
   N2_func1275->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   N2_func1275->SetMarkerColor(ci);
   N2_func1275->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   N2_func1275->SetLineColor(ci);
   N2_func1275->SetLineWidth(3);
   N2_func1275->SetChisquare(1.025519e-29);
   N2_func1275->SetNDF(12);
   N2_func1275->GetXaxis()->SetTitle("M_{VV} (GeV)");
   N2_func1275->GetXaxis()->SetRange(9,43);
   N2_func1275->GetXaxis()->SetNdivisions(209);
   N2_func1275->GetXaxis()->SetLabelFont(42);
   N2_func1275->GetXaxis()->SetLabelOffset(0.007);
   N2_func1275->GetXaxis()->SetLabelSize(0.05);
   N2_func1275->GetXaxis()->SetTitleSize(0.06);
   N2_func1275->GetXaxis()->SetTitleOffset(0.94);
   N2_func1275->GetXaxis()->SetTitleFont(42);
   N2_func1275->GetYaxis()->SetTitle("N2 (GeV)");
   N2_func1275->GetYaxis()->SetNdivisions(504);
   N2_func1275->GetYaxis()->SetLabelFont(42);
   N2_func1275->GetYaxis()->SetLabelOffset(0.007);
   N2_func1275->GetYaxis()->SetLabelSize(0.05);
   N2_func1275->GetYaxis()->SetTitleSize(0.06);
   N2_func1275->GetYaxis()->SetTitleOffset(0.97);
   N2_func1275->GetYaxis()->SetTitleFont(42);
   N2_func1275->SetParameter(0,4.6012);
   N2_func1275->SetParError(0,2.56395e-16);
   N2_func1275->SetParLimits(0,0,0);
   N2_func1275->Draw("Csame");
   
   Double_t _fx1275[12] = {
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
   Double_t _fy1275[12] = {
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012};
   Double_t _fex1275[12] = {
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
   Double_t _fey1275[12] = {
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
   gre = new TGraphErrors(12,_fx1275,_fy1275,_fex1275,_fey1275);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1275 = new TH1F("Graph_Graph1275","",100,550,5950);
   Graph_Graph1275->SetMinimum(4.5012);
   Graph_Graph1275->SetMaximum(5.7012);
   Graph_Graph1275->SetDirectory(0);
   Graph_Graph1275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1275->SetLineColor(ci);
   Graph_Graph1275->GetXaxis()->SetLabelFont(42);
   Graph_Graph1275->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1275->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1275->GetXaxis()->SetTitleFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1275->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1275->GetYaxis()->SetTitleFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1275->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1275);
   
   
   TF1 *N2_func1276 = new TF1("N2_func","pol0",1000,5500);
   N2_func1276->SetBit(TF1::kNotDraw);
   N2_func1276->SetFillColor(19);
   N2_func1276->SetFillStyle(0);
   N2_func1276->SetLineColor(2);
   N2_func1276->SetLineWidth(2);
   N2_func1276->SetChisquare(9.466331e-30);
   N2_func1276->SetNDF(11);
   N2_func1276->GetXaxis()->SetLabelFont(42);
   N2_func1276->GetXaxis()->SetLabelOffset(0.007);
   N2_func1276->GetXaxis()->SetLabelSize(0.05);
   N2_func1276->GetXaxis()->SetTitleSize(0.06);
   N2_func1276->GetXaxis()->SetTitleOffset(0.9);
   N2_func1276->GetXaxis()->SetTitleFont(42);
   N2_func1276->GetYaxis()->SetLabelFont(42);
   N2_func1276->GetYaxis()->SetLabelOffset(0.007);
   N2_func1276->GetYaxis()->SetLabelSize(0.05);
   N2_func1276->GetYaxis()->SetTitleSize(0.06);
   N2_func1276->GetYaxis()->SetTitleOffset(1.25);
   N2_func1276->GetYaxis()->SetTitleFont(42);
   N2_func1276->SetParameter(0,4.6012);
   N2_func1276->SetParError(0,2.677959e-16);
   N2_func1276->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(N2_func1276);
   gre->Draw("p");
   
   TF1 *N2_func1277 = new TF1("N2_func","pol0",0,13000);
   N2_func1277->SetFillColor(19);
   N2_func1277->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   N2_func1277->SetMarkerColor(ci);
   N2_func1277->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   N2_func1277->SetLineColor(ci);
   N2_func1277->SetLineWidth(3);
   N2_func1277->SetChisquare(9.466331e-30);
   N2_func1277->SetNDF(11);
   N2_func1277->GetXaxis()->SetLabelFont(42);
   N2_func1277->GetXaxis()->SetLabelOffset(0.007);
   N2_func1277->GetXaxis()->SetLabelSize(0.05);
   N2_func1277->GetXaxis()->SetTitleSize(0.06);
   N2_func1277->GetXaxis()->SetTitleOffset(0.9);
   N2_func1277->GetXaxis()->SetTitleFont(42);
   N2_func1277->GetYaxis()->SetLabelFont(42);
   N2_func1277->GetYaxis()->SetLabelOffset(0.007);
   N2_func1277->GetYaxis()->SetLabelSize(0.05);
   N2_func1277->GetYaxis()->SetTitleSize(0.06);
   N2_func1277->GetYaxis()->SetTitleOffset(1.25);
   N2_func1277->GetYaxis()->SetTitleFont(42);
   N2_func1277->SetParameter(0,4.6012);
   N2_func1277->SetParError(0,2.677959e-16);
   N2_func1277->SetParLimits(0,0,0);
   N2_func1277->Draw("Csame");
   
   Double_t _fx1277[13] = {
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
   Double_t _fy1277[13] = {
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012};
   Double_t _fex1277[13] = {
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
   Double_t _fey1277[13] = {
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
   gre = new TGraphErrors(13,_fx1277,_fy1277,_fex1277,_fey1277);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1277 = new TH1F("Graph_Graph1277","",100,550,5950);
   Graph_Graph1277->SetMinimum(4.5012);
   Graph_Graph1277->SetMaximum(5.7012);
   Graph_Graph1277->SetDirectory(0);
   Graph_Graph1277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1277->SetLineColor(ci);
   Graph_Graph1277->GetXaxis()->SetLabelFont(42);
   Graph_Graph1277->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1277->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1277->GetXaxis()->SetTitleFont(42);
   Graph_Graph1277->GetYaxis()->SetLabelFont(42);
   Graph_Graph1277->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1277->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1277->GetYaxis()->SetTitleFont(42);
   Graph_Graph1277->GetZaxis()->SetLabelFont(42);
   Graph_Graph1277->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1277->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1277);
   
   
   TF1 *N2_func1278 = new TF1("N2_func","pol0",1000,5500);
   N2_func1278->SetBit(TF1::kNotDraw);
   N2_func1278->SetFillColor(19);
   N2_func1278->SetFillStyle(0);
   N2_func1278->SetLineColor(2);
   N2_func1278->SetLineWidth(2);
   N2_func1278->SetChisquare(1.025519e-29);
   N2_func1278->SetNDF(12);
   N2_func1278->GetXaxis()->SetLabelFont(42);
   N2_func1278->GetXaxis()->SetLabelOffset(0.007);
   N2_func1278->GetXaxis()->SetLabelSize(0.05);
   N2_func1278->GetXaxis()->SetTitleSize(0.06);
   N2_func1278->GetXaxis()->SetTitleOffset(0.9);
   N2_func1278->GetXaxis()->SetTitleFont(42);
   N2_func1278->GetYaxis()->SetLabelFont(42);
   N2_func1278->GetYaxis()->SetLabelOffset(0.007);
   N2_func1278->GetYaxis()->SetLabelSize(0.05);
   N2_func1278->GetYaxis()->SetTitleSize(0.06);
   N2_func1278->GetYaxis()->SetTitleOffset(1.25);
   N2_func1278->GetYaxis()->SetTitleFont(42);
   N2_func1278->SetParameter(0,4.6012);
   N2_func1278->SetParError(0,2.56395e-16);
   N2_func1278->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(N2_func1278);
   gre->Draw("p");
   
   TF1 *N2_func1279 = new TF1("N2_func","pol0",0,13000);
   N2_func1279->SetFillColor(19);
   N2_func1279->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   N2_func1279->SetMarkerColor(ci);
   N2_func1279->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   N2_func1279->SetLineColor(ci);
   N2_func1279->SetLineWidth(3);
   N2_func1279->SetChisquare(1.025519e-29);
   N2_func1279->SetNDF(12);
   N2_func1279->GetXaxis()->SetLabelFont(42);
   N2_func1279->GetXaxis()->SetLabelOffset(0.007);
   N2_func1279->GetXaxis()->SetLabelSize(0.05);
   N2_func1279->GetXaxis()->SetTitleSize(0.06);
   N2_func1279->GetXaxis()->SetTitleOffset(0.9);
   N2_func1279->GetXaxis()->SetTitleFont(42);
   N2_func1279->GetYaxis()->SetLabelFont(42);
   N2_func1279->GetYaxis()->SetLabelOffset(0.007);
   N2_func1279->GetYaxis()->SetLabelSize(0.05);
   N2_func1279->GetYaxis()->SetTitleSize(0.06);
   N2_func1279->GetYaxis()->SetTitleOffset(1.25);
   N2_func1279->GetYaxis()->SetTitleFont(42);
   N2_func1279->SetParameter(0,4.6012);
   N2_func1279->SetParError(0,2.56395e-16);
   N2_func1279->SetParLimits(0,0,0);
   N2_func1279->Draw("Csame");
   
   Double_t _fx1279[13] = {
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
   Double_t _fy1279[13] = {
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012,
   4.6012};
   Double_t _fex1279[13] = {
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
   Double_t _fey1279[13] = {
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
   gre = new TGraphErrors(13,_fx1279,_fy1279,_fex1279,_fey1279);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1279 = new TH1F("Graph_Graph1279","",100,550,5950);
   Graph_Graph1279->SetMinimum(4.5012);
   Graph_Graph1279->SetMaximum(5.7012);
   Graph_Graph1279->SetDirectory(0);
   Graph_Graph1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1279->SetLineColor(ci);
   Graph_Graph1279->GetXaxis()->SetLabelFont(42);
   Graph_Graph1279->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1279->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1279->GetXaxis()->SetTitleFont(42);
   Graph_Graph1279->GetYaxis()->SetLabelFont(42);
   Graph_Graph1279->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1279->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1279->GetYaxis()->SetTitleFont(42);
   Graph_Graph1279->GetZaxis()->SetLabelFont(42);
   Graph_Graph1279->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1279->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1279);
   
   
   TF1 *N2_func1280 = new TF1("N2_func","pol0",1000,5500);
   N2_func1280->SetBit(TF1::kNotDraw);
   N2_func1280->SetFillColor(19);
   N2_func1280->SetFillStyle(0);
   N2_func1280->SetLineColor(2);
   N2_func1280->SetLineWidth(2);
   N2_func1280->SetChisquare(1.025519e-29);
   N2_func1280->SetNDF(12);
   N2_func1280->GetXaxis()->SetLabelFont(42);
   N2_func1280->GetXaxis()->SetLabelOffset(0.007);
   N2_func1280->GetXaxis()->SetLabelSize(0.05);
   N2_func1280->GetXaxis()->SetTitleSize(0.06);
   N2_func1280->GetXaxis()->SetTitleOffset(0.9);
   N2_func1280->GetXaxis()->SetTitleFont(42);
   N2_func1280->GetYaxis()->SetLabelFont(42);
   N2_func1280->GetYaxis()->SetLabelOffset(0.007);
   N2_func1280->GetYaxis()->SetLabelSize(0.05);
   N2_func1280->GetYaxis()->SetTitleSize(0.06);
   N2_func1280->GetYaxis()->SetTitleOffset(1.25);
   N2_func1280->GetYaxis()->SetTitleFont(42);
   N2_func1280->SetParameter(0,4.6012);
   N2_func1280->SetParError(0,2.56395e-16);
   N2_func1280->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(N2_func1280);
   gre->Draw("p");
   
   TF1 *N2_func1281 = new TF1("N2_func","pol0",0,13000);
   N2_func1281->SetFillColor(19);
   N2_func1281->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   N2_func1281->SetMarkerColor(ci);
   N2_func1281->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   N2_func1281->SetLineColor(ci);
   N2_func1281->SetLineWidth(3);
   N2_func1281->SetChisquare(1.025519e-29);
   N2_func1281->SetNDF(12);
   N2_func1281->GetXaxis()->SetLabelFont(42);
   N2_func1281->GetXaxis()->SetLabelOffset(0.007);
   N2_func1281->GetXaxis()->SetLabelSize(0.05);
   N2_func1281->GetXaxis()->SetTitleSize(0.06);
   N2_func1281->GetXaxis()->SetTitleOffset(0.9);
   N2_func1281->GetXaxis()->SetTitleFont(42);
   N2_func1281->GetYaxis()->SetLabelFont(42);
   N2_func1281->GetYaxis()->SetLabelOffset(0.007);
   N2_func1281->GetYaxis()->SetLabelSize(0.05);
   N2_func1281->GetYaxis()->SetTitleSize(0.06);
   N2_func1281->GetYaxis()->SetTitleOffset(1.25);
   N2_func1281->GetYaxis()->SetTitleFont(42);
   N2_func1281->SetParameter(0,4.6012);
   N2_func1281->SetParError(0,2.56395e-16);
   N2_func1281->SetParLimits(0,0,0);
   N2_func1281->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("N2_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("N2_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("N2_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("N2_func","G_{B}#rightarrow ZZ","L");

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
