void Signal_mjetl1_sigma()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:08:59 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(445.6571,-3.71134,5728.514,22.06186);
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
   
   Double_t _fx1019[12] = {
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
   Double_t _fy1019[12] = {
   6.80387,
   6.46473,
   6.458748,
   6.359319,
   6.671294,
   6.640829,
   7.407476,
   7.4205,
   7.885842,
   7.932198,
   7.997597,
   8.044953};
   Double_t _fex1019[12] = {
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
   Double_t _fey1019[12] = {
   0.2663786,
   0.2398532,
   0.2067345,
   0.1988701,
   0.1814792,
   0.2268976,
   0.1854764,
   0.2485913,
   0.1848551,
   0.2866706,
   0.2174173,
   0.2080584};
   TGraphErrors *gre = new TGraphErrors(12,_fx1019,_fy1019,_fex1019,_fey1019);
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
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,770,5930);
   Graph_Graph1019->SetMinimum(0);
   Graph_Graph1019->SetMaximum(20);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1019->GetXaxis()->SetRange(7,92);
   Graph_Graph1019->GetXaxis()->SetNdivisions(209);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("sigma (GeV)");
   Graph_Graph1019->GetYaxis()->SetNdivisions(504);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   
   TF1 *pol41020 = new TF1("pol4","pol4",1200,5500);
   pol41020->SetFillColor(19);
   pol41020->SetFillStyle(0);
   pol41020->SetLineColor(2);
   pol41020->SetLineWidth(2);
   pol41020->SetChisquare(3.278455);
   pol41020->SetNDF(7);
   pol41020->GetXaxis()->SetLabelFont(42);
   pol41020->GetXaxis()->SetLabelOffset(0.007);
   pol41020->GetXaxis()->SetLabelSize(0.05);
   pol41020->GetXaxis()->SetTitleSize(0.06);
   pol41020->GetXaxis()->SetTitleOffset(0.9);
   pol41020->GetXaxis()->SetTitleFont(42);
   pol41020->GetYaxis()->SetLabelFont(42);
   pol41020->GetYaxis()->SetLabelOffset(0.007);
   pol41020->GetYaxis()->SetLabelSize(0.05);
   pol41020->GetYaxis()->SetTitleSize(0.06);
   pol41020->GetYaxis()->SetTitleOffset(1.25);
   pol41020->GetYaxis()->SetTitleFont(42);
   pol41020->SetParameter(0,11.2996);
   pol41020->SetParError(0,2.612864);
   pol41020->SetParLimits(0,0,0);
   pol41020->SetParameter(1,-0.007225023);
   pol41020->SetParError(1,0.003839887);
   pol41020->SetParLimits(1,0,0);
   pol41020->SetParameter(2,3.601243e-06);
   pol41020->SetParError(2,1.962874e-06);
   pol41020->SetParLimits(2,0,0);
   pol41020->SetParameter(3,-6.816644e-10);
   pol41020->SetParError(3,4.163398e-10);
   pol41020->SetParLimits(3,0,0);
   pol41020->SetParameter(4,4.476784e-14);
   pol41020->SetParError(4,3.11668e-14);
   pol41020->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41020);
   gre->Draw("ap");
   
   Double_t _fx1021[12] = {
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
   Double_t _fy1021[12] = {
   7.509898,
   7.022251,
   7.052809,
   7.184754,
   6.996232,
   7.515434,
   7.574389,
   7.867746,
   8.79126,
   9.314602,
   9.821728,
   9.780829};
   Double_t _fex1021[12] = {
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
   Double_t _fey1021[12] = {
   0.1661468,
   0.1295274,
   0.1251865,
   0.132783,
   0.2640657,
   0.1452229,
   0.1490538,
   0.1669127,
   0.1348645,
   0.1611814,
   0.170834,
   0.2311156};
   gre = new TGraphErrors(12,_fx1021,_fy1021,_fex1021,_fey1021);
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
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,770,5930);
   Graph_Graph1021->SetMinimum(6.404188);
   Graph_Graph1021->SetMaximum(10.33992);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   
   TF1 *pol41022 = new TF1("pol4","pol4",1200,5500);
   pol41022->SetFillColor(19);
   pol41022->SetFillStyle(0);
   pol41022->SetLineColor(2);
   pol41022->SetLineWidth(2);
   pol41022->SetChisquare(10.64186);
   pol41022->SetNDF(7);
   pol41022->GetXaxis()->SetLabelFont(42);
   pol41022->GetXaxis()->SetLabelOffset(0.007);
   pol41022->GetXaxis()->SetLabelSize(0.05);
   pol41022->GetXaxis()->SetTitleSize(0.06);
   pol41022->GetXaxis()->SetTitleOffset(0.9);
   pol41022->GetXaxis()->SetTitleFont(42);
   pol41022->GetYaxis()->SetLabelFont(42);
   pol41022->GetYaxis()->SetLabelOffset(0.007);
   pol41022->GetYaxis()->SetLabelSize(0.05);
   pol41022->GetYaxis()->SetTitleSize(0.06);
   pol41022->GetYaxis()->SetTitleOffset(1.25);
   pol41022->GetYaxis()->SetTitleFont(42);
   pol41022->SetParameter(0,7.804077);
   pol41022->SetParError(0,1.886878);
   pol41022->SetParLimits(0,0,0);
   pol41022->SetParameter(1,-0.0002399097);
   pol41022->SetParError(1,0.002820642);
   pol41022->SetParLimits(1,0,0);
   pol41022->SetParameter(2,-4.205147e-07);
   pol41022->SetParError(2,1.456891e-06);
   pol41022->SetParLimits(2,0,0);
   pol41022->SetParameter(3,2.35505e-10);
   pol41022->SetParError(3,3.117446e-10);
   pol41022->SetParLimits(3,0,0);
   pol41022->SetParameter(4,-2.524088e-14);
   pol41022->SetParError(4,2.356381e-14);
   pol41022->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41022);
   gre->Draw("p");
   
   Double_t _fx1023[12] = {
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
   Double_t _fy1023[12] = {
   6.80387,
   6.46473,
   6.458748,
   6.359319,
   6.671294,
   6.640829,
   7.407476,
   7.4205,
   7.885842,
   7.932198,
   7.997597,
   8.044953};
   Double_t _fex1023[12] = {
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
   Double_t _fey1023[12] = {
   0.2663786,
   0.2398532,
   0.2067345,
   0.1988701,
   0.1814792,
   0.2268976,
   0.1854764,
   0.2485913,
   0.1848551,
   0.2866706,
   0.2174173,
   0.2080584};
   gre = new TGraphErrors(12,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10191023 = new TH1F("Graph_Graph_Graph10191023","",100,770,5930);
   Graph_Graph_Graph10191023->SetMinimum(0);
   Graph_Graph_Graph10191023->SetMaximum(20);
   Graph_Graph_Graph10191023->SetDirectory(0);
   Graph_Graph_Graph10191023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10191023->SetLineColor(ci);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph10191023->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph10191023->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10191023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10191023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitle("sigma (GeV)");
   Graph_Graph_Graph10191023->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10191023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10191023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10191023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10191023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10191023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10191023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10191023);
   
   
   TF1 *pol41024 = new TF1("pol4","pol4",1200,5500);
   pol41024->SetFillColor(19);
   pol41024->SetFillStyle(0);
   pol41024->SetLineColor(2);
   pol41024->SetLineWidth(2);
   pol41024->SetChisquare(3.278455);
   pol41024->SetNDF(7);
   pol41024->GetXaxis()->SetLabelFont(42);
   pol41024->GetXaxis()->SetLabelOffset(0.007);
   pol41024->GetXaxis()->SetLabelSize(0.05);
   pol41024->GetXaxis()->SetTitleSize(0.06);
   pol41024->GetXaxis()->SetTitleOffset(0.9);
   pol41024->GetXaxis()->SetTitleFont(42);
   pol41024->GetYaxis()->SetLabelFont(42);
   pol41024->GetYaxis()->SetLabelOffset(0.007);
   pol41024->GetYaxis()->SetLabelSize(0.05);
   pol41024->GetYaxis()->SetTitleSize(0.06);
   pol41024->GetYaxis()->SetTitleOffset(1.25);
   pol41024->GetYaxis()->SetTitleFont(42);
   pol41024->SetParameter(0,11.2996);
   pol41024->SetParError(0,2.612864);
   pol41024->SetParLimits(0,0,0);
   pol41024->SetParameter(1,-0.007225023);
   pol41024->SetParError(1,0.003839887);
   pol41024->SetParLimits(1,0,0);
   pol41024->SetParameter(2,3.601243e-06);
   pol41024->SetParError(2,1.962874e-06);
   pol41024->SetParLimits(2,0,0);
   pol41024->SetParameter(3,-6.816644e-10);
   pol41024->SetParError(3,4.163398e-10);
   pol41024->SetParLimits(3,0,0);
   pol41024->SetParameter(4,4.476784e-14);
   pol41024->SetParError(4,3.11668e-14);
   pol41024->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41024);
   gre->Draw("p");
   
   TF1 *pol41025 = new TF1("pol4","pol4",0,13000);
   pol41025->SetBit(TF1::kNotDraw);
   pol41025->SetFillColor(19);
   pol41025->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41025->SetMarkerColor(ci);
   pol41025->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41025->SetLineColor(ci);
   pol41025->SetLineWidth(3);
   pol41025->SetChisquare(3.278455);
   pol41025->SetNDF(7);
   pol41025->GetXaxis()->SetLabelFont(42);
   pol41025->GetXaxis()->SetLabelOffset(0.007);
   pol41025->GetXaxis()->SetLabelSize(0.05);
   pol41025->GetXaxis()->SetTitleSize(0.06);
   pol41025->GetXaxis()->SetTitleOffset(0.9);
   pol41025->GetXaxis()->SetTitleFont(42);
   pol41025->GetYaxis()->SetLabelFont(42);
   pol41025->GetYaxis()->SetLabelOffset(0.007);
   pol41025->GetYaxis()->SetLabelSize(0.05);
   pol41025->GetYaxis()->SetTitleSize(0.06);
   pol41025->GetYaxis()->SetTitleOffset(1.25);
   pol41025->GetYaxis()->SetTitleFont(42);
   pol41025->SetParameter(0,11.2996);
   pol41025->SetParError(0,2.612864);
   pol41025->SetParLimits(0,0,0);
   pol41025->SetParameter(1,-0.007225023);
   pol41025->SetParError(1,0.003839887);
   pol41025->SetParLimits(1,0,0);
   pol41025->SetParameter(2,3.601243e-06);
   pol41025->SetParError(2,1.962874e-06);
   pol41025->SetParLimits(2,0,0);
   pol41025->SetParameter(3,-6.816644e-10);
   pol41025->SetParError(3,4.163398e-10);
   pol41025->SetParLimits(3,0,0);
   pol41025->SetParameter(4,4.476784e-14);
   pol41025->SetParError(4,3.11668e-14);
   pol41025->SetParLimits(4,0,0);
   pol41025->Draw("Csame");
   
   TF1 *pol41026 = new TF1("pol4","pol4",0,13000);
   pol41026->SetBit(TF1::kNotDraw);
   pol41026->SetFillColor(19);
   pol41026->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41026->SetMarkerColor(ci);
   pol41026->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol41026->SetLineColor(ci);
   pol41026->SetLineWidth(3);
   pol41026->SetLineStyle(9);
   pol41026->SetChisquare(10.64186);
   pol41026->SetNDF(7);
   pol41026->GetXaxis()->SetLabelFont(42);
   pol41026->GetXaxis()->SetLabelOffset(0.007);
   pol41026->GetXaxis()->SetLabelSize(0.05);
   pol41026->GetXaxis()->SetTitleSize(0.06);
   pol41026->GetXaxis()->SetTitleOffset(0.9);
   pol41026->GetXaxis()->SetTitleFont(42);
   pol41026->GetYaxis()->SetLabelFont(42);
   pol41026->GetYaxis()->SetLabelOffset(0.007);
   pol41026->GetYaxis()->SetLabelSize(0.05);
   pol41026->GetYaxis()->SetTitleSize(0.06);
   pol41026->GetYaxis()->SetTitleOffset(1.25);
   pol41026->GetYaxis()->SetTitleFont(42);
   pol41026->SetParameter(0,7.804077);
   pol41026->SetParError(0,1.886878);
   pol41026->SetParLimits(0,0,0);
   pol41026->SetParameter(1,-0.0002399097);
   pol41026->SetParError(1,0.002820642);
   pol41026->SetParLimits(1,0,0);
   pol41026->SetParameter(2,-4.205147e-07);
   pol41026->SetParError(2,1.456891e-06);
   pol41026->SetParLimits(2,0,0);
   pol41026->SetParameter(3,2.35505e-10);
   pol41026->SetParError(3,3.117446e-10);
   pol41026->SetParLimits(3,0,0);
   pol41026->SetParameter(4,-2.524088e-14);
   pol41026->SetParError(4,2.356381e-14);
   pol41026->SetParLimits(4,0,0);
   pol41026->Draw("Csame");
   
   Double_t _fx1025[12] = {
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
   Double_t _fy1025[12] = {
   6.632672,
   6.834318,
   6.792025,
   6.791675,
   6.626827,
   7.051678,
   7.66955,
   7.80463,
   8.288935,
   8.599349,
   8.974658,
   9.92737};
   Double_t _fex1025[12] = {
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
   Double_t _fey1025[12] = {
   0.1348801,
   0.1486604,
   0.1449105,
   0.1596041,
   0.127061,
   0.1093037,
   0.1349756,
   0.1423253,
   0.1694509,
   0.1845829,
   0.1915296,
   0.1612713};
   gre = new TGraphErrors(12,_fx1025,_fy1025,_fex1025,_fey1025);
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
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,770,5930);
   Graph_Graph1025->SetMinimum(6.138707);
   Graph_Graph1025->SetMaximum(10.44773);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   
   TF1 *pol41026 = new TF1("pol4","pol4",1200,5500);
   pol41026->SetFillColor(19);
   pol41026->SetFillStyle(0);
   pol41026->SetLineColor(2);
   pol41026->SetLineWidth(2);
   pol41026->SetChisquare(7.418919);
   pol41026->SetNDF(7);
   pol41026->GetXaxis()->SetLabelFont(42);
   pol41026->GetXaxis()->SetLabelOffset(0.007);
   pol41026->GetXaxis()->SetLabelSize(0.05);
   pol41026->GetXaxis()->SetTitleSize(0.06);
   pol41026->GetXaxis()->SetTitleOffset(0.9);
   pol41026->GetXaxis()->SetTitleFont(42);
   pol41026->GetYaxis()->SetLabelFont(42);
   pol41026->GetYaxis()->SetLabelOffset(0.007);
   pol41026->GetYaxis()->SetLabelSize(0.05);
   pol41026->GetYaxis()->SetTitleSize(0.06);
   pol41026->GetYaxis()->SetTitleOffset(1.25);
   pol41026->GetYaxis()->SetTitleFont(42);
   pol41026->SetParameter(0,9.910059);
   pol41026->SetParError(0,1.654904);
   pol41026->SetParLimits(0,0,0);
   pol41026->SetParameter(1,-0.005284164);
   pol41026->SetParError(1,0.002517058);
   pol41026->SetParLimits(1,0,0);
   pol41026->SetParameter(2,2.857796e-06);
   pol41026->SetParError(2,1.318666e-06);
   pol41026->SetParLimits(2,0,0);
   pol41026->SetParameter(3,-5.85415e-10);
   pol41026->SetParError(3,2.847492e-10);
   pol41026->SetParLimits(3,0,0);
   pol41026->SetParameter(4,4.371181e-14);
   pol41026->SetParError(4,2.160308e-14);
   pol41026->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41026);
   gre->Draw("p");
   
   Double_t _fx1027[12] = {
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
   Double_t _fy1027[12] = {
   5.971397,
   6.771843,
   6.363557,
   6.078153,
   6.685225,
   6.2833,
   6.639026,
   6.37341,
   6.563733,
   7.219644,
   7.378853,
   7.711426};
   Double_t _fex1027[12] = {
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
   Double_t _fey1027[12] = {
   0.26848,
   0.2899417,
   0.2758406,
   0.2209479,
   0.2887576,
   0.1975271,
   0.2320758,
   0.1822408,
   0.1905183,
   0.2326117,
   0.1746648,
   0.1922095};
   gre = new TGraphErrors(12,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,770,5930);
   Graph_Graph1027->SetMinimum(5.482845);
   Graph_Graph1027->SetMaximum(8.123707);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   
   TF1 *pol41028 = new TF1("pol4","pol4",1200,5500);
   pol41028->SetFillColor(19);
   pol41028->SetFillStyle(0);
   pol41028->SetLineColor(2);
   pol41028->SetLineWidth(2);
   pol41028->SetChisquare(9.265159);
   pol41028->SetNDF(7);
   pol41028->GetXaxis()->SetLabelFont(42);
   pol41028->GetXaxis()->SetLabelOffset(0.007);
   pol41028->GetXaxis()->SetLabelSize(0.05);
   pol41028->GetXaxis()->SetTitleSize(0.06);
   pol41028->GetXaxis()->SetTitleOffset(0.9);
   pol41028->GetXaxis()->SetTitleFont(42);
   pol41028->GetYaxis()->SetLabelFont(42);
   pol41028->GetYaxis()->SetLabelOffset(0.007);
   pol41028->GetYaxis()->SetLabelSize(0.05);
   pol41028->GetYaxis()->SetTitleSize(0.06);
   pol41028->GetYaxis()->SetTitleOffset(1.25);
   pol41028->GetYaxis()->SetTitleFont(42);
   pol41028->SetParameter(0,3.224562);
   pol41028->SetParError(0,2.673013);
   pol41028->SetParLimits(0,0,0);
   pol41028->SetParameter(1,0.004650736);
   pol41028->SetParError(1,0.00389654);
   pol41028->SetParLimits(1,0,0);
   pol41028->SetParameter(2,-2.39756e-06);
   pol41028->SetParError(2,1.961016e-06);
   pol41028->SetParLimits(2,0,0);
   pol41028->SetParameter(3,5.055651e-10);
   pol41028->SetParError(3,4.093489e-10);
   pol41028->SetParLimits(3,0,0);
   pol41028->SetParameter(4,-3.571508e-14);
   pol41028->SetParError(4,3.023123e-14);
   pol41028->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41028);
   gre->Draw("p");
   
   TF1 *pol41029 = new TF1("pol4","pol4",0,13000);
   pol41029->SetBit(TF1::kNotDraw);
   pol41029->SetFillColor(19);
   pol41029->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41029->SetMarkerColor(ci);
   pol41029->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol41029->SetLineColor(ci);
   pol41029->SetLineWidth(3);
   pol41029->SetChisquare(9.265159);
   pol41029->SetNDF(7);
   pol41029->GetXaxis()->SetLabelFont(42);
   pol41029->GetXaxis()->SetLabelOffset(0.007);
   pol41029->GetXaxis()->SetLabelSize(0.05);
   pol41029->GetXaxis()->SetTitleSize(0.06);
   pol41029->GetXaxis()->SetTitleOffset(0.9);
   pol41029->GetXaxis()->SetTitleFont(42);
   pol41029->GetYaxis()->SetLabelFont(42);
   pol41029->GetYaxis()->SetLabelOffset(0.007);
   pol41029->GetYaxis()->SetLabelSize(0.05);
   pol41029->GetYaxis()->SetTitleSize(0.06);
   pol41029->GetYaxis()->SetTitleOffset(1.25);
   pol41029->GetYaxis()->SetTitleFont(42);
   pol41029->SetParameter(0,3.224562);
   pol41029->SetParError(0,2.673013);
   pol41029->SetParLimits(0,0,0);
   pol41029->SetParameter(1,0.004650736);
   pol41029->SetParError(1,0.00389654);
   pol41029->SetParLimits(1,0,0);
   pol41029->SetParameter(2,-2.39756e-06);
   pol41029->SetParError(2,1.961016e-06);
   pol41029->SetParLimits(2,0,0);
   pol41029->SetParameter(3,5.055651e-10);
   pol41029->SetParError(3,4.093489e-10);
   pol41029->SetParLimits(3,0,0);
   pol41029->SetParameter(4,-3.571508e-14);
   pol41029->SetParError(4,3.023123e-14);
   pol41029->SetParLimits(4,0,0);
   pol41029->Draw("Csame");
   
   TF1 *pol41030 = new TF1("pol4","pol4",0,13000);
   pol41030->SetBit(TF1::kNotDraw);
   pol41030->SetFillColor(19);
   pol41030->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41030->SetMarkerColor(ci);
   pol41030->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol41030->SetLineColor(ci);
   pol41030->SetLineWidth(3);
   pol41030->SetLineStyle(9);
   pol41030->SetChisquare(7.418919);
   pol41030->SetNDF(7);
   pol41030->GetXaxis()->SetLabelFont(42);
   pol41030->GetXaxis()->SetLabelOffset(0.007);
   pol41030->GetXaxis()->SetLabelSize(0.05);
   pol41030->GetXaxis()->SetTitleSize(0.06);
   pol41030->GetXaxis()->SetTitleOffset(0.9);
   pol41030->GetXaxis()->SetTitleFont(42);
   pol41030->GetYaxis()->SetLabelFont(42);
   pol41030->GetYaxis()->SetLabelOffset(0.007);
   pol41030->GetYaxis()->SetLabelSize(0.05);
   pol41030->GetYaxis()->SetTitleSize(0.06);
   pol41030->GetYaxis()->SetTitleOffset(1.25);
   pol41030->GetYaxis()->SetTitleFont(42);
   pol41030->SetParameter(0,9.910059);
   pol41030->SetParError(0,1.654904);
   pol41030->SetParLimits(0,0,0);
   pol41030->SetParameter(1,-0.005284164);
   pol41030->SetParError(1,0.002517058);
   pol41030->SetParLimits(1,0,0);
   pol41030->SetParameter(2,2.857796e-06);
   pol41030->SetParError(2,1.318666e-06);
   pol41030->SetParLimits(2,0,0);
   pol41030->SetParameter(3,-5.85415e-10);
   pol41030->SetParError(3,2.847492e-10);
   pol41030->SetParLimits(3,0,0);
   pol41030->SetParameter(4,4.371181e-14);
   pol41030->SetParError(4,2.160308e-14);
   pol41030->SetParLimits(4,0,0);
   pol41030->Draw("Csame");
   
   Double_t _fx1029[12] = {
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
   Double_t _fy1029[12] = {
   10.64177,
   10.76786,
   10.70688,
   10.6109,
   10.28993,
   10.72946,
   11.00557,
   11.4545,
   11.77175,
   12.26707,
   12.50256,
   12.7605};
   Double_t _fex1029[12] = {
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
   Double_t _fey1029[12] = {
   0.1422441,
   0.1758442,
   0.1787544,
   0.1493973,
   0.1161565,
   0.115205,
   0.1187722,
   0.1155888,
   0.1710985,
   0.1390048,
   0.2060258,
   0.214082};
   gre = new TGraphErrors(12,_fx1029,_fy1029,_fex1029,_fey1029);
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
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,770,5930);
   Graph_Graph1029->SetMinimum(9.893689);
   Graph_Graph1029->SetMaximum(13.25466);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   
   TF1 *pol41030 = new TF1("pol4","pol4",1200,5500);
   pol41030->SetFillColor(19);
   pol41030->SetFillStyle(0);
   pol41030->SetLineColor(2);
   pol41030->SetLineWidth(2);
   pol41030->SetChisquare(6.932206);
   pol41030->SetNDF(7);
   pol41030->GetXaxis()->SetLabelFont(42);
   pol41030->GetXaxis()->SetLabelOffset(0.007);
   pol41030->GetXaxis()->SetLabelSize(0.05);
   pol41030->GetXaxis()->SetTitleSize(0.06);
   pol41030->GetXaxis()->SetTitleOffset(0.9);
   pol41030->GetXaxis()->SetTitleFont(42);
   pol41030->GetYaxis()->SetLabelFont(42);
   pol41030->GetYaxis()->SetLabelOffset(0.007);
   pol41030->GetYaxis()->SetLabelSize(0.05);
   pol41030->GetYaxis()->SetTitleSize(0.06);
   pol41030->GetYaxis()->SetTitleOffset(1.25);
   pol41030->GetYaxis()->SetTitleFont(42);
   pol41030->SetParameter(0,13.13851);
   pol41030->SetParError(0,1.622107);
   pol41030->SetParLimits(0,0,0);
   pol41030->SetParameter(1,-0.003355071);
   pol41030->SetParError(1,0.00244355);
   pol41030->SetParLimits(1,0,0);
   pol41030->SetParameter(2,1.328597e-06);
   pol41030->SetParError(2,1.273235e-06);
   pol41030->SetParLimits(2,0,0);
   pol41030->SetParameter(3,-1.681475e-10);
   pol41030->SetParError(3,2.746784e-10);
   pol41030->SetParLimits(3,0,0);
   pol41030->SetParameter(4,6.383109e-15);
   pol41030->SetParError(4,2.090442e-14);
   pol41030->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41030);
   gre->Draw("p");
   
   Double_t _fx1031[12] = {
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
   Double_t _fy1031[12] = {
   10.64035,
   10.51303,
   10.3785,
   10.02165,
   9.932643,
   10.21789,
   10.93051,
   11.07735,
   11.24728,
   11.68434,
   12.05845,
   11.35647};
   Double_t _fex1031[12] = {
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
   Double_t _fey1031[12] = {
   0.2675017,
   0.2445966,
   0.2288831,
   0.2035692,
   0.1844103,
   0.1974901,
   0.1863075,
   0.1772041,
   0.1699652,
   0.1819219,
   0.2658882,
   0.2852816};
   gre = new TGraphErrors(12,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,770,5930);
   Graph_Graph1031->SetMinimum(9.490623);
   Graph_Graph1031->SetMaximum(12.58194);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   
   TF1 *pol41032 = new TF1("pol4","pol4",1200,5500);
   pol41032->SetFillColor(19);
   pol41032->SetFillStyle(0);
   pol41032->SetLineColor(2);
   pol41032->SetLineWidth(2);
   pol41032->SetChisquare(7.600706);
   pol41032->SetNDF(7);
   pol41032->GetXaxis()->SetLabelFont(42);
   pol41032->GetXaxis()->SetLabelOffset(0.007);
   pol41032->GetXaxis()->SetLabelSize(0.05);
   pol41032->GetXaxis()->SetTitleSize(0.06);
   pol41032->GetXaxis()->SetTitleOffset(0.9);
   pol41032->GetXaxis()->SetTitleFont(42);
   pol41032->GetYaxis()->SetLabelFont(42);
   pol41032->GetYaxis()->SetLabelOffset(0.007);
   pol41032->GetYaxis()->SetLabelSize(0.05);
   pol41032->GetYaxis()->SetTitleSize(0.06);
   pol41032->GetYaxis()->SetTitleOffset(1.25);
   pol41032->GetYaxis()->SetTitleFont(42);
   pol41032->SetParameter(0,15.64124);
   pol41032->SetParError(0,2.591916);
   pol41032->SetParLimits(0,0,0);
   pol41032->SetParameter(1,-0.007015618);
   pol41032->SetParError(1,0.003802201);
   pol41032->SetParLimits(1,0,0);
   pol41032->SetParameter(2,2.9233e-06);
   pol41032->SetParError(2,1.940065e-06);
   pol41032->SetParLimits(2,0,0);
   pol41032->SetParameter(3,-4.466998e-10);
   pol41032->SetParError(3,4.115099e-10);
   pol41032->SetParLimits(3,0,0);
   pol41032->SetParameter(4,2.22402e-14);
   pol41032->SetParError(4,3.08797e-14);
   pol41032->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41032);
   gre->Draw("p");
   
   TF1 *pol41033 = new TF1("pol4","pol4",0,13000);
   pol41033->SetBit(TF1::kNotDraw);
   pol41033->SetFillColor(19);
   pol41033->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41033->SetMarkerColor(ci);
   pol41033->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol41033->SetLineColor(ci);
   pol41033->SetLineWidth(3);
   pol41033->SetChisquare(7.600706);
   pol41033->SetNDF(7);
   pol41033->GetXaxis()->SetLabelFont(42);
   pol41033->GetXaxis()->SetLabelOffset(0.007);
   pol41033->GetXaxis()->SetLabelSize(0.05);
   pol41033->GetXaxis()->SetTitleSize(0.06);
   pol41033->GetXaxis()->SetTitleOffset(0.9);
   pol41033->GetXaxis()->SetTitleFont(42);
   pol41033->GetYaxis()->SetLabelFont(42);
   pol41033->GetYaxis()->SetLabelOffset(0.007);
   pol41033->GetYaxis()->SetLabelSize(0.05);
   pol41033->GetYaxis()->SetTitleSize(0.06);
   pol41033->GetYaxis()->SetTitleOffset(1.25);
   pol41033->GetYaxis()->SetTitleFont(42);
   pol41033->SetParameter(0,15.64124);
   pol41033->SetParError(0,2.591916);
   pol41033->SetParLimits(0,0,0);
   pol41033->SetParameter(1,-0.007015618);
   pol41033->SetParError(1,0.003802201);
   pol41033->SetParLimits(1,0,0);
   pol41033->SetParameter(2,2.9233e-06);
   pol41033->SetParError(2,1.940065e-06);
   pol41033->SetParLimits(2,0,0);
   pol41033->SetParameter(3,-4.466998e-10);
   pol41033->SetParError(3,4.115099e-10);
   pol41033->SetParLimits(3,0,0);
   pol41033->SetParameter(4,2.22402e-14);
   pol41033->SetParError(4,3.08797e-14);
   pol41033->SetParLimits(4,0,0);
   pol41033->Draw("Csame");
   
   TF1 *pol41034 = new TF1("pol4","pol4",0,13000);
   pol41034->SetBit(TF1::kNotDraw);
   pol41034->SetFillColor(19);
   pol41034->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41034->SetMarkerColor(ci);
   pol41034->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol41034->SetLineColor(ci);
   pol41034->SetLineWidth(3);
   pol41034->SetLineStyle(9);
   pol41034->SetChisquare(6.932206);
   pol41034->SetNDF(7);
   pol41034->GetXaxis()->SetLabelFont(42);
   pol41034->GetXaxis()->SetLabelOffset(0.007);
   pol41034->GetXaxis()->SetLabelSize(0.05);
   pol41034->GetXaxis()->SetTitleSize(0.06);
   pol41034->GetXaxis()->SetTitleOffset(0.9);
   pol41034->GetXaxis()->SetTitleFont(42);
   pol41034->GetYaxis()->SetLabelFont(42);
   pol41034->GetYaxis()->SetLabelOffset(0.007);
   pol41034->GetYaxis()->SetLabelSize(0.05);
   pol41034->GetYaxis()->SetTitleSize(0.06);
   pol41034->GetYaxis()->SetTitleOffset(1.25);
   pol41034->GetYaxis()->SetTitleFont(42);
   pol41034->SetParameter(0,13.13851);
   pol41034->SetParError(0,1.622107);
   pol41034->SetParLimits(0,0,0);
   pol41034->SetParameter(1,-0.003355071);
   pol41034->SetParError(1,0.00244355);
   pol41034->SetParLimits(1,0,0);
   pol41034->SetParameter(2,1.328597e-06);
   pol41034->SetParError(2,1.273235e-06);
   pol41034->SetParLimits(2,0,0);
   pol41034->SetParameter(3,-1.681475e-10);
   pol41034->SetParError(3,2.746784e-10);
   pol41034->SetParLimits(3,0,0);
   pol41034->SetParameter(4,6.383109e-15);
   pol41034->SetParError(4,2.090442e-14);
   pol41034->SetParLimits(4,0,0);
   pol41034->Draw("Csame");
   
   Double_t _fx1033[12] = {
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
   Double_t _fy1033[12] = {
   8.343997,
   8.282456,
   8.271366,
   8.177116,
   8.14719,
   8.57961,
   8.818577,
   9.381791,
   9.554571,
   10.1869,
   10.97297,
   11.44868};
   Double_t _fex1033[12] = {
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
   Double_t _fey1033[12] = {
   0.1434026,
   0.1041386,
   0.1008546,
   0.09619534,
   0.09507644,
   0.09586512,
   0.0990838,
   0.118697,
   0.1162687,
   0.1192322,
   0.1459096,
   0.1626568};
   gre = new TGraphErrors(12,_fx1033,_fy1033,_fex1033,_fey1033);
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
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,770,5930);
   Graph_Graph1033->SetMinimum(7.696191);
   Graph_Graph1033->SetMaximum(11.96726);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   
   TF1 *pol41034 = new TF1("pol4","pol4",1200,5500);
   pol41034->SetFillColor(19);
   pol41034->SetFillStyle(0);
   pol41034->SetLineColor(2);
   pol41034->SetLineWidth(2);
   pol41034->SetChisquare(7.514669);
   pol41034->SetNDF(7);
   pol41034->GetXaxis()->SetLabelFont(42);
   pol41034->GetXaxis()->SetLabelOffset(0.007);
   pol41034->GetXaxis()->SetLabelSize(0.05);
   pol41034->GetXaxis()->SetTitleSize(0.06);
   pol41034->GetXaxis()->SetTitleOffset(0.9);
   pol41034->GetXaxis()->SetTitleFont(42);
   pol41034->GetYaxis()->SetLabelFont(42);
   pol41034->GetYaxis()->SetLabelOffset(0.007);
   pol41034->GetYaxis()->SetLabelSize(0.05);
   pol41034->GetYaxis()->SetTitleSize(0.06);
   pol41034->GetYaxis()->SetTitleOffset(1.25);
   pol41034->GetYaxis()->SetTitleFont(42);
   pol41034->SetParameter(0,10.83319);
   pol41034->SetParError(0,1.398015);
   pol41034->SetParLimits(0,0,0);
   pol41034->SetParameter(1,-0.003798402);
   pol41034->SetParError(1,0.00207077);
   pol41034->SetParLimits(1,0,0);
   pol41034->SetParameter(2,1.80256e-06);
   pol41034->SetParError(2,1.067348e-06);
   pol41034->SetParLimits(2,0,0);
   pol41034->SetParameter(3,-3.180557e-10);
   pol41034->SetParError(3,2.283027e-10);
   pol41034->SetParLimits(3,0,0);
   pol41034->SetParameter(4,2.18325e-14);
   pol41034->SetParError(4,1.724816e-14);
   pol41034->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41034);
   gre->Draw("p");
   
   Double_t _fx1035[12] = {
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
   Double_t _fy1035[12] = {
   7.358726,
   7.172313,
   7.520945,
   7.275749,
   7.364552,
   7.190076,
   8.088489,
   8.402685,
   8.788917,
   8.778347,
   9.896874,
   9.918774};
   Double_t _fex1035[12] = {
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
   Double_t _fey1035[12] = {
   0.2556458,
   0.2437029,
   0.2067062,
   0.2163936,
   0.180246,
   0.1778179,
   0.1814935,
   0.1937991,
   0.1980795,
   0.1945745,
   0.1672057,
   0.2013325};
   gre = new TGraphErrors(12,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,770,5930);
   Graph_Graph1035->SetMinimum(6.609461);
   Graph_Graph1035->SetMaximum(10.43926);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
   
   TF1 *pol41036 = new TF1("pol4","pol4",1200,5500);
   pol41036->SetFillColor(19);
   pol41036->SetFillStyle(0);
   pol41036->SetLineColor(2);
   pol41036->SetLineWidth(2);
   pol41036->SetChisquare(14.74489);
   pol41036->SetNDF(7);
   pol41036->GetXaxis()->SetLabelFont(42);
   pol41036->GetXaxis()->SetLabelOffset(0.007);
   pol41036->GetXaxis()->SetLabelSize(0.05);
   pol41036->GetXaxis()->SetTitleSize(0.06);
   pol41036->GetXaxis()->SetTitleOffset(0.9);
   pol41036->GetXaxis()->SetTitleFont(42);
   pol41036->GetYaxis()->SetLabelFont(42);
   pol41036->GetYaxis()->SetLabelOffset(0.007);
   pol41036->GetYaxis()->SetLabelSize(0.05);
   pol41036->GetYaxis()->SetTitleSize(0.06);
   pol41036->GetYaxis()->SetTitleOffset(1.25);
   pol41036->GetYaxis()->SetTitleFont(42);
   pol41036->SetParameter(0,8.967904);
   pol41036->SetParError(0,2.436389);
   pol41036->SetParLimits(0,0,0);
   pol41036->SetParameter(1,-0.002253525);
   pol41036->SetParError(1,0.003548251);
   pol41036->SetParLimits(1,0,0);
   pol41036->SetParameter(2,9.080478e-07);
   pol41036->SetParError(2,1.791931e-06);
   pol41036->SetParLimits(2,0,0);
   pol41036->SetParameter(3,-1.039969e-10);
   pol41036->SetParError(3,3.754487e-10);
   pol41036->SetParLimits(3,0,0);
   pol41036->SetParameter(4,3.577803e-15);
   pol41036->SetParError(4,2.782827e-14);
   pol41036->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41036);
   gre->Draw("p");
   
   TF1 *pol41037 = new TF1("pol4","pol4",0,13000);
   pol41037->SetBit(TF1::kNotDraw);
   pol41037->SetFillColor(19);
   pol41037->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41037->SetMarkerColor(ci);
   pol41037->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol41037->SetLineColor(ci);
   pol41037->SetLineWidth(3);
   pol41037->SetChisquare(14.74489);
   pol41037->SetNDF(7);
   pol41037->GetXaxis()->SetLabelFont(42);
   pol41037->GetXaxis()->SetLabelOffset(0.007);
   pol41037->GetXaxis()->SetLabelSize(0.05);
   pol41037->GetXaxis()->SetTitleSize(0.06);
   pol41037->GetXaxis()->SetTitleOffset(0.9);
   pol41037->GetXaxis()->SetTitleFont(42);
   pol41037->GetYaxis()->SetLabelFont(42);
   pol41037->GetYaxis()->SetLabelOffset(0.007);
   pol41037->GetYaxis()->SetLabelSize(0.05);
   pol41037->GetYaxis()->SetTitleSize(0.06);
   pol41037->GetYaxis()->SetTitleOffset(1.25);
   pol41037->GetYaxis()->SetTitleFont(42);
   pol41037->SetParameter(0,8.967904);
   pol41037->SetParError(0,2.436389);
   pol41037->SetParLimits(0,0,0);
   pol41037->SetParameter(1,-0.002253525);
   pol41037->SetParError(1,0.003548251);
   pol41037->SetParLimits(1,0,0);
   pol41037->SetParameter(2,9.080478e-07);
   pol41037->SetParError(2,1.791931e-06);
   pol41037->SetParLimits(2,0,0);
   pol41037->SetParameter(3,-1.039969e-10);
   pol41037->SetParError(3,3.754487e-10);
   pol41037->SetParLimits(3,0,0);
   pol41037->SetParameter(4,3.577803e-15);
   pol41037->SetParError(4,2.782827e-14);
   pol41037->SetParLimits(4,0,0);
   pol41037->Draw("Csame");
   
   TF1 *pol41038 = new TF1("pol4","pol4",0,13000);
   pol41038->SetBit(TF1::kNotDraw);
   pol41038->SetFillColor(19);
   pol41038->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41038->SetMarkerColor(ci);
   pol41038->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol41038->SetLineColor(ci);
   pol41038->SetLineWidth(3);
   pol41038->SetLineStyle(9);
   pol41038->SetChisquare(7.514669);
   pol41038->SetNDF(7);
   pol41038->GetXaxis()->SetLabelFont(42);
   pol41038->GetXaxis()->SetLabelOffset(0.007);
   pol41038->GetXaxis()->SetLabelSize(0.05);
   pol41038->GetXaxis()->SetTitleSize(0.06);
   pol41038->GetXaxis()->SetTitleOffset(0.9);
   pol41038->GetXaxis()->SetTitleFont(42);
   pol41038->GetYaxis()->SetLabelFont(42);
   pol41038->GetYaxis()->SetLabelOffset(0.007);
   pol41038->GetYaxis()->SetLabelSize(0.05);
   pol41038->GetYaxis()->SetTitleSize(0.06);
   pol41038->GetYaxis()->SetTitleOffset(1.25);
   pol41038->GetYaxis()->SetTitleFont(42);
   pol41038->SetParameter(0,10.83319);
   pol41038->SetParError(0,1.398015);
   pol41038->SetParLimits(0,0,0);
   pol41038->SetParameter(1,-0.003798402);
   pol41038->SetParError(1,0.00207077);
   pol41038->SetParLimits(1,0,0);
   pol41038->SetParameter(2,1.80256e-06);
   pol41038->SetParError(2,1.067348e-06);
   pol41038->SetParLimits(2,0,0);
   pol41038->SetParameter(3,-3.180557e-10);
   pol41038->SetParError(3,2.283027e-10);
   pol41038->SetParLimits(3,0,0);
   pol41038->SetParameter(4,2.18325e-14);
   pol41038->SetParError(4,1.724816e-14);
   pol41038->SetParLimits(4,0,0);
   pol41038->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol4","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","G_{B}#rightarrow ZZ","L");

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
