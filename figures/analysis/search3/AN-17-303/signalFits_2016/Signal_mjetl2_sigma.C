void Signal_mjetl2_sigma()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:16 2018) by ROOT version6.02/05
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
   
   Double_t _fx1127[12] = {
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
   Double_t _fy1127[12] = {
   6.514806,
   6.756913,
   6.411102,
   6.490194,
   6.78793,
   7.162981,
   7.001369,
   7.30092,
   7.25872,
   7.904611,
   8.065656,
   8.498981};
   Double_t _fex1127[12] = {
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
   Double_t _fey1127[12] = {
   0.3460993,
   0.2477511,
   0.2084665,
   0.2201245,
   0.1942535,
   0.1868858,
   0.1996881,
   0.2290671,
   0.1869514,
   0.2296982,
   0.2675607,
   0.3921081};
   TGraphErrors *gre = new TGraphErrors(12,_fx1127,_fy1127,_fex1127,_fey1127);
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
   
   TH1F *Graph_Graph1127 = new TH1F("Graph_Graph1127","",100,770,5930);
   Graph_Graph1127->SetMinimum(0);
   Graph_Graph1127->SetMaximum(20);
   Graph_Graph1127->SetDirectory(0);
   Graph_Graph1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1127->SetLineColor(ci);
   Graph_Graph1127->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1127->GetXaxis()->SetRange(7,92);
   Graph_Graph1127->GetXaxis()->SetNdivisions(209);
   Graph_Graph1127->GetXaxis()->SetLabelFont(42);
   Graph_Graph1127->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1127->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1127->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1127->GetXaxis()->SetTitleFont(42);
   Graph_Graph1127->GetYaxis()->SetTitle("sigma (GeV)");
   Graph_Graph1127->GetYaxis()->SetNdivisions(504);
   Graph_Graph1127->GetYaxis()->SetLabelFont(42);
   Graph_Graph1127->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1127->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1127->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1127->GetYaxis()->SetTitleFont(42);
   Graph_Graph1127->GetZaxis()->SetLabelFont(42);
   Graph_Graph1127->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1127->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1127);
   
   
   TF1 *pol41128 = new TF1("pol4","pol4",1200,5500);
   pol41128->SetFillColor(19);
   pol41128->SetFillStyle(0);
   pol41128->SetLineColor(2);
   pol41128->SetLineWidth(2);
   pol41128->SetChisquare(6.205002);
   pol41128->SetNDF(7);
   pol41128->GetXaxis()->SetLabelFont(42);
   pol41128->GetXaxis()->SetLabelOffset(0.007);
   pol41128->GetXaxis()->SetLabelSize(0.05);
   pol41128->GetXaxis()->SetTitleSize(0.06);
   pol41128->GetXaxis()->SetTitleOffset(0.9);
   pol41128->GetXaxis()->SetTitleFont(42);
   pol41128->GetYaxis()->SetLabelFont(42);
   pol41128->GetYaxis()->SetLabelOffset(0.007);
   pol41128->GetYaxis()->SetLabelSize(0.05);
   pol41128->GetYaxis()->SetTitleSize(0.06);
   pol41128->GetYaxis()->SetTitleOffset(1.25);
   pol41128->GetYaxis()->SetTitleFont(42);
   pol41128->SetParameter(0,6.160849);
   pol41128->SetParError(0,3.066067);
   pol41128->SetParLimits(0,0,0);
   pol41128->SetParameter(1,4.402863e-05);
   pol41128->SetParError(1,0.004485369);
   pol41128->SetParLimits(1,0,0);
   pol41128->SetParameter(2,2.536722e-07);
   pol41128->SetParError(2,2.2915e-06);
   pol41128->SetParLimits(2,0,0);
   pol41128->SetParameter(3,-8.109491e-11);
   pol41128->SetParError(3,4.877e-10);
   pol41128->SetParLimits(3,0,0);
   pol41128->SetParameter(4,8.747724e-15);
   pol41128->SetParError(4,3.679036e-14);
   pol41128->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41128);
   gre->Draw("ap");
   
   Double_t _fx1129[12] = {
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
   Double_t _fy1129[12] = {
   7.429314,
   7.342353,
   6.924122,
   6.846987,
   7.221361,
   7.237337,
   7.650688,
   8.095939,
   8.528148,
   9.393595,
   9.228511,
   9.455531};
   Double_t _fex1129[12] = {
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
   Double_t _fey1129[12] = {
   0.1526703,
   0.1477892,
   0.1257856,
   0.1949148,
   0.1317416,
   0.1318996,
   0.1607848,
   0.3047468,
   0.2177003,
   0.1611989,
   0.1818967,
   0.1915441};
   gre = new TGraphErrors(12,_fx1129,_fy1129,_fex1129,_fey1129);
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
   
   TH1F *Graph_Graph1129 = new TH1F("Graph_Graph1129","",100,770,5930);
   Graph_Graph1129->SetMinimum(6.352572);
   Graph_Graph1129->SetMaximum(9.946575);
   Graph_Graph1129->SetDirectory(0);
   Graph_Graph1129->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1129->SetLineColor(ci);
   Graph_Graph1129->GetXaxis()->SetLabelFont(42);
   Graph_Graph1129->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1129->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1129->GetXaxis()->SetTitleFont(42);
   Graph_Graph1129->GetYaxis()->SetLabelFont(42);
   Graph_Graph1129->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1129->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1129->GetYaxis()->SetTitleFont(42);
   Graph_Graph1129->GetZaxis()->SetLabelFont(42);
   Graph_Graph1129->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1129->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1129);
   
   
   TF1 *pol41130 = new TF1("pol4","pol4",1200,5500);
   pol41130->SetFillColor(19);
   pol41130->SetFillStyle(0);
   pol41130->SetLineColor(2);
   pol41130->SetLineWidth(2);
   pol41130->SetChisquare(9.578117);
   pol41130->SetNDF(7);
   pol41130->GetXaxis()->SetLabelFont(42);
   pol41130->GetXaxis()->SetLabelOffset(0.007);
   pol41130->GetXaxis()->SetLabelSize(0.05);
   pol41130->GetXaxis()->SetTitleSize(0.06);
   pol41130->GetXaxis()->SetTitleOffset(0.9);
   pol41130->GetXaxis()->SetTitleFont(42);
   pol41130->GetYaxis()->SetLabelFont(42);
   pol41130->GetYaxis()->SetLabelOffset(0.007);
   pol41130->GetYaxis()->SetLabelSize(0.05);
   pol41130->GetYaxis()->SetTitleSize(0.06);
   pol41130->GetYaxis()->SetTitleOffset(1.25);
   pol41130->GetYaxis()->SetTitleFont(42);
   pol41130->SetParameter(0,10.75793);
   pol41130->SetParError(0,1.893857);
   pol41130->SetParLimits(0,0,0);
   pol41130->SetParameter(1,-0.00460158);
   pol41130->SetParError(1,0.002874144);
   pol41130->SetParLimits(1,0,0);
   pol41130->SetParameter(2,1.755413e-06);
   pol41130->SetParError(2,1.500159e-06);
   pol41130->SetParLimits(2,0,0);
   pol41130->SetParameter(3,-2.038793e-10);
   pol41130->SetParError(3,3.212387e-10);
   pol41130->SetParLimits(3,0,0);
   pol41130->SetParameter(4,5.224468e-15);
   pol41130->SetParError(4,2.414167e-14);
   pol41130->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41130);
   gre->Draw("p");
   
   Double_t _fx1131[12] = {
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
   Double_t _fy1131[12] = {
   6.514806,
   6.756913,
   6.411102,
   6.490194,
   6.78793,
   7.162981,
   7.001369,
   7.30092,
   7.25872,
   7.904611,
   8.065656,
   8.498981};
   Double_t _fex1131[12] = {
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
   Double_t _fey1131[12] = {
   0.3460993,
   0.2477511,
   0.2084665,
   0.2201245,
   0.1942535,
   0.1868858,
   0.1996881,
   0.2290671,
   0.1869514,
   0.2296982,
   0.2675607,
   0.3921081};
   gre = new TGraphErrors(12,_fx1131,_fy1131,_fex1131,_fey1131);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11271131 = new TH1F("Graph_Graph_Graph11271131","",100,770,5930);
   Graph_Graph_Graph11271131->SetMinimum(0);
   Graph_Graph_Graph11271131->SetMaximum(20);
   Graph_Graph_Graph11271131->SetDirectory(0);
   Graph_Graph_Graph11271131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11271131->SetLineColor(ci);
   Graph_Graph_Graph11271131->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph11271131->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph11271131->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11271131->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11271131->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11271131->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11271131->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11271131->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11271131->GetYaxis()->SetTitle("sigma (GeV)");
   Graph_Graph_Graph11271131->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11271131->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11271131->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11271131->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11271131->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11271131->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11271131->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11271131->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11271131->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11271131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11271131);
   
   
   TF1 *pol41132 = new TF1("pol4","pol4",1200,5500);
   pol41132->SetFillColor(19);
   pol41132->SetFillStyle(0);
   pol41132->SetLineColor(2);
   pol41132->SetLineWidth(2);
   pol41132->SetChisquare(6.205002);
   pol41132->SetNDF(7);
   pol41132->GetXaxis()->SetLabelFont(42);
   pol41132->GetXaxis()->SetLabelOffset(0.007);
   pol41132->GetXaxis()->SetLabelSize(0.05);
   pol41132->GetXaxis()->SetTitleSize(0.06);
   pol41132->GetXaxis()->SetTitleOffset(0.9);
   pol41132->GetXaxis()->SetTitleFont(42);
   pol41132->GetYaxis()->SetLabelFont(42);
   pol41132->GetYaxis()->SetLabelOffset(0.007);
   pol41132->GetYaxis()->SetLabelSize(0.05);
   pol41132->GetYaxis()->SetTitleSize(0.06);
   pol41132->GetYaxis()->SetTitleOffset(1.25);
   pol41132->GetYaxis()->SetTitleFont(42);
   pol41132->SetParameter(0,6.160849);
   pol41132->SetParError(0,3.066067);
   pol41132->SetParLimits(0,0,0);
   pol41132->SetParameter(1,4.402863e-05);
   pol41132->SetParError(1,0.004485369);
   pol41132->SetParLimits(1,0,0);
   pol41132->SetParameter(2,2.536722e-07);
   pol41132->SetParError(2,2.2915e-06);
   pol41132->SetParLimits(2,0,0);
   pol41132->SetParameter(3,-8.109491e-11);
   pol41132->SetParError(3,4.877e-10);
   pol41132->SetParLimits(3,0,0);
   pol41132->SetParameter(4,8.747724e-15);
   pol41132->SetParError(4,3.679036e-14);
   pol41132->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41132);
   gre->Draw("p");
   
   TF1 *pol41133 = new TF1("pol4","pol4",0,13000);
   pol41133->SetBit(TF1::kNotDraw);
   pol41133->SetFillColor(19);
   pol41133->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41133->SetMarkerColor(ci);
   pol41133->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41133->SetLineColor(ci);
   pol41133->SetLineWidth(3);
   pol41133->SetChisquare(6.205002);
   pol41133->SetNDF(7);
   pol41133->GetXaxis()->SetLabelFont(42);
   pol41133->GetXaxis()->SetLabelOffset(0.007);
   pol41133->GetXaxis()->SetLabelSize(0.05);
   pol41133->GetXaxis()->SetTitleSize(0.06);
   pol41133->GetXaxis()->SetTitleOffset(0.9);
   pol41133->GetXaxis()->SetTitleFont(42);
   pol41133->GetYaxis()->SetLabelFont(42);
   pol41133->GetYaxis()->SetLabelOffset(0.007);
   pol41133->GetYaxis()->SetLabelSize(0.05);
   pol41133->GetYaxis()->SetTitleSize(0.06);
   pol41133->GetYaxis()->SetTitleOffset(1.25);
   pol41133->GetYaxis()->SetTitleFont(42);
   pol41133->SetParameter(0,6.160849);
   pol41133->SetParError(0,3.066067);
   pol41133->SetParLimits(0,0,0);
   pol41133->SetParameter(1,4.402863e-05);
   pol41133->SetParError(1,0.004485369);
   pol41133->SetParLimits(1,0,0);
   pol41133->SetParameter(2,2.536722e-07);
   pol41133->SetParError(2,2.2915e-06);
   pol41133->SetParLimits(2,0,0);
   pol41133->SetParameter(3,-8.109491e-11);
   pol41133->SetParError(3,4.877e-10);
   pol41133->SetParLimits(3,0,0);
   pol41133->SetParameter(4,8.747724e-15);
   pol41133->SetParError(4,3.679036e-14);
   pol41133->SetParLimits(4,0,0);
   pol41133->Draw("Csame");
   
   TF1 *pol41134 = new TF1("pol4","pol4",0,13000);
   pol41134->SetBit(TF1::kNotDraw);
   pol41134->SetFillColor(19);
   pol41134->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41134->SetMarkerColor(ci);
   pol41134->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol41134->SetLineColor(ci);
   pol41134->SetLineWidth(3);
   pol41134->SetLineStyle(9);
   pol41134->SetChisquare(9.578117);
   pol41134->SetNDF(7);
   pol41134->GetXaxis()->SetLabelFont(42);
   pol41134->GetXaxis()->SetLabelOffset(0.007);
   pol41134->GetXaxis()->SetLabelSize(0.05);
   pol41134->GetXaxis()->SetTitleSize(0.06);
   pol41134->GetXaxis()->SetTitleOffset(0.9);
   pol41134->GetXaxis()->SetTitleFont(42);
   pol41134->GetYaxis()->SetLabelFont(42);
   pol41134->GetYaxis()->SetLabelOffset(0.007);
   pol41134->GetYaxis()->SetLabelSize(0.05);
   pol41134->GetYaxis()->SetTitleSize(0.06);
   pol41134->GetYaxis()->SetTitleOffset(1.25);
   pol41134->GetYaxis()->SetTitleFont(42);
   pol41134->SetParameter(0,10.75793);
   pol41134->SetParError(0,1.893857);
   pol41134->SetParLimits(0,0,0);
   pol41134->SetParameter(1,-0.00460158);
   pol41134->SetParError(1,0.002874144);
   pol41134->SetParLimits(1,0,0);
   pol41134->SetParameter(2,1.755413e-06);
   pol41134->SetParError(2,1.500159e-06);
   pol41134->SetParLimits(2,0,0);
   pol41134->SetParameter(3,-2.038793e-10);
   pol41134->SetParError(3,3.212387e-10);
   pol41134->SetParLimits(3,0,0);
   pol41134->SetParameter(4,5.224468e-15);
   pol41134->SetParError(4,2.414167e-14);
   pol41134->SetParLimits(4,0,0);
   pol41134->Draw("Csame");
   
   Double_t _fx1133[12] = {
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
   Double_t _fy1133[12] = {
   6.730566,
   6.972296,
   6.524263,
   6.720832,
   6.670354,
   7.098592,
   7.43915,
   7.609774,
   7.931806,
   8.947429,
   8.896485,
   9.075533};
   Double_t _fex1133[12] = {
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
   Double_t _fey1133[12] = {
   0.153017,
   0.1163297,
   0.1224474,
   0.1300646,
   0.1266868,
   0.1123219,
   0.1231718,
   0.1267619,
   0.1444989,
   0.1590328,
   0.1932173,
   0.2031846};
   gre = new TGraphErrors(12,_fx1133,_fy1133,_fex1133,_fey1133);
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
   
   TH1F *Graph_Graph1133 = new TH1F("Graph_Graph1133","",100,770,5930);
   Graph_Graph1133->SetMinimum(6.114125);
   Graph_Graph1133->SetMaximum(9.566408);
   Graph_Graph1133->SetDirectory(0);
   Graph_Graph1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1133->SetLineColor(ci);
   Graph_Graph1133->GetXaxis()->SetLabelFont(42);
   Graph_Graph1133->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1133->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1133->GetXaxis()->SetTitleFont(42);
   Graph_Graph1133->GetYaxis()->SetLabelFont(42);
   Graph_Graph1133->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1133->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1133->GetYaxis()->SetTitleFont(42);
   Graph_Graph1133->GetZaxis()->SetLabelFont(42);
   Graph_Graph1133->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1133->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1133);
   
   
   TF1 *pol41134 = new TF1("pol4","pol4",1200,5500);
   pol41134->SetFillColor(19);
   pol41134->SetFillStyle(0);
   pol41134->SetLineColor(2);
   pol41134->SetLineWidth(2);
   pol41134->SetChisquare(18.06209);
   pol41134->SetNDF(7);
   pol41134->GetXaxis()->SetLabelFont(42);
   pol41134->GetXaxis()->SetLabelOffset(0.007);
   pol41134->GetXaxis()->SetLabelSize(0.05);
   pol41134->GetXaxis()->SetTitleSize(0.06);
   pol41134->GetXaxis()->SetTitleOffset(0.9);
   pol41134->GetXaxis()->SetTitleFont(42);
   pol41134->GetYaxis()->SetLabelFont(42);
   pol41134->GetYaxis()->SetLabelOffset(0.007);
   pol41134->GetYaxis()->SetLabelSize(0.05);
   pol41134->GetYaxis()->SetTitleSize(0.06);
   pol41134->GetYaxis()->SetTitleOffset(1.25);
   pol41134->GetYaxis()->SetTitleFont(42);
   pol41134->SetParameter(0,7.749028);
   pol41134->SetParError(0,1.656054);
   pol41134->SetParLimits(0,0,0);
   pol41134->SetParameter(1,-0.001237297);
   pol41134->SetParError(1,0.00248526);
   pol41134->SetParLimits(1,0,0);
   pol41134->SetParameter(2,3.568643e-07);
   pol41134->SetParError(2,1.292538e-06);
   pol41134->SetParLimits(2,0,0);
   pol41134->SetParameter(3,2.373083e-11);
   pol41134->SetParError(3,2.785445e-10);
   pol41134->SetParLimits(3,0,0);
   pol41134->SetParameter(4,-7.18453e-15);
   pol41134->SetParError(4,2.117357e-14);
   pol41134->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41134);
   gre->Draw("p");
   
   Double_t _fx1135[12] = {
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
   Double_t _fy1135[12] = {
   6.152925,
   6.663451,
   6.161952,
   6.084379,
   5.987306,
   6.318257,
   6.833899,
   6.366464,
   7.851908,
   7.48981,
   7.526163,
   8.092554};
   Double_t _fex1135[12] = {
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
   Double_t _fey1135[12] = {
   0.2895933,
   0.5086795,
   0.2423882,
   0.215065,
   0.2045561,
   0.2223378,
   0.2496347,
   0.1775793,
   0.1795802,
   0.2028784,
   0.1920314,
   0.2473178};
   gre = new TGraphErrors(12,_fx1135,_fy1135,_fex1135,_fey1135);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1135 = new TH1F("Graph_Graph1135","",100,770,5930);
   Graph_Graph1135->SetMinimum(5.527038);
   Graph_Graph1135->SetMaximum(8.595584);
   Graph_Graph1135->SetDirectory(0);
   Graph_Graph1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1135->SetLineColor(ci);
   Graph_Graph1135->GetXaxis()->SetLabelFont(42);
   Graph_Graph1135->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1135->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1135->GetXaxis()->SetTitleFont(42);
   Graph_Graph1135->GetYaxis()->SetLabelFont(42);
   Graph_Graph1135->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1135->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1135->GetYaxis()->SetTitleFont(42);
   Graph_Graph1135->GetZaxis()->SetLabelFont(42);
   Graph_Graph1135->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1135->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1135);
   
   
   TF1 *pol41136 = new TF1("pol4","pol4",1200,5500);
   pol41136->SetFillColor(19);
   pol41136->SetFillStyle(0);
   pol41136->SetLineColor(2);
   pol41136->SetLineWidth(2);
   pol41136->SetChisquare(25.45839);
   pol41136->SetNDF(7);
   pol41136->GetXaxis()->SetLabelFont(42);
   pol41136->GetXaxis()->SetLabelOffset(0.007);
   pol41136->GetXaxis()->SetLabelSize(0.05);
   pol41136->GetXaxis()->SetTitleSize(0.06);
   pol41136->GetXaxis()->SetTitleOffset(0.9);
   pol41136->GetXaxis()->SetTitleFont(42);
   pol41136->GetYaxis()->SetLabelFont(42);
   pol41136->GetYaxis()->SetLabelOffset(0.007);
   pol41136->GetYaxis()->SetLabelSize(0.05);
   pol41136->GetYaxis()->SetTitleSize(0.06);
   pol41136->GetYaxis()->SetTitleOffset(1.25);
   pol41136->GetYaxis()->SetTitleFont(42);
   pol41136->SetParameter(0,9.133223);
   pol41136->SetParError(0,2.737386);
   pol41136->SetParLimits(0,0,0);
   pol41136->SetParameter(1,-0.004132978);
   pol41136->SetParError(1,0.003943605);
   pol41136->SetParLimits(1,0,0);
   pol41136->SetParameter(2,1.814855e-06);
   pol41136->SetParError(2,1.985609e-06);
   pol41136->SetParLimits(2,0,0);
   pol41136->SetParameter(3,-2.887139e-10);
   pol41136->SetParError(3,4.170117e-10);
   pol41136->SetParLimits(3,0,0);
   pol41136->SetParameter(4,1.603025e-14);
   pol41136->SetParError(4,3.105659e-14);
   pol41136->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41136);
   gre->Draw("p");
   
   TF1 *pol41137 = new TF1("pol4","pol4",0,13000);
   pol41137->SetBit(TF1::kNotDraw);
   pol41137->SetFillColor(19);
   pol41137->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41137->SetMarkerColor(ci);
   pol41137->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol41137->SetLineColor(ci);
   pol41137->SetLineWidth(3);
   pol41137->SetChisquare(25.45839);
   pol41137->SetNDF(7);
   pol41137->GetXaxis()->SetLabelFont(42);
   pol41137->GetXaxis()->SetLabelOffset(0.007);
   pol41137->GetXaxis()->SetLabelSize(0.05);
   pol41137->GetXaxis()->SetTitleSize(0.06);
   pol41137->GetXaxis()->SetTitleOffset(0.9);
   pol41137->GetXaxis()->SetTitleFont(42);
   pol41137->GetYaxis()->SetLabelFont(42);
   pol41137->GetYaxis()->SetLabelOffset(0.007);
   pol41137->GetYaxis()->SetLabelSize(0.05);
   pol41137->GetYaxis()->SetTitleSize(0.06);
   pol41137->GetYaxis()->SetTitleOffset(1.25);
   pol41137->GetYaxis()->SetTitleFont(42);
   pol41137->SetParameter(0,9.133223);
   pol41137->SetParError(0,2.737386);
   pol41137->SetParLimits(0,0,0);
   pol41137->SetParameter(1,-0.004132978);
   pol41137->SetParError(1,0.003943605);
   pol41137->SetParLimits(1,0,0);
   pol41137->SetParameter(2,1.814855e-06);
   pol41137->SetParError(2,1.985609e-06);
   pol41137->SetParLimits(2,0,0);
   pol41137->SetParameter(3,-2.887139e-10);
   pol41137->SetParError(3,4.170117e-10);
   pol41137->SetParLimits(3,0,0);
   pol41137->SetParameter(4,1.603025e-14);
   pol41137->SetParError(4,3.105659e-14);
   pol41137->SetParLimits(4,0,0);
   pol41137->Draw("Csame");
   
   TF1 *pol41138 = new TF1("pol4","pol4",0,13000);
   pol41138->SetBit(TF1::kNotDraw);
   pol41138->SetFillColor(19);
   pol41138->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41138->SetMarkerColor(ci);
   pol41138->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol41138->SetLineColor(ci);
   pol41138->SetLineWidth(3);
   pol41138->SetLineStyle(9);
   pol41138->SetChisquare(18.06209);
   pol41138->SetNDF(7);
   pol41138->GetXaxis()->SetLabelFont(42);
   pol41138->GetXaxis()->SetLabelOffset(0.007);
   pol41138->GetXaxis()->SetLabelSize(0.05);
   pol41138->GetXaxis()->SetTitleSize(0.06);
   pol41138->GetXaxis()->SetTitleOffset(0.9);
   pol41138->GetXaxis()->SetTitleFont(42);
   pol41138->GetYaxis()->SetLabelFont(42);
   pol41138->GetYaxis()->SetLabelOffset(0.007);
   pol41138->GetYaxis()->SetLabelSize(0.05);
   pol41138->GetYaxis()->SetTitleSize(0.06);
   pol41138->GetYaxis()->SetTitleOffset(1.25);
   pol41138->GetYaxis()->SetTitleFont(42);
   pol41138->SetParameter(0,7.749028);
   pol41138->SetParError(0,1.656054);
   pol41138->SetParLimits(0,0,0);
   pol41138->SetParameter(1,-0.001237297);
   pol41138->SetParError(1,0.00248526);
   pol41138->SetParLimits(1,0,0);
   pol41138->SetParameter(2,3.568643e-07);
   pol41138->SetParError(2,1.292538e-06);
   pol41138->SetParLimits(2,0,0);
   pol41138->SetParameter(3,2.373083e-11);
   pol41138->SetParError(3,2.785445e-10);
   pol41138->SetParLimits(3,0,0);
   pol41138->SetParameter(4,-7.18453e-15);
   pol41138->SetParError(4,2.117357e-14);
   pol41138->SetParLimits(4,0,0);
   pol41138->Draw("Csame");
   
   Double_t _fx1137[12] = {
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
   Double_t _fy1137[12] = {
   10.58751,
   10.52833,
   10.50023,
   10.71478,
   10.62119,
   10.54483,
   11.2718,
   11.29499,
   11.87832,
   12.4606,
   12.5296,
   12.89299};
   Double_t _fex1137[12] = {
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
   Double_t _fey1137[12] = {
   0.1360325,
   0.1266413,
   0.1222845,
   0.1406551,
   0.1140113,
   0.110786,
   0.1148324,
   0.1282342,
   0.1261202,
   0.1278207,
   0.2467851,
   0.1902608};
   gre = new TGraphErrors(12,_fx1137,_fy1137,_fex1137,_fey1137);
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
   
   TH1F *Graph_Graph1137 = new TH1F("Graph_Graph1137","",100,770,5930);
   Graph_Graph1137->SetMinimum(10.10741);
   Graph_Graph1137->SetMaximum(13.35378);
   Graph_Graph1137->SetDirectory(0);
   Graph_Graph1137->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1137->SetLineColor(ci);
   Graph_Graph1137->GetXaxis()->SetLabelFont(42);
   Graph_Graph1137->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1137->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1137->GetXaxis()->SetTitleFont(42);
   Graph_Graph1137->GetYaxis()->SetLabelFont(42);
   Graph_Graph1137->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1137->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1137->GetYaxis()->SetTitleFont(42);
   Graph_Graph1137->GetZaxis()->SetLabelFont(42);
   Graph_Graph1137->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1137->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1137);
   
   
   TF1 *pol41138 = new TF1("pol4","pol4",1200,5500);
   pol41138->SetFillColor(19);
   pol41138->SetFillStyle(0);
   pol41138->SetLineColor(2);
   pol41138->SetLineWidth(2);
   pol41138->SetChisquare(11.52953);
   pol41138->SetNDF(7);
   pol41138->GetXaxis()->SetLabelFont(42);
   pol41138->GetXaxis()->SetLabelOffset(0.007);
   pol41138->GetXaxis()->SetLabelSize(0.05);
   pol41138->GetXaxis()->SetTitleSize(0.06);
   pol41138->GetXaxis()->SetTitleOffset(0.9);
   pol41138->GetXaxis()->SetTitleFont(42);
   pol41138->GetYaxis()->SetLabelFont(42);
   pol41138->GetYaxis()->SetLabelOffset(0.007);
   pol41138->GetYaxis()->SetLabelSize(0.05);
   pol41138->GetYaxis()->SetTitleSize(0.06);
   pol41138->GetYaxis()->SetTitleOffset(1.25);
   pol41138->GetYaxis()->SetTitleFont(42);
   pol41138->SetParameter(0,10.70942);
   pol41138->SetParError(0,1.56675);
   pol41138->SetParLimits(0,0,0);
   pol41138->SetParameter(1,9.106517e-05);
   pol41138->SetParError(1,0.002361745);
   pol41138->SetParLimits(1,0,0);
   pol41138->SetParameter(2,-3.470437e-07);
   pol41138->SetParError(2,1.230314e-06);
   pol41138->SetParLimits(2,0,0);
   pol41138->SetParameter(3,1.710575e-10);
   pol41138->SetParError(3,2.648257e-10);
   pol41138->SetParLimits(3,0,0);
   pol41138->SetParameter(4,-1.782003e-14);
   pol41138->SetParError(4,2.006839e-14);
   pol41138->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41138);
   gre->Draw("p");
   
   Double_t _fx1139[12] = {
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
   Double_t _fy1139[12] = {
   10.97638,
   10.25267,
   9.939606,
   10.32707,
   10.30252,
   10.45045,
   10.83496,
   11.03227,
   10.99446,
   11.76985,
   12.57598,
   11.38125};
   Double_t _fex1139[12] = {
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
   Double_t _fey1139[12] = {
   0.2967779,
   0.2268005,
   0.2280788,
   0.2092393,
   0.1899195,
   0.1818133,
   0.190562,
   0.1769776,
   0.1743457,
   0.1907789,
   0.2007319,
   0.2289563};
   gre = new TGraphErrors(12,_fx1139,_fy1139,_fex1139,_fey1139);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1139 = new TH1F("Graph_Graph1139","",100,770,5930);
   Graph_Graph1139->SetMinimum(9.405009);
   Graph_Graph1139->SetMaximum(13.08323);
   Graph_Graph1139->SetDirectory(0);
   Graph_Graph1139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1139->SetLineColor(ci);
   Graph_Graph1139->GetXaxis()->SetLabelFont(42);
   Graph_Graph1139->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1139->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1139->GetXaxis()->SetTitleFont(42);
   Graph_Graph1139->GetYaxis()->SetLabelFont(42);
   Graph_Graph1139->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1139->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1139->GetYaxis()->SetTitleFont(42);
   Graph_Graph1139->GetZaxis()->SetLabelFont(42);
   Graph_Graph1139->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1139->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1139);
   
   
   TF1 *pol41140 = new TF1("pol4","pol4",1200,5500);
   pol41140->SetFillColor(19);
   pol41140->SetFillStyle(0);
   pol41140->SetLineColor(2);
   pol41140->SetLineWidth(2);
   pol41140->SetChisquare(25.13347);
   pol41140->SetNDF(7);
   pol41140->GetXaxis()->SetLabelFont(42);
   pol41140->GetXaxis()->SetLabelOffset(0.007);
   pol41140->GetXaxis()->SetLabelSize(0.05);
   pol41140->GetXaxis()->SetTitleSize(0.06);
   pol41140->GetXaxis()->SetTitleOffset(0.9);
   pol41140->GetXaxis()->SetTitleFont(42);
   pol41140->GetYaxis()->SetLabelFont(42);
   pol41140->GetYaxis()->SetLabelOffset(0.007);
   pol41140->GetYaxis()->SetLabelSize(0.05);
   pol41140->GetYaxis()->SetTitleSize(0.06);
   pol41140->GetYaxis()->SetTitleOffset(1.25);
   pol41140->GetYaxis()->SetTitleFont(42);
   pol41140->SetParameter(0,9.677441);
   pol41140->SetParError(0,2.619359);
   pol41140->SetParLimits(0,0,0);
   pol41140->SetParameter(1,0.00191023);
   pol41140->SetParError(1,0.00379921);
   pol41140->SetParLimits(1,0,0);
   pol41140->SetParameter(2,-1.589705e-06);
   pol41140->SetParError(2,1.916001e-06);
   pol41140->SetParLimits(2,0,0);
   pol41140->SetParameter(3,4.857958e-10);
   pol41140->SetParError(3,4.01885e-10);
   pol41140->SetParLimits(3,0,0);
   pol41140->SetParameter(4,-4.50902e-14);
   pol41140->SetParError(4,2.985119e-14);
   pol41140->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41140);
   gre->Draw("p");
   
   TF1 *pol41141 = new TF1("pol4","pol4",0,13000);
   pol41141->SetBit(TF1::kNotDraw);
   pol41141->SetFillColor(19);
   pol41141->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41141->SetMarkerColor(ci);
   pol41141->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol41141->SetLineColor(ci);
   pol41141->SetLineWidth(3);
   pol41141->SetChisquare(25.13347);
   pol41141->SetNDF(7);
   pol41141->GetXaxis()->SetLabelFont(42);
   pol41141->GetXaxis()->SetLabelOffset(0.007);
   pol41141->GetXaxis()->SetLabelSize(0.05);
   pol41141->GetXaxis()->SetTitleSize(0.06);
   pol41141->GetXaxis()->SetTitleOffset(0.9);
   pol41141->GetXaxis()->SetTitleFont(42);
   pol41141->GetYaxis()->SetLabelFont(42);
   pol41141->GetYaxis()->SetLabelOffset(0.007);
   pol41141->GetYaxis()->SetLabelSize(0.05);
   pol41141->GetYaxis()->SetTitleSize(0.06);
   pol41141->GetYaxis()->SetTitleOffset(1.25);
   pol41141->GetYaxis()->SetTitleFont(42);
   pol41141->SetParameter(0,9.677441);
   pol41141->SetParError(0,2.619359);
   pol41141->SetParLimits(0,0,0);
   pol41141->SetParameter(1,0.00191023);
   pol41141->SetParError(1,0.00379921);
   pol41141->SetParLimits(1,0,0);
   pol41141->SetParameter(2,-1.589705e-06);
   pol41141->SetParError(2,1.916001e-06);
   pol41141->SetParLimits(2,0,0);
   pol41141->SetParameter(3,4.857958e-10);
   pol41141->SetParError(3,4.01885e-10);
   pol41141->SetParLimits(3,0,0);
   pol41141->SetParameter(4,-4.50902e-14);
   pol41141->SetParError(4,2.985119e-14);
   pol41141->SetParLimits(4,0,0);
   pol41141->Draw("Csame");
   
   TF1 *pol41142 = new TF1("pol4","pol4",0,13000);
   pol41142->SetBit(TF1::kNotDraw);
   pol41142->SetFillColor(19);
   pol41142->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41142->SetMarkerColor(ci);
   pol41142->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol41142->SetLineColor(ci);
   pol41142->SetLineWidth(3);
   pol41142->SetLineStyle(9);
   pol41142->SetChisquare(11.52953);
   pol41142->SetNDF(7);
   pol41142->GetXaxis()->SetLabelFont(42);
   pol41142->GetXaxis()->SetLabelOffset(0.007);
   pol41142->GetXaxis()->SetLabelSize(0.05);
   pol41142->GetXaxis()->SetTitleSize(0.06);
   pol41142->GetXaxis()->SetTitleOffset(0.9);
   pol41142->GetXaxis()->SetTitleFont(42);
   pol41142->GetYaxis()->SetLabelFont(42);
   pol41142->GetYaxis()->SetLabelOffset(0.007);
   pol41142->GetYaxis()->SetLabelSize(0.05);
   pol41142->GetYaxis()->SetTitleSize(0.06);
   pol41142->GetYaxis()->SetTitleOffset(1.25);
   pol41142->GetYaxis()->SetTitleFont(42);
   pol41142->SetParameter(0,10.70942);
   pol41142->SetParError(0,1.56675);
   pol41142->SetParLimits(0,0,0);
   pol41142->SetParameter(1,9.106517e-05);
   pol41142->SetParError(1,0.002361745);
   pol41142->SetParLimits(1,0,0);
   pol41142->SetParameter(2,-3.470437e-07);
   pol41142->SetParError(2,1.230314e-06);
   pol41142->SetParLimits(2,0,0);
   pol41142->SetParameter(3,1.710575e-10);
   pol41142->SetParError(3,2.648257e-10);
   pol41142->SetParLimits(3,0,0);
   pol41142->SetParameter(4,-1.782003e-14);
   pol41142->SetParError(4,2.006839e-14);
   pol41142->SetParLimits(4,0,0);
   pol41142->Draw("Csame");
   
   Double_t _fx1141[12] = {
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
   Double_t _fy1141[12] = {
   8.319085,
   8.502574,
   8.291561,
   8.342845,
   8.213885,
   8.615453,
   8.834305,
   9.243886,
   9.43326,
   10.42583,
   10.84296,
   11.6765};
   Double_t _fex1141[12] = {
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
   Double_t _fey1141[12] = {
   0.1418463,
   0.1133755,
   0.1004973,
   0.1031801,
   0.09880115,
   0.09463439,
   0.09926573,
   0.1126333,
   0.1144894,
   0.1241894,
   0.1396057,
   0.1668656};
   gre = new TGraphErrors(12,_fx1141,_fy1141,_fex1141,_fey1141);
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
   
   TH1F *Graph_Graph1141 = new TH1F("Graph_Graph1141","",100,770,5930);
   Graph_Graph1141->SetMinimum(7.742255);
   Graph_Graph1141->SetMaximum(12.2162);
   Graph_Graph1141->SetDirectory(0);
   Graph_Graph1141->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1141->SetLineColor(ci);
   Graph_Graph1141->GetXaxis()->SetLabelFont(42);
   Graph_Graph1141->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1141->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1141->GetXaxis()->SetTitleFont(42);
   Graph_Graph1141->GetYaxis()->SetLabelFont(42);
   Graph_Graph1141->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1141->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1141->GetYaxis()->SetTitleFont(42);
   Graph_Graph1141->GetZaxis()->SetLabelFont(42);
   Graph_Graph1141->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1141->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1141);
   
   
   TF1 *pol41142 = new TF1("pol4","pol4",1200,5500);
   pol41142->SetFillColor(19);
   pol41142->SetFillStyle(0);
   pol41142->SetLineColor(2);
   pol41142->SetLineWidth(2);
   pol41142->SetChisquare(12.34266);
   pol41142->SetNDF(7);
   pol41142->GetXaxis()->SetLabelFont(42);
   pol41142->GetXaxis()->SetLabelOffset(0.007);
   pol41142->GetXaxis()->SetLabelSize(0.05);
   pol41142->GetXaxis()->SetTitleSize(0.06);
   pol41142->GetXaxis()->SetTitleOffset(0.9);
   pol41142->GetXaxis()->SetTitleFont(42);
   pol41142->GetYaxis()->SetLabelFont(42);
   pol41142->GetYaxis()->SetLabelOffset(0.007);
   pol41142->GetYaxis()->SetLabelSize(0.05);
   pol41142->GetYaxis()->SetTitleSize(0.06);
   pol41142->GetYaxis()->SetTitleOffset(1.25);
   pol41142->GetYaxis()->SetTitleFont(42);
   pol41142->SetParameter(0,9.690635);
   pol41142->SetParError(0,1.408027);
   pol41142->SetParLimits(0,0,0);
   pol41142->SetParameter(1,-0.001884084);
   pol41142->SetParError(1,0.0020844);
   pol41142->SetParLimits(1,0,0);
   pol41142->SetParameter(2,8.130312e-07);
   pol41142->SetParError(2,1.07364e-06);
   pol41142->SetParLimits(2,0,0);
   pol41142->SetParameter(3,-1.189958e-10);
   pol41142->SetParError(3,2.296684e-10);
   pol41142->SetParLimits(3,0,0);
   pol41142->SetParameter(4,8.266787e-15);
   pol41142->SetParError(4,1.736532e-14);
   pol41142->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41142);
   gre->Draw("p");
   
   Double_t _fx1143[12] = {
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
   Double_t _fy1143[12] = {
   7.111705,
   7.325677,
   7.368208,
   7.76585,
   7.564715,
   7.109647,
   8.167873,
   7.99221,
   8.454259,
   8.908459,
   9.181436,
   9.571999};
   Double_t _fex1143[12] = {
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
   Double_t _fey1143[12] = {
   0.2687855,
   0.2847747,
   0.1944354,
   0.2044242,
   0.1841079,
   0.1680139,
   0.1836839,
   0.1629257,
   0.1668768,
   0.193464,
   0.1542621,
   0.1677098};
   gre = new TGraphErrors(12,_fx1143,_fy1143,_fex1143,_fey1143);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1143 = new TH1F("Graph_Graph1143","",100,770,5930);
   Graph_Graph1143->SetMinimum(6.55324);
   Graph_Graph1143->SetMaximum(10.02939);
   Graph_Graph1143->SetDirectory(0);
   Graph_Graph1143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1143->SetLineColor(ci);
   Graph_Graph1143->GetXaxis()->SetLabelFont(42);
   Graph_Graph1143->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1143->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1143->GetXaxis()->SetTitleFont(42);
   Graph_Graph1143->GetYaxis()->SetLabelFont(42);
   Graph_Graph1143->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1143->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1143->GetYaxis()->SetTitleFont(42);
   Graph_Graph1143->GetZaxis()->SetLabelFont(42);
   Graph_Graph1143->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1143->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1143);
   
   
   TF1 *pol41144 = new TF1("pol4","pol4",1200,5500);
   pol41144->SetFillColor(19);
   pol41144->SetFillStyle(0);
   pol41144->SetLineColor(2);
   pol41144->SetLineWidth(2);
   pol41144->SetChisquare(16.51882);
   pol41144->SetNDF(7);
   pol41144->GetXaxis()->SetLabelFont(42);
   pol41144->GetXaxis()->SetLabelOffset(0.007);
   pol41144->GetXaxis()->SetLabelSize(0.05);
   pol41144->GetXaxis()->SetTitleSize(0.06);
   pol41144->GetXaxis()->SetTitleOffset(0.9);
   pol41144->GetXaxis()->SetTitleFont(42);
   pol41144->GetYaxis()->SetLabelFont(42);
   pol41144->GetYaxis()->SetLabelOffset(0.007);
   pol41144->GetYaxis()->SetLabelSize(0.05);
   pol41144->GetYaxis()->SetTitleSize(0.06);
   pol41144->GetYaxis()->SetTitleOffset(1.25);
   pol41144->GetYaxis()->SetTitleFont(42);
   pol41144->SetParameter(0,5.868045);
   pol41144->SetParError(0,2.400927);
   pol41144->SetParLimits(0,0,0);
   pol41144->SetParameter(1,0.002220993);
   pol41144->SetParError(1,0.003444481);
   pol41144->SetParLimits(1,0,0);
   pol41144->SetParameter(2,-1.206032e-06);
   pol41144->SetParError(2,1.71941e-06);
   pol41144->SetParLimits(2,0,0);
   pol41144->SetParameter(3,2.955275e-10);
   pol41144->SetParError(3,3.572515e-10);
   pol41144->SetParLimits(3,0,0);
   pol41144->SetParameter(4,-2.320553e-14);
   pol41144->SetParError(4,2.630733e-14);
   pol41144->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41144);
   gre->Draw("p");
   
   TF1 *pol41145 = new TF1("pol4","pol4",0,13000);
   pol41145->SetBit(TF1::kNotDraw);
   pol41145->SetFillColor(19);
   pol41145->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41145->SetMarkerColor(ci);
   pol41145->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol41145->SetLineColor(ci);
   pol41145->SetLineWidth(3);
   pol41145->SetChisquare(16.51882);
   pol41145->SetNDF(7);
   pol41145->GetXaxis()->SetLabelFont(42);
   pol41145->GetXaxis()->SetLabelOffset(0.007);
   pol41145->GetXaxis()->SetLabelSize(0.05);
   pol41145->GetXaxis()->SetTitleSize(0.06);
   pol41145->GetXaxis()->SetTitleOffset(0.9);
   pol41145->GetXaxis()->SetTitleFont(42);
   pol41145->GetYaxis()->SetLabelFont(42);
   pol41145->GetYaxis()->SetLabelOffset(0.007);
   pol41145->GetYaxis()->SetLabelSize(0.05);
   pol41145->GetYaxis()->SetTitleSize(0.06);
   pol41145->GetYaxis()->SetTitleOffset(1.25);
   pol41145->GetYaxis()->SetTitleFont(42);
   pol41145->SetParameter(0,5.868045);
   pol41145->SetParError(0,2.400927);
   pol41145->SetParLimits(0,0,0);
   pol41145->SetParameter(1,0.002220993);
   pol41145->SetParError(1,0.003444481);
   pol41145->SetParLimits(1,0,0);
   pol41145->SetParameter(2,-1.206032e-06);
   pol41145->SetParError(2,1.71941e-06);
   pol41145->SetParLimits(2,0,0);
   pol41145->SetParameter(3,2.955275e-10);
   pol41145->SetParError(3,3.572515e-10);
   pol41145->SetParLimits(3,0,0);
   pol41145->SetParameter(4,-2.320553e-14);
   pol41145->SetParError(4,2.630733e-14);
   pol41145->SetParLimits(4,0,0);
   pol41145->Draw("Csame");
   
   TF1 *pol41146 = new TF1("pol4","pol4",0,13000);
   pol41146->SetBit(TF1::kNotDraw);
   pol41146->SetFillColor(19);
   pol41146->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41146->SetMarkerColor(ci);
   pol41146->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol41146->SetLineColor(ci);
   pol41146->SetLineWidth(3);
   pol41146->SetLineStyle(9);
   pol41146->SetChisquare(12.34266);
   pol41146->SetNDF(7);
   pol41146->GetXaxis()->SetLabelFont(42);
   pol41146->GetXaxis()->SetLabelOffset(0.007);
   pol41146->GetXaxis()->SetLabelSize(0.05);
   pol41146->GetXaxis()->SetTitleSize(0.06);
   pol41146->GetXaxis()->SetTitleOffset(0.9);
   pol41146->GetXaxis()->SetTitleFont(42);
   pol41146->GetYaxis()->SetLabelFont(42);
   pol41146->GetYaxis()->SetLabelOffset(0.007);
   pol41146->GetYaxis()->SetLabelSize(0.05);
   pol41146->GetYaxis()->SetTitleSize(0.06);
   pol41146->GetYaxis()->SetTitleOffset(1.25);
   pol41146->GetYaxis()->SetTitleFont(42);
   pol41146->SetParameter(0,9.690635);
   pol41146->SetParError(0,1.408027);
   pol41146->SetParLimits(0,0,0);
   pol41146->SetParameter(1,-0.001884084);
   pol41146->SetParError(1,0.0020844);
   pol41146->SetParLimits(1,0,0);
   pol41146->SetParameter(2,8.130312e-07);
   pol41146->SetParError(2,1.07364e-06);
   pol41146->SetParLimits(2,0,0);
   pol41146->SetParameter(3,-1.189958e-10);
   pol41146->SetParError(3,2.296684e-10);
   pol41146->SetParLimits(3,0,0);
   pol41146->SetParameter(4,8.266787e-15);
   pol41146->SetParError(4,1.736532e-14);
   pol41146->SetParLimits(4,0,0);
   pol41146->Draw("Csame");
   
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
