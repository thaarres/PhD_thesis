void Signal_mjetl1_sigma()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 10 17:09:16 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,-3.71134,5728.857,22.06186);
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
   
   Double_t _fx1035[13] = {
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
   Double_t _fy1035[13] = {
   6.889129,
   6.107554,
   6.055427,
   6.250382,
   5.909571,
   6.136163,
   6.250386,
   6.68891,
   6.575979,
   7.148373,
   7.292,
   8.204694,
   6.470213};
   Double_t _fex1035[13] = {
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
   Double_t _fey1035[13] = {
   0.3615533,
   0.2602573,
   0.2437471,
   0.2209849,
   0.2554606,
   0.1925843,
   0.1837763,
   0.1632791,
   0.1749175,
   0.1757569,
   0.1763322,
   0.1978868,
   0.4528342};
   TGraphErrors *gre = new TGraphErrors(13,_fx1035,_fy1035,_fex1035,_fey1035);
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
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,550,5950);
   Graph_Graph1035->SetMinimum(0);
   Graph_Graph1035->SetMaximum(20);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1035->GetXaxis()->SetRange(11,92);
   Graph_Graph1035->GetXaxis()->SetNdivisions(209);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetTitle("sigma (GeV)");
   Graph_Graph1035->GetYaxis()->SetNdivisions(504);
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
   
   TF1 *sigma_func1036 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1036->SetBit(TF1::kNotDraw);
   sigma_func1036->SetFillColor(19);
   sigma_func1036->SetFillStyle(0);
   sigma_func1036->SetLineColor(2);
   sigma_func1036->SetLineWidth(2);
   sigma_func1036->SetChisquare(22.39342);
   sigma_func1036->SetNDF(9);
   sigma_func1036->GetXaxis()->SetLabelFont(42);
   sigma_func1036->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1036->GetXaxis()->SetLabelSize(0.05);
   sigma_func1036->GetXaxis()->SetTitleSize(0.06);
   sigma_func1036->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1036->GetXaxis()->SetTitleFont(42);
   sigma_func1036->GetYaxis()->SetLabelFont(42);
   sigma_func1036->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1036->GetYaxis()->SetLabelSize(0.05);
   sigma_func1036->GetYaxis()->SetTitleSize(0.06);
   sigma_func1036->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1036->GetYaxis()->SetTitleFont(42);
   sigma_func1036->SetParameter(0,8.317829);
   sigma_func1036->SetParError(0,0.8876016);
   sigma_func1036->SetParLimits(0,0,0);
   sigma_func1036->SetParameter(1,-0.002670875);
   sigma_func1036->SetParError(1,0.00100428);
   sigma_func1036->SetParLimits(1,0,0);
   sigma_func1036->SetParameter(2,9.537705e-07);
   sigma_func1036->SetParError(2,3.411736e-07);
   sigma_func1036->SetParLimits(2,0,0);
   sigma_func1036->SetParameter(3,-8.917019e-11);
   sigma_func1036->SetParError(3,3.569589e-11);
   sigma_func1036->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1036);
   gre->Draw("ap");
   
   Double_t _fx1037[13] = {
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
   Double_t _fy1037[13] = {
   7.17586,
   7.258099,
   7.087321,
   7.082085,
   6.69397,
   6.724367,
   7.177168,
   7.338745,
   7.62594,
   7.763031,
   7.670367,
   9.251932,
   9.953619};
   Double_t _fex1037[13] = {
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
   Double_t _fey1037[13] = {
   0.2078355,
   0.1366488,
   0.1266386,
   0.1203562,
   0.1431537,
   0.1895879,
   0.1180967,
   0.1206801,
   0.1280022,
   0.1381766,
   0.1382001,
   0.2341616,
   0.2528857};
   gre = new TGraphErrors(13,_fx1037,_fy1037,_fex1037,_fey1037);
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
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,550,5950);
   Graph_Graph1037->SetMinimum(6.167607);
   Graph_Graph1037->SetMaximum(10.57368);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   
   TF1 *sigma_func1038 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1038->SetBit(TF1::kNotDraw);
   sigma_func1038->SetFillColor(19);
   sigma_func1038->SetFillStyle(0);
   sigma_func1038->SetLineColor(2);
   sigma_func1038->SetLineWidth(2);
   sigma_func1038->SetChisquare(35.01559);
   sigma_func1038->SetNDF(9);
   sigma_func1038->GetXaxis()->SetLabelFont(42);
   sigma_func1038->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1038->GetXaxis()->SetLabelSize(0.05);
   sigma_func1038->GetXaxis()->SetTitleSize(0.06);
   sigma_func1038->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1038->GetXaxis()->SetTitleFont(42);
   sigma_func1038->GetYaxis()->SetLabelFont(42);
   sigma_func1038->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1038->GetYaxis()->SetLabelSize(0.05);
   sigma_func1038->GetYaxis()->SetTitleSize(0.06);
   sigma_func1038->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1038->GetYaxis()->SetTitleFont(42);
   sigma_func1038->SetParameter(0,7.089086);
   sigma_func1038->SetParError(0,0.5495247);
   sigma_func1038->SetParLimits(0,0,0);
   sigma_func1038->SetParameter(1,0.000115584);
   sigma_func1038->SetParError(1,0.0006409189);
   sigma_func1038->SetParLimits(1,0,0);
   sigma_func1038->SetParameter(2,-1.380213e-07);
   sigma_func1038->SetParError(2,2.20571e-07);
   sigma_func1038->SetParLimits(2,0,0);
   sigma_func1038->SetParameter(3,3.707652e-11);
   sigma_func1038->SetParError(3,2.317695e-11);
   sigma_func1038->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1038);
   gre->Draw("p");
   
   Double_t _fx1039[13] = {
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
   Double_t _fy1039[13] = {
   6.889129,
   6.107554,
   6.055427,
   6.250382,
   5.909571,
   6.136163,
   6.250386,
   6.68891,
   6.575979,
   7.148373,
   7.292,
   8.204694,
   6.470213};
   Double_t _fex1039[13] = {
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
   Double_t _fey1039[13] = {
   0.3615533,
   0.2602573,
   0.2437471,
   0.2209849,
   0.2554606,
   0.1925843,
   0.1837763,
   0.1632791,
   0.1749175,
   0.1757569,
   0.1763322,
   0.1978868,
   0.4528342};
   gre = new TGraphErrors(13,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10351039 = new TH1F("Graph_Graph_Graph10351039","",100,550,5950);
   Graph_Graph_Graph10351039->SetMinimum(0);
   Graph_Graph_Graph10351039->SetMaximum(20);
   Graph_Graph_Graph10351039->SetDirectory(0);
   Graph_Graph_Graph10351039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10351039->SetLineColor(ci);
   Graph_Graph_Graph10351039->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph10351039->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph10351039->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10351039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10351039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10351039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10351039->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10351039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10351039->GetYaxis()->SetTitle("sigma (GeV)");
   Graph_Graph_Graph10351039->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10351039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10351039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10351039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10351039->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10351039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10351039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10351039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10351039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10351039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10351039);
   
   
   TF1 *sigma_func1040 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1040->SetBit(TF1::kNotDraw);
   sigma_func1040->SetFillColor(19);
   sigma_func1040->SetFillStyle(0);
   sigma_func1040->SetLineColor(2);
   sigma_func1040->SetLineWidth(2);
   sigma_func1040->SetChisquare(22.39342);
   sigma_func1040->SetNDF(9);
   sigma_func1040->GetXaxis()->SetLabelFont(42);
   sigma_func1040->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1040->GetXaxis()->SetLabelSize(0.05);
   sigma_func1040->GetXaxis()->SetTitleSize(0.06);
   sigma_func1040->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1040->GetXaxis()->SetTitleFont(42);
   sigma_func1040->GetYaxis()->SetLabelFont(42);
   sigma_func1040->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1040->GetYaxis()->SetLabelSize(0.05);
   sigma_func1040->GetYaxis()->SetTitleSize(0.06);
   sigma_func1040->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1040->GetYaxis()->SetTitleFont(42);
   sigma_func1040->SetParameter(0,8.317829);
   sigma_func1040->SetParError(0,0.8876016);
   sigma_func1040->SetParLimits(0,0,0);
   sigma_func1040->SetParameter(1,-0.002670875);
   sigma_func1040->SetParError(1,0.00100428);
   sigma_func1040->SetParLimits(1,0,0);
   sigma_func1040->SetParameter(2,9.537705e-07);
   sigma_func1040->SetParError(2,3.411736e-07);
   sigma_func1040->SetParLimits(2,0,0);
   sigma_func1040->SetParameter(3,-8.917019e-11);
   sigma_func1040->SetParError(3,3.569589e-11);
   sigma_func1040->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1040);
   gre->Draw("p");
   
   TF1 *sigma_func1041 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1041->SetFillColor(19);
   sigma_func1041->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   sigma_func1041->SetMarkerColor(ci);
   sigma_func1041->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   sigma_func1041->SetLineColor(ci);
   sigma_func1041->SetLineWidth(3);
   sigma_func1041->SetChisquare(22.39342);
   sigma_func1041->SetNDF(9);
   sigma_func1041->GetXaxis()->SetLabelFont(42);
   sigma_func1041->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1041->GetXaxis()->SetLabelSize(0.05);
   sigma_func1041->GetXaxis()->SetTitleSize(0.06);
   sigma_func1041->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1041->GetXaxis()->SetTitleFont(42);
   sigma_func1041->GetYaxis()->SetLabelFont(42);
   sigma_func1041->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1041->GetYaxis()->SetLabelSize(0.05);
   sigma_func1041->GetYaxis()->SetTitleSize(0.06);
   sigma_func1041->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1041->GetYaxis()->SetTitleFont(42);
   sigma_func1041->SetParameter(0,8.317829);
   sigma_func1041->SetParError(0,0.8876016);
   sigma_func1041->SetParLimits(0,0,0);
   sigma_func1041->SetParameter(1,-0.002670875);
   sigma_func1041->SetParError(1,0.00100428);
   sigma_func1041->SetParLimits(1,0,0);
   sigma_func1041->SetParameter(2,9.537705e-07);
   sigma_func1041->SetParError(2,3.411736e-07);
   sigma_func1041->SetParLimits(2,0,0);
   sigma_func1041->SetParameter(3,-8.917019e-11);
   sigma_func1041->SetParError(3,3.569589e-11);
   sigma_func1041->SetParLimits(3,0,0);
   sigma_func1041->Draw("Csame");
   
   TF1 *sigma_func1042 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1042->SetFillColor(19);
   sigma_func1042->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   sigma_func1042->SetMarkerColor(ci);
   sigma_func1042->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   sigma_func1042->SetLineColor(ci);
   sigma_func1042->SetLineWidth(3);
   sigma_func1042->SetLineStyle(9);
   sigma_func1042->SetChisquare(35.01559);
   sigma_func1042->SetNDF(9);
   sigma_func1042->GetXaxis()->SetLabelFont(42);
   sigma_func1042->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1042->GetXaxis()->SetLabelSize(0.05);
   sigma_func1042->GetXaxis()->SetTitleSize(0.06);
   sigma_func1042->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1042->GetXaxis()->SetTitleFont(42);
   sigma_func1042->GetYaxis()->SetLabelFont(42);
   sigma_func1042->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1042->GetYaxis()->SetLabelSize(0.05);
   sigma_func1042->GetYaxis()->SetTitleSize(0.06);
   sigma_func1042->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1042->GetYaxis()->SetTitleFont(42);
   sigma_func1042->SetParameter(0,7.089086);
   sigma_func1042->SetParError(0,0.5495247);
   sigma_func1042->SetParLimits(0,0,0);
   sigma_func1042->SetParameter(1,0.000115584);
   sigma_func1042->SetParError(1,0.0006409189);
   sigma_func1042->SetParLimits(1,0,0);
   sigma_func1042->SetParameter(2,-1.380213e-07);
   sigma_func1042->SetParError(2,2.20571e-07);
   sigma_func1042->SetParLimits(2,0,0);
   sigma_func1042->SetParameter(3,3.707652e-11);
   sigma_func1042->SetParError(3,2.317695e-11);
   sigma_func1042->SetParLimits(3,0,0);
   sigma_func1042->Draw("Csame");
   
   Double_t _fx1041[13] = {
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
   Double_t _fy1041[13] = {
   6.627372,
   6.717443,
   6.698102,
   6.697745,
   6.665742,
   6.703997,
   7.103594,
   7.448208,
   7.610002,
   7.975833,
   8.15578,
   8.509884,
   8.430799};
   Double_t _fex1041[13] = {
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
   Double_t _fey1041[13] = {
   0.06969739,
   0.06108579,
   0.03936267,
   0.03696675,
   0.03453995,
   0.03471126,
   0.02919151,
   0.03048481,
   0.03051241,
   0.03242611,
   0.03232775,
   0.1062312,
   0.09649078};
   gre = new TGraphErrors(13,_fx1041,_fy1041,_fex1041,_fey1041);
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
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,550,5950);
   Graph_Graph1041->SetMinimum(6.35183);
   Graph_Graph1041->SetMaximum(8.82196);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1041);
   
   
   TF1 *sigma_func1042 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1042->SetBit(TF1::kNotDraw);
   sigma_func1042->SetFillColor(19);
   sigma_func1042->SetFillStyle(0);
   sigma_func1042->SetLineColor(2);
   sigma_func1042->SetLineWidth(2);
   sigma_func1042->SetChisquare(39.45713);
   sigma_func1042->SetNDF(9);
   sigma_func1042->GetXaxis()->SetLabelFont(42);
   sigma_func1042->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1042->GetXaxis()->SetLabelSize(0.05);
   sigma_func1042->GetXaxis()->SetTitleSize(0.06);
   sigma_func1042->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1042->GetXaxis()->SetTitleFont(42);
   sigma_func1042->GetYaxis()->SetLabelFont(42);
   sigma_func1042->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1042->GetYaxis()->SetLabelSize(0.05);
   sigma_func1042->GetYaxis()->SetTitleSize(0.06);
   sigma_func1042->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1042->GetYaxis()->SetTitleFont(42);
   sigma_func1042->SetParameter(0,7.126619);
   sigma_func1042->SetParError(0,0.1710136);
   sigma_func1042->SetParLimits(0,0,0);
   sigma_func1042->SetParameter(1,-0.0009133407);
   sigma_func1042->SetParError(1,0.0001923354);
   sigma_func1042->SetParLimits(1,0,0);
   sigma_func1042->SetParameter(2,4.763828e-07);
   sigma_func1042->SetParError(2,6.596122e-08);
   sigma_func1042->SetParLimits(2,0,0);
   sigma_func1042->SetParameter(3,-4.896683e-11);
   sigma_func1042->SetParError(3,7.052495e-12);
   sigma_func1042->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1042);
   gre->Draw("p");
   
   Double_t _fx1043[13] = {
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
   Double_t _fy1043[13] = {
   6.119675,
   5.972848,
   5.983929,
   5.816168,
   5.969628,
   5.932296,
   6.03991,
   6.238615,
   6.520701,
   6.660733,
   7.011601,
   6.647598,
   7.28523};
   Double_t _fex1043[13] = {
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
   Double_t _fey1043[13] = {
   0.09415044,
   0.07296936,
   0.06502336,
   0.09024268,
   0.05419545,
   0.05017393,
   0.04650386,
   0.04528559,
   0.04556364,
   0.04261808,
   0.04500321,
   0.2192621,
   0.133966};
   gre = new TGraphErrors(13,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,550,5950);
   Graph_Graph1043->SetMinimum(5.556599);
   Graph_Graph1043->SetMaximum(7.588523);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   
   TF1 *sigma_func1044 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1044->SetBit(TF1::kNotDraw);
   sigma_func1044->SetFillColor(19);
   sigma_func1044->SetFillStyle(0);
   sigma_func1044->SetLineColor(2);
   sigma_func1044->SetLineWidth(2);
   sigma_func1044->SetChisquare(12.76308);
   sigma_func1044->SetNDF(9);
   sigma_func1044->GetXaxis()->SetLabelFont(42);
   sigma_func1044->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1044->GetXaxis()->SetLabelSize(0.05);
   sigma_func1044->GetXaxis()->SetTitleSize(0.06);
   sigma_func1044->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1044->GetXaxis()->SetTitleFont(42);
   sigma_func1044->GetYaxis()->SetLabelFont(42);
   sigma_func1044->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1044->GetYaxis()->SetLabelSize(0.05);
   sigma_func1044->GetYaxis()->SetTitleSize(0.06);
   sigma_func1044->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1044->GetYaxis()->SetTitleFont(42);
   sigma_func1044->SetParameter(0,6.92223);
   sigma_func1044->SetParError(0,0.2377274);
   sigma_func1044->SetParLimits(0,0,0);
   sigma_func1044->SetParameter(1,-0.001271139);
   sigma_func1044->SetParError(1,0.0002691811);
   sigma_func1044->SetParLimits(1,0,0);
   sigma_func1044->SetParameter(2,4.749441e-07);
   sigma_func1044->SetParError(2,9.263257e-08);
   sigma_func1044->SetParLimits(2,0,0);
   sigma_func1044->SetParameter(3,-4.236662e-11);
   sigma_func1044->SetParError(3,9.935877e-12);
   sigma_func1044->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1044);
   gre->Draw("p");
   
   TF1 *sigma_func1045 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1045->SetFillColor(19);
   sigma_func1045->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   sigma_func1045->SetMarkerColor(ci);
   sigma_func1045->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   sigma_func1045->SetLineColor(ci);
   sigma_func1045->SetLineWidth(3);
   sigma_func1045->SetChisquare(12.76308);
   sigma_func1045->SetNDF(9);
   sigma_func1045->GetXaxis()->SetLabelFont(42);
   sigma_func1045->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1045->GetXaxis()->SetLabelSize(0.05);
   sigma_func1045->GetXaxis()->SetTitleSize(0.06);
   sigma_func1045->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1045->GetXaxis()->SetTitleFont(42);
   sigma_func1045->GetYaxis()->SetLabelFont(42);
   sigma_func1045->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1045->GetYaxis()->SetLabelSize(0.05);
   sigma_func1045->GetYaxis()->SetTitleSize(0.06);
   sigma_func1045->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1045->GetYaxis()->SetTitleFont(42);
   sigma_func1045->SetParameter(0,6.92223);
   sigma_func1045->SetParError(0,0.2377274);
   sigma_func1045->SetParLimits(0,0,0);
   sigma_func1045->SetParameter(1,-0.001271139);
   sigma_func1045->SetParError(1,0.0002691811);
   sigma_func1045->SetParLimits(1,0,0);
   sigma_func1045->SetParameter(2,4.749441e-07);
   sigma_func1045->SetParError(2,9.263257e-08);
   sigma_func1045->SetParLimits(2,0,0);
   sigma_func1045->SetParameter(3,-4.236662e-11);
   sigma_func1045->SetParError(3,9.935877e-12);
   sigma_func1045->SetParLimits(3,0,0);
   sigma_func1045->Draw("Csame");
   
   TF1 *sigma_func1046 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1046->SetFillColor(19);
   sigma_func1046->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   sigma_func1046->SetMarkerColor(ci);
   sigma_func1046->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   sigma_func1046->SetLineColor(ci);
   sigma_func1046->SetLineWidth(3);
   sigma_func1046->SetLineStyle(9);
   sigma_func1046->SetChisquare(39.45713);
   sigma_func1046->SetNDF(9);
   sigma_func1046->GetXaxis()->SetLabelFont(42);
   sigma_func1046->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1046->GetXaxis()->SetLabelSize(0.05);
   sigma_func1046->GetXaxis()->SetTitleSize(0.06);
   sigma_func1046->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1046->GetXaxis()->SetTitleFont(42);
   sigma_func1046->GetYaxis()->SetLabelFont(42);
   sigma_func1046->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1046->GetYaxis()->SetLabelSize(0.05);
   sigma_func1046->GetYaxis()->SetTitleSize(0.06);
   sigma_func1046->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1046->GetYaxis()->SetTitleFont(42);
   sigma_func1046->SetParameter(0,7.126619);
   sigma_func1046->SetParError(0,0.1710136);
   sigma_func1046->SetParLimits(0,0,0);
   sigma_func1046->SetParameter(1,-0.0009133407);
   sigma_func1046->SetParError(1,0.0001923354);
   sigma_func1046->SetParLimits(1,0,0);
   sigma_func1046->SetParameter(2,4.763828e-07);
   sigma_func1046->SetParError(2,6.596122e-08);
   sigma_func1046->SetParLimits(2,0,0);
   sigma_func1046->SetParameter(3,-4.896683e-11);
   sigma_func1046->SetParError(3,7.052495e-12);
   sigma_func1046->SetParLimits(3,0,0);
   sigma_func1046->Draw("Csame");
   
   Double_t _fx1045[13] = {
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
   Double_t _fy1045[13] = {
   11.26656,
   11.23465,
   10.82757,
   10.86817,
   11.10705,
   10.8782,
   11.03709,
   10.92918,
   11.50737,
   12.3002,
   12.57546,
   12.79605,
   13.69772};
   Double_t _fex1045[13] = {
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
   Double_t _fey1045[13] = {
   0.1289193,
   0.1508087,
   0.1300078,
   0.1448533,
   0.1676989,
   0.1462842,
   0.1344023,
   0.1709783,
   0.1999655,
   0.1763885,
   0.1885263,
   0.217935,
   0.2128713};
   gre = new TGraphErrors(13,_fx1045,_fy1045,_fex1045,_fey1045);
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
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,550,5950);
   Graph_Graph1045->SetMinimum(10.37625);
   Graph_Graph1045->SetMaximum(14.23189);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   
   TF1 *sigma_func1046 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1046->SetBit(TF1::kNotDraw);
   sigma_func1046->SetFillColor(19);
   sigma_func1046->SetFillStyle(0);
   sigma_func1046->SetLineColor(2);
   sigma_func1046->SetLineWidth(2);
   sigma_func1046->SetChisquare(11.72346);
   sigma_func1046->SetNDF(9);
   sigma_func1046->GetXaxis()->SetLabelFont(42);
   sigma_func1046->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1046->GetXaxis()->SetLabelSize(0.05);
   sigma_func1046->GetXaxis()->SetTitleSize(0.06);
   sigma_func1046->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1046->GetXaxis()->SetTitleFont(42);
   sigma_func1046->GetYaxis()->SetLabelFont(42);
   sigma_func1046->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1046->GetYaxis()->SetLabelSize(0.05);
   sigma_func1046->GetYaxis()->SetTitleSize(0.06);
   sigma_func1046->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1046->GetYaxis()->SetTitleFont(42);
   sigma_func1046->SetParameter(0,12.67944);
   sigma_func1046->SetParError(0,0.489521);
   sigma_func1046->SetParLimits(0,0,0);
   sigma_func1046->SetParameter(1,-0.002007579);
   sigma_func1046->SetParError(1,0.0005959347);
   sigma_func1046->SetParLimits(1,0,0);
   sigma_func1046->SetParameter(2,6.384898e-07);
   sigma_func1046->SetParError(2,2.111065e-07);
   sigma_func1046->SetParLimits(2,0,0);
   sigma_func1046->SetParameter(3,-4.420649e-11);
   sigma_func1046->SetParError(3,2.243997e-11);
   sigma_func1046->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1046);
   gre->Draw("p");
   
   Double_t _fx1047[13] = {
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
   Double_t _fy1047[13] = {
   10.51366,
   10.60126,
   10.55566,
   10.67016,
   10.6454,
   10.41123,
   10.29212,
   10.88273,
   11.39001,
   11.57982,
   12.1422,
   12.2407,
   13.06152};
   Double_t _fex1047[13] = {
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
   Double_t _fey1047[13] = {
   0.1427553,
   0.1306689,
   0.1090269,
   0.1001284,
   0.1045012,
   0.09926037,
   0.09336288,
   0.1133522,
   0.1084856,
   0.1132953,
   0.1238128,
   0.1506691,
   0.1308881};
   gre = new TGraphErrors(13,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,550,5950);
   Graph_Graph1047->SetMinimum(9.899387);
   Graph_Graph1047->SetMaximum(13.49177);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
   
   TF1 *sigma_func1048 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1048->SetBit(TF1::kNotDraw);
   sigma_func1048->SetFillColor(19);
   sigma_func1048->SetFillStyle(0);
   sigma_func1048->SetLineColor(2);
   sigma_func1048->SetLineWidth(2);
   sigma_func1048->SetChisquare(27.48419);
   sigma_func1048->SetNDF(9);
   sigma_func1048->GetXaxis()->SetLabelFont(42);
   sigma_func1048->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1048->GetXaxis()->SetLabelSize(0.05);
   sigma_func1048->GetXaxis()->SetTitleSize(0.06);
   sigma_func1048->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1048->GetXaxis()->SetTitleFont(42);
   sigma_func1048->GetYaxis()->SetLabelFont(42);
   sigma_func1048->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1048->GetYaxis()->SetLabelSize(0.05);
   sigma_func1048->GetYaxis()->SetTitleSize(0.06);
   sigma_func1048->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1048->GetYaxis()->SetTitleFont(42);
   sigma_func1048->SetParameter(0,11.77607);
   sigma_func1048->SetParError(0,0.4092816);
   sigma_func1048->SetParLimits(0,0,0);
   sigma_func1048->SetParameter(1,-0.001542274);
   sigma_func1048->SetParError(1,0.0004655826);
   sigma_func1048->SetParLimits(1,0,0);
   sigma_func1048->SetParameter(2,5.18808e-07);
   sigma_func1048->SetParError(2,1.570467e-07);
   sigma_func1048->SetParLimits(2,0,0);
   sigma_func1048->SetParameter(3,-3.608299e-11);
   sigma_func1048->SetParError(3,1.61032e-11);
   sigma_func1048->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1048);
   gre->Draw("p");
   
   TF1 *sigma_func1049 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1049->SetFillColor(19);
   sigma_func1049->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   sigma_func1049->SetMarkerColor(ci);
   sigma_func1049->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   sigma_func1049->SetLineColor(ci);
   sigma_func1049->SetLineWidth(3);
   sigma_func1049->SetChisquare(27.48419);
   sigma_func1049->SetNDF(9);
   sigma_func1049->GetXaxis()->SetLabelFont(42);
   sigma_func1049->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1049->GetXaxis()->SetLabelSize(0.05);
   sigma_func1049->GetXaxis()->SetTitleSize(0.06);
   sigma_func1049->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1049->GetXaxis()->SetTitleFont(42);
   sigma_func1049->GetYaxis()->SetLabelFont(42);
   sigma_func1049->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1049->GetYaxis()->SetLabelSize(0.05);
   sigma_func1049->GetYaxis()->SetTitleSize(0.06);
   sigma_func1049->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1049->GetYaxis()->SetTitleFont(42);
   sigma_func1049->SetParameter(0,11.77607);
   sigma_func1049->SetParError(0,0.4092816);
   sigma_func1049->SetParLimits(0,0,0);
   sigma_func1049->SetParameter(1,-0.001542274);
   sigma_func1049->SetParError(1,0.0004655826);
   sigma_func1049->SetParLimits(1,0,0);
   sigma_func1049->SetParameter(2,5.18808e-07);
   sigma_func1049->SetParError(2,1.570467e-07);
   sigma_func1049->SetParLimits(2,0,0);
   sigma_func1049->SetParameter(3,-3.608299e-11);
   sigma_func1049->SetParError(3,1.61032e-11);
   sigma_func1049->SetParLimits(3,0,0);
   sigma_func1049->Draw("Csame");
   
   TF1 *sigma_func1050 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1050->SetFillColor(19);
   sigma_func1050->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   sigma_func1050->SetMarkerColor(ci);
   sigma_func1050->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   sigma_func1050->SetLineColor(ci);
   sigma_func1050->SetLineWidth(3);
   sigma_func1050->SetLineStyle(9);
   sigma_func1050->SetChisquare(11.72346);
   sigma_func1050->SetNDF(9);
   sigma_func1050->GetXaxis()->SetLabelFont(42);
   sigma_func1050->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1050->GetXaxis()->SetLabelSize(0.05);
   sigma_func1050->GetXaxis()->SetTitleSize(0.06);
   sigma_func1050->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1050->GetXaxis()->SetTitleFont(42);
   sigma_func1050->GetYaxis()->SetLabelFont(42);
   sigma_func1050->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1050->GetYaxis()->SetLabelSize(0.05);
   sigma_func1050->GetYaxis()->SetTitleSize(0.06);
   sigma_func1050->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1050->GetYaxis()->SetTitleFont(42);
   sigma_func1050->SetParameter(0,12.67944);
   sigma_func1050->SetParError(0,0.489521);
   sigma_func1050->SetParLimits(0,0,0);
   sigma_func1050->SetParameter(1,-0.002007579);
   sigma_func1050->SetParError(1,0.0005959347);
   sigma_func1050->SetParLimits(1,0,0);
   sigma_func1050->SetParameter(2,6.384898e-07);
   sigma_func1050->SetParError(2,2.111065e-07);
   sigma_func1050->SetParLimits(2,0,0);
   sigma_func1050->SetParameter(3,-4.420649e-11);
   sigma_func1050->SetParError(3,2.243997e-11);
   sigma_func1050->SetParLimits(3,0,0);
   sigma_func1050->Draw("Csame");
   
   Double_t _fx1049[13] = {
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
   Double_t _fy1049[13] = {
   8.468696,
   8.660228,
   8.670583,
   8.622457,
   8.6485,
   8.641995,
   8.805208,
   9.102274,
   9.811851,
   10.14897,
   10.04047,
   11.46097,
   12.45963};
   Double_t _fex1049[13] = {
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
   Double_t _fey1049[13] = {
   0.04665197,
   0.03732357,
   0.03784739,
   0.0393599,
   0.0427653,
   0.04848375,
   0.03643761,
   0.04458163,
   0.04415439,
   0.05221246,
   0.1571548,
   0.175801,
   0.1826819};
   gre = new TGraphErrors(13,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(91);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(91);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,550,5950);
   Graph_Graph1049->SetMinimum(8.000017);
   Graph_Graph1049->SetMaximum(13.06434);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1049->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1049->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1049->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
   
   TF1 *sigma_func1050 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1050->SetBit(TF1::kNotDraw);
   sigma_func1050->SetFillColor(19);
   sigma_func1050->SetFillStyle(0);
   sigma_func1050->SetLineColor(2);
   sigma_func1050->SetLineWidth(2);
   sigma_func1050->SetChisquare(70.10581);
   sigma_func1050->SetNDF(9);
   sigma_func1050->GetXaxis()->SetLabelFont(42);
   sigma_func1050->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1050->GetXaxis()->SetLabelSize(0.05);
   sigma_func1050->GetXaxis()->SetTitleSize(0.06);
   sigma_func1050->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1050->GetXaxis()->SetTitleFont(42);
   sigma_func1050->GetYaxis()->SetLabelFont(42);
   sigma_func1050->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1050->GetYaxis()->SetLabelSize(0.05);
   sigma_func1050->GetYaxis()->SetTitleSize(0.06);
   sigma_func1050->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1050->GetYaxis()->SetTitleFont(42);
   sigma_func1050->SetParameter(0,9.032502);
   sigma_func1050->SetParError(0,0.17316);
   sigma_func1050->SetParLimits(0,0,0);
   sigma_func1050->SetParameter(1,-0.0006572105);
   sigma_func1050->SetParError(1,0.0002173953);
   sigma_func1050->SetParLimits(1,0,0);
   sigma_func1050->SetParameter(2,2.487788e-07);
   sigma_func1050->SetParError(2,8.118196e-08);
   sigma_func1050->SetParLimits(2,0,0);
   sigma_func1050->SetParameter(3,-3.733254e-12);
   sigma_func1050->SetParError(3,9.305435e-12);
   sigma_func1050->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1050);
   gre->Draw("p");
   
   Double_t _fx1051[13] = {
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
   Double_t _fy1051[13] = {
   8.157142,
   8.135036,
   8.124493,
   8.076754,
   8.009178,
   7.735029,
   7.90567,
   8.317625,
   8.755272,
   9.21389,
   9.876507,
   10.382,
   10.58267};
   Double_t _fex1051[13] = {
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
   Double_t _fey1051[13] = {
   0.03395278,
   0.03183092,
   0.03144152,
   0.03054406,
   0.03074121,
   0.03693108,
   0.02885456,
   0.033461,
   0.03642328,
   0.04394541,
   0.2337101,
   0.1144719,
   0.2533699};
   gre = new TGraphErrors(13,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(91);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(91);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,550,5950);
   Graph_Graph1051->SetMinimum(7.384304);
   Graph_Graph1051->SetMaximum(11.14983);
   Graph_Graph1051->SetDirectory(0);
   Graph_Graph1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1051->SetLineColor(ci);
   Graph_Graph1051->GetXaxis()->SetLabelFont(42);
   Graph_Graph1051->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1051->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1051->GetXaxis()->SetTitleFont(42);
   Graph_Graph1051->GetYaxis()->SetLabelFont(42);
   Graph_Graph1051->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1051->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1051->GetYaxis()->SetTitleFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1051->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1051);
   
   
   TF1 *sigma_func1052 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1052->SetBit(TF1::kNotDraw);
   sigma_func1052->SetFillColor(19);
   sigma_func1052->SetFillStyle(0);
   sigma_func1052->SetLineColor(2);
   sigma_func1052->SetLineWidth(2);
   sigma_func1052->SetChisquare(92.94685);
   sigma_func1052->SetNDF(9);
   sigma_func1052->GetXaxis()->SetLabelFont(42);
   sigma_func1052->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1052->GetXaxis()->SetLabelSize(0.05);
   sigma_func1052->GetXaxis()->SetTitleSize(0.06);
   sigma_func1052->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1052->GetXaxis()->SetTitleFont(42);
   sigma_func1052->GetYaxis()->SetLabelFont(42);
   sigma_func1052->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1052->GetYaxis()->SetLabelSize(0.05);
   sigma_func1052->GetYaxis()->SetTitleSize(0.06);
   sigma_func1052->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1052->GetYaxis()->SetTitleFont(42);
   sigma_func1052->SetParameter(0,9.581379);
   sigma_func1052->SetParError(0,0.1408705);
   sigma_func1052->SetParLimits(0,0,0);
   sigma_func1052->SetParameter(1,-0.001847558);
   sigma_func1052->SetParError(1,0.0001810912);
   sigma_func1052->SetParLimits(1,0,0);
   sigma_func1052->SetParameter(2,5.780645e-07);
   sigma_func1052->SetParError(2,6.992694e-08);
   sigma_func1052->SetParLimits(2,0,0);
   sigma_func1052->SetParameter(3,-3.512816e-11);
   sigma_func1052->SetParError(3,8.324018e-12);
   sigma_func1052->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1052);
   gre->Draw("p");
   
   TF1 *sigma_func1053 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1053->SetFillColor(19);
   sigma_func1053->SetFillStyle(0);
   sigma_func1053->SetMarkerColor(91);
   sigma_func1053->SetMarkerStyle(8);
   sigma_func1053->SetLineColor(91);
   sigma_func1053->SetLineWidth(3);
   sigma_func1053->SetChisquare(92.94685);
   sigma_func1053->SetNDF(9);
   sigma_func1053->GetXaxis()->SetLabelFont(42);
   sigma_func1053->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1053->GetXaxis()->SetLabelSize(0.05);
   sigma_func1053->GetXaxis()->SetTitleSize(0.06);
   sigma_func1053->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1053->GetXaxis()->SetTitleFont(42);
   sigma_func1053->GetYaxis()->SetLabelFont(42);
   sigma_func1053->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1053->GetYaxis()->SetLabelSize(0.05);
   sigma_func1053->GetYaxis()->SetTitleSize(0.06);
   sigma_func1053->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1053->GetYaxis()->SetTitleFont(42);
   sigma_func1053->SetParameter(0,9.581379);
   sigma_func1053->SetParError(0,0.1408705);
   sigma_func1053->SetParLimits(0,0,0);
   sigma_func1053->SetParameter(1,-0.001847558);
   sigma_func1053->SetParError(1,0.0001810912);
   sigma_func1053->SetParLimits(1,0,0);
   sigma_func1053->SetParameter(2,5.780645e-07);
   sigma_func1053->SetParError(2,6.992694e-08);
   sigma_func1053->SetParLimits(2,0,0);
   sigma_func1053->SetParameter(3,-3.512816e-11);
   sigma_func1053->SetParError(3,8.324018e-12);
   sigma_func1053->SetParLimits(3,0,0);
   sigma_func1053->Draw("Csame");
   
   TF1 *sigma_func1054 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1054->SetFillColor(19);
   sigma_func1054->SetFillStyle(0);
   sigma_func1054->SetMarkerColor(91);
   sigma_func1054->SetMarkerStyle(24);
   sigma_func1054->SetLineColor(91);
   sigma_func1054->SetLineWidth(3);
   sigma_func1054->SetLineStyle(9);
   sigma_func1054->SetChisquare(70.10581);
   sigma_func1054->SetNDF(9);
   sigma_func1054->GetXaxis()->SetLabelFont(42);
   sigma_func1054->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1054->GetXaxis()->SetLabelSize(0.05);
   sigma_func1054->GetXaxis()->SetTitleSize(0.06);
   sigma_func1054->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1054->GetXaxis()->SetTitleFont(42);
   sigma_func1054->GetYaxis()->SetLabelFont(42);
   sigma_func1054->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1054->GetYaxis()->SetLabelSize(0.05);
   sigma_func1054->GetYaxis()->SetTitleSize(0.06);
   sigma_func1054->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1054->GetYaxis()->SetTitleFont(42);
   sigma_func1054->SetParameter(0,9.032502);
   sigma_func1054->SetParError(0,0.17316);
   sigma_func1054->SetParLimits(0,0,0);
   sigma_func1054->SetParameter(1,-0.0006572105);
   sigma_func1054->SetParError(1,0.0002173953);
   sigma_func1054->SetParLimits(1,0,0);
   sigma_func1054->SetParameter(2,2.487788e-07);
   sigma_func1054->SetParError(2,8.118196e-08);
   sigma_func1054->SetParLimits(2,0,0);
   sigma_func1054->SetParameter(3,-3.733254e-12);
   sigma_func1054->SetParError(3,9.305435e-12);
   sigma_func1054->SetParLimits(3,0,0);
   sigma_func1054->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("sigma_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("sigma_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("sigma_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("sigma_func","G_{B}#rightarrow ZZ","L");
   entry->SetLineColor(91);
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
   TLatex *   tex = new TLatex(0.96,0.936,"");
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
      tex = new TLatex(0.1578,0.83524,"Simulation");
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
