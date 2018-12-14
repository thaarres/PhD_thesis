void Signal_mjetl2_mean()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:18:29 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,62.57732,5728.857,114.1237);
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
   
   Double_t _fx1125[13] = {
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
   Double_t _fy1125[13] = {
   81.66974,
   80.83681,
   80.36175,
   79.77815,
   79.44687,
   79.64017,
   80.30016,
   80.52676,
   80.60521,
   79.84188,
   80.11395,
   79.56665,
   80.63749};
   Double_t _fex1125[13] = {
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
   Double_t _fey1125[13] = {
   0.1569047,
   0.1373455,
   0.1246541,
   0.1120869,
   0.1144208,
   0.1069362,
   0.1085872,
   0.1125645,
   0.1198826,
   0.1272836,
   0.1286126,
   0.1698574,
   0.1866851};
   TGraphErrors *gre = new TGraphErrors(13,_fx1125,_fy1125,_fex1125,_fey1125);
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
   
   TH1F *Graph_Graph1125 = new TH1F("Graph_Graph1125","",100,550,5950);
   Graph_Graph1125->SetMinimum(70);
   Graph_Graph1125->SetMaximum(110);
   Graph_Graph1125->SetDirectory(0);
   Graph_Graph1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1125->SetLineColor(ci);
   Graph_Graph1125->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1125->GetXaxis()->SetRange(11,92);
   Graph_Graph1125->GetXaxis()->SetNdivisions(209);
   Graph_Graph1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph1125->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1125->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1125->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph1125->GetYaxis()->SetTitle("mean (GeV)");
   Graph_Graph1125->GetYaxis()->SetNdivisions(504);
   Graph_Graph1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph1125->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1125->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1125->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph1125->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1125->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1125);
   
   
   TF1 *mean_func1126 = new TF1("mean_func","pol4",1000,5500);
   mean_func1126->SetBit(TF1::kNotDraw);
   mean_func1126->SetFillColor(19);
   mean_func1126->SetFillStyle(0);
   mean_func1126->SetLineColor(2);
   mean_func1126->SetLineWidth(2);
   mean_func1126->SetChisquare(29.27101);
   mean_func1126->SetNDF(8);
   mean_func1126->GetXaxis()->SetLabelFont(42);
   mean_func1126->GetXaxis()->SetLabelOffset(0.007);
   mean_func1126->GetXaxis()->SetLabelSize(0.05);
   mean_func1126->GetXaxis()->SetTitleSize(0.06);
   mean_func1126->GetXaxis()->SetTitleOffset(0.9);
   mean_func1126->GetXaxis()->SetTitleFont(42);
   mean_func1126->GetYaxis()->SetLabelFont(42);
   mean_func1126->GetYaxis()->SetLabelOffset(0.007);
   mean_func1126->GetYaxis()->SetLabelSize(0.05);
   mean_func1126->GetYaxis()->SetTitleSize(0.06);
   mean_func1126->GetYaxis()->SetTitleOffset(1.25);
   mean_func1126->GetYaxis()->SetTitleFont(42);
   mean_func1126->SetParameter(0,95.07753);
   mean_func1126->SetParError(0,1.027524);
   mean_func1126->SetParLimits(0,0,0);
   mean_func1126->SetParameter(1,-0.02290655);
   mean_func1126->SetParError(1,0.001632216);
   mean_func1126->SetParLimits(1,0,0);
   mean_func1126->SetParameter(2,1.193698e-05);
   mean_func1126->SetParError(2,8.905477e-07);
   mean_func1126->SetParLimits(2,0,0);
   mean_func1126->SetParameter(3,-2.542934e-09);
   mean_func1126->SetParError(3,1.991797e-10);
   mean_func1126->SetParLimits(3,0,0);
   mean_func1126->SetParameter(4,1.896812e-13);
   mean_func1126->SetParError(4,1.558149e-14);
   mean_func1126->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1126);
   gre->Draw("ap");
   
   Double_t _fx1127[13] = {
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
   Double_t _fy1127[13] = {
   80.8711,
   79.95124,
   79.24483,
   79.15376,
   78.52683,
   78.44991,
   78.39003,
   78.58494,
   78.77202,
   78.61574,
   78.22797,
   78.85542,
   78.78609};
   Double_t _fex1127[13] = {
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
   Double_t _fey1127[13] = {
   0.1525617,
   0.1556936,
   0.1590738,
   0.1535932,
   0.1661203,
   0.1620826,
   0.1764695,
   0.1772189,
   0.1919892,
   0.1947231,
   0.2341739,
   0.2284846,
   0.3236412};
   gre = new TGraphErrors(13,_fx1127,_fy1127,_fex1127,_fey1127);
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
   
   TH1F *Graph_Graph1127 = new TH1F("Graph_Graph1127","",100,550,5950);
   Graph_Graph1127->SetMinimum(77.69081);
   Graph_Graph1127->SetMaximum(81.32665);
   Graph_Graph1127->SetDirectory(0);
   Graph_Graph1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1127->SetLineColor(ci);
   Graph_Graph1127->GetXaxis()->SetLabelFont(42);
   Graph_Graph1127->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1127->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1127->GetXaxis()->SetTitleFont(42);
   Graph_Graph1127->GetYaxis()->SetLabelFont(42);
   Graph_Graph1127->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1127->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1127->GetYaxis()->SetTitleFont(42);
   Graph_Graph1127->GetZaxis()->SetLabelFont(42);
   Graph_Graph1127->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1127->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1127);
   
   
   TF1 *mean_func1128 = new TF1("mean_func","pol4",1000,5500);
   mean_func1128->SetBit(TF1::kNotDraw);
   mean_func1128->SetFillColor(19);
   mean_func1128->SetFillStyle(0);
   mean_func1128->SetLineColor(2);
   mean_func1128->SetLineWidth(2);
   mean_func1128->SetChisquare(7.742263);
   mean_func1128->SetNDF(8);
   mean_func1128->GetXaxis()->SetLabelFont(42);
   mean_func1128->GetXaxis()->SetLabelOffset(0.007);
   mean_func1128->GetXaxis()->SetLabelSize(0.05);
   mean_func1128->GetXaxis()->SetTitleSize(0.06);
   mean_func1128->GetXaxis()->SetTitleOffset(0.9);
   mean_func1128->GetXaxis()->SetTitleFont(42);
   mean_func1128->GetYaxis()->SetLabelFont(42);
   mean_func1128->GetYaxis()->SetLabelOffset(0.007);
   mean_func1128->GetYaxis()->SetLabelSize(0.05);
   mean_func1128->GetYaxis()->SetTitleSize(0.06);
   mean_func1128->GetYaxis()->SetTitleOffset(1.25);
   mean_func1128->GetYaxis()->SetTitleFont(42);
   mean_func1128->SetParameter(0,90.28076);
   mean_func1128->SetParError(0,1.298155);
   mean_func1128->SetParLimits(0,0,0);
   mean_func1128->SetParameter(1,-0.01507443);
   mean_func1128->SetParError(1,0.002170492);
   mean_func1128->SetParLimits(1,0,0);
   mean_func1128->SetParameter(2,6.871941e-06);
   mean_func1128->SetParError(2,1.2335e-06);
   mean_func1128->SetParLimits(2,0,0);
   mean_func1128->SetParameter(3,-1.326854e-09);
   mean_func1128->SetParError(3,2.848458e-10);
   mean_func1128->SetParLimits(3,0,0);
   mean_func1128->SetParameter(4,9.231291e-14);
   mean_func1128->SetParError(4,2.286279e-14);
   mean_func1128->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1128);
   gre->Draw("p");
   
   Double_t _fx1129[13] = {
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
   Double_t _fy1129[13] = {
   81.66974,
   80.83681,
   80.36175,
   79.77815,
   79.44687,
   79.64017,
   80.30016,
   80.52676,
   80.60521,
   79.84188,
   80.11395,
   79.56665,
   80.63749};
   Double_t _fex1129[13] = {
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
   Double_t _fey1129[13] = {
   0.1569047,
   0.1373455,
   0.1246541,
   0.1120869,
   0.1144208,
   0.1069362,
   0.1085872,
   0.1125645,
   0.1198826,
   0.1272836,
   0.1286126,
   0.1698574,
   0.1866851};
   gre = new TGraphErrors(13,_fx1129,_fy1129,_fex1129,_fey1129);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11251129 = new TH1F("Graph_Graph_Graph11251129","",100,550,5950);
   Graph_Graph_Graph11251129->SetMinimum(70);
   Graph_Graph_Graph11251129->SetMaximum(110);
   Graph_Graph_Graph11251129->SetDirectory(0);
   Graph_Graph_Graph11251129->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11251129->SetLineColor(ci);
   Graph_Graph_Graph11251129->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph11251129->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph11251129->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11251129->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11251129->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11251129->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11251129->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11251129->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11251129->GetYaxis()->SetTitle("mean (GeV)");
   Graph_Graph_Graph11251129->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11251129->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11251129->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11251129->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11251129->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11251129->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11251129->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11251129->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11251129->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11251129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11251129);
   
   
   TF1 *mean_func1130 = new TF1("mean_func","pol4",1000,5500);
   mean_func1130->SetBit(TF1::kNotDraw);
   mean_func1130->SetFillColor(19);
   mean_func1130->SetFillStyle(0);
   mean_func1130->SetLineColor(2);
   mean_func1130->SetLineWidth(2);
   mean_func1130->SetChisquare(29.27101);
   mean_func1130->SetNDF(8);
   mean_func1130->GetXaxis()->SetLabelFont(42);
   mean_func1130->GetXaxis()->SetLabelOffset(0.007);
   mean_func1130->GetXaxis()->SetLabelSize(0.05);
   mean_func1130->GetXaxis()->SetTitleSize(0.06);
   mean_func1130->GetXaxis()->SetTitleOffset(0.9);
   mean_func1130->GetXaxis()->SetTitleFont(42);
   mean_func1130->GetYaxis()->SetLabelFont(42);
   mean_func1130->GetYaxis()->SetLabelOffset(0.007);
   mean_func1130->GetYaxis()->SetLabelSize(0.05);
   mean_func1130->GetYaxis()->SetTitleSize(0.06);
   mean_func1130->GetYaxis()->SetTitleOffset(1.25);
   mean_func1130->GetYaxis()->SetTitleFont(42);
   mean_func1130->SetParameter(0,95.07753);
   mean_func1130->SetParError(0,1.027524);
   mean_func1130->SetParLimits(0,0,0);
   mean_func1130->SetParameter(1,-0.02290655);
   mean_func1130->SetParError(1,0.001632216);
   mean_func1130->SetParLimits(1,0,0);
   mean_func1130->SetParameter(2,1.193698e-05);
   mean_func1130->SetParError(2,8.905477e-07);
   mean_func1130->SetParLimits(2,0,0);
   mean_func1130->SetParameter(3,-2.542934e-09);
   mean_func1130->SetParError(3,1.991797e-10);
   mean_func1130->SetParLimits(3,0,0);
   mean_func1130->SetParameter(4,1.896812e-13);
   mean_func1130->SetParError(4,1.558149e-14);
   mean_func1130->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1130);
   gre->Draw("p");
   
   TF1 *mean_func1131 = new TF1("mean_func","pol4",0,13000);
   mean_func1131->SetFillColor(19);
   mean_func1131->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   mean_func1131->SetMarkerColor(ci);
   mean_func1131->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   mean_func1131->SetLineColor(ci);
   mean_func1131->SetLineWidth(3);
   mean_func1131->SetChisquare(29.27101);
   mean_func1131->SetNDF(8);
   mean_func1131->GetXaxis()->SetLabelFont(42);
   mean_func1131->GetXaxis()->SetLabelOffset(0.007);
   mean_func1131->GetXaxis()->SetLabelSize(0.05);
   mean_func1131->GetXaxis()->SetTitleSize(0.06);
   mean_func1131->GetXaxis()->SetTitleOffset(0.9);
   mean_func1131->GetXaxis()->SetTitleFont(42);
   mean_func1131->GetYaxis()->SetLabelFont(42);
   mean_func1131->GetYaxis()->SetLabelOffset(0.007);
   mean_func1131->GetYaxis()->SetLabelSize(0.05);
   mean_func1131->GetYaxis()->SetTitleSize(0.06);
   mean_func1131->GetYaxis()->SetTitleOffset(1.25);
   mean_func1131->GetYaxis()->SetTitleFont(42);
   mean_func1131->SetParameter(0,95.07753);
   mean_func1131->SetParError(0,1.027524);
   mean_func1131->SetParLimits(0,0,0);
   mean_func1131->SetParameter(1,-0.02290655);
   mean_func1131->SetParError(1,0.001632216);
   mean_func1131->SetParLimits(1,0,0);
   mean_func1131->SetParameter(2,1.193698e-05);
   mean_func1131->SetParError(2,8.905477e-07);
   mean_func1131->SetParLimits(2,0,0);
   mean_func1131->SetParameter(3,-2.542934e-09);
   mean_func1131->SetParError(3,1.991797e-10);
   mean_func1131->SetParLimits(3,0,0);
   mean_func1131->SetParameter(4,1.896812e-13);
   mean_func1131->SetParError(4,1.558149e-14);
   mean_func1131->SetParLimits(4,0,0);
   mean_func1131->Draw("Csame");
   
   TF1 *mean_func1132 = new TF1("mean_func","pol4",0,13000);
   mean_func1132->SetFillColor(19);
   mean_func1132->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   mean_func1132->SetMarkerColor(ci);
   mean_func1132->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   mean_func1132->SetLineColor(ci);
   mean_func1132->SetLineWidth(3);
   mean_func1132->SetLineStyle(9);
   mean_func1132->SetChisquare(7.742263);
   mean_func1132->SetNDF(8);
   mean_func1132->GetXaxis()->SetLabelFont(42);
   mean_func1132->GetXaxis()->SetLabelOffset(0.007);
   mean_func1132->GetXaxis()->SetLabelSize(0.05);
   mean_func1132->GetXaxis()->SetTitleSize(0.06);
   mean_func1132->GetXaxis()->SetTitleOffset(0.9);
   mean_func1132->GetXaxis()->SetTitleFont(42);
   mean_func1132->GetYaxis()->SetLabelFont(42);
   mean_func1132->GetYaxis()->SetLabelOffset(0.007);
   mean_func1132->GetYaxis()->SetLabelSize(0.05);
   mean_func1132->GetYaxis()->SetTitleSize(0.06);
   mean_func1132->GetYaxis()->SetTitleOffset(1.25);
   mean_func1132->GetYaxis()->SetTitleFont(42);
   mean_func1132->SetParameter(0,90.28076);
   mean_func1132->SetParError(0,1.298155);
   mean_func1132->SetParLimits(0,0,0);
   mean_func1132->SetParameter(1,-0.01507443);
   mean_func1132->SetParError(1,0.002170492);
   mean_func1132->SetParLimits(1,0,0);
   mean_func1132->SetParameter(2,6.871941e-06);
   mean_func1132->SetParError(2,1.2335e-06);
   mean_func1132->SetParLimits(2,0,0);
   mean_func1132->SetParameter(3,-1.326854e-09);
   mean_func1132->SetParError(3,2.848458e-10);
   mean_func1132->SetParLimits(3,0,0);
   mean_func1132->SetParameter(4,9.231291e-14);
   mean_func1132->SetParError(4,2.286279e-14);
   mean_func1132->SetParLimits(4,0,0);
   mean_func1132->Draw("Csame");
   
   Double_t _fx1131[13] = {
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
   Double_t _fy1131[13] = {
   80.89286,
   80.32979,
   79.98813,
   79.54677,
   79.49747,
   79.30966,
   79.4678,
   79.62021,
   79.57009,
   79.79545,
   79.38268,
   79.03948,
   79.8388};
   Double_t _fex1131[13] = {
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
   Double_t _fey1131[13] = {
   0.04413535,
   0.04105759,
   0.04127463,
   0.04048934,
   0.03934806,
   0.03873995,
   0.03946699,
   0.0403688,
   0.04200681,
   0.04393048,
   0.04879324,
   0.1464024,
   0.1413116};
   gre = new TGraphErrors(13,_fx1131,_fy1131,_fex1131,_fey1131);
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
   
   TH1F *Graph_Graph1131 = new TH1F("Graph_Graph1131","",100,550,5950);
   Graph_Graph1131->SetMinimum(78.68868);
   Graph_Graph1131->SetMaximum(81.14138);
   Graph_Graph1131->SetDirectory(0);
   Graph_Graph1131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1131->SetLineColor(ci);
   Graph_Graph1131->GetXaxis()->SetLabelFont(42);
   Graph_Graph1131->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1131->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1131->GetXaxis()->SetTitleFont(42);
   Graph_Graph1131->GetYaxis()->SetLabelFont(42);
   Graph_Graph1131->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1131->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1131->GetYaxis()->SetTitleFont(42);
   Graph_Graph1131->GetZaxis()->SetLabelFont(42);
   Graph_Graph1131->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1131->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1131);
   
   
   TF1 *mean_func1132 = new TF1("mean_func","pol4",1000,5500);
   mean_func1132->SetBit(TF1::kNotDraw);
   mean_func1132->SetFillColor(19);
   mean_func1132->SetFillStyle(0);
   mean_func1132->SetLineColor(2);
   mean_func1132->SetLineWidth(2);
   mean_func1132->SetChisquare(47.12329);
   mean_func1132->SetNDF(8);
   mean_func1132->GetXaxis()->SetLabelFont(42);
   mean_func1132->GetXaxis()->SetLabelOffset(0.007);
   mean_func1132->GetXaxis()->SetLabelSize(0.05);
   mean_func1132->GetXaxis()->SetTitleSize(0.06);
   mean_func1132->GetXaxis()->SetTitleOffset(0.9);
   mean_func1132->GetXaxis()->SetTitleFont(42);
   mean_func1132->GetYaxis()->SetLabelFont(42);
   mean_func1132->GetYaxis()->SetLabelOffset(0.007);
   mean_func1132->GetYaxis()->SetLabelSize(0.05);
   mean_func1132->GetYaxis()->SetTitleSize(0.06);
   mean_func1132->GetYaxis()->SetTitleOffset(1.25);
   mean_func1132->GetYaxis()->SetTitleFont(42);
   mean_func1132->SetParameter(0,88.16136);
   mean_func1132->SetParError(0,0.354083);
   mean_func1132->SetParLimits(0,0,0);
   mean_func1132->SetParameter(1,-0.01184536);
   mean_func1132->SetParError(1,0.0005890122);
   mean_func1132->SetParLimits(1,0,0);
   mean_func1132->SetParameter(2,5.666411e-06);
   mean_func1132->SetParError(2,3.353682e-07);
   mean_func1132->SetParLimits(2,0,0);
   mean_func1132->SetParameter(3,-1.12941e-09);
   mean_func1132->SetParError(3,7.814887e-11);
   mean_func1132->SetParLimits(3,0,0);
   mean_func1132->SetParameter(4,7.992578e-14);
   mean_func1132->SetParError(4,6.372347e-15);
   mean_func1132->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1132);
   gre->Draw("p");
   
   Double_t _fx1133[13] = {
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
   Double_t _fy1133[13] = {
   82.07039,
   81.46939,
   80.98093,
   80.54184,
   80.289,
   80.34574,
   80.84542,
   81.12649,
   80.97265,
   80.92398,
   80.68696,
   80.81124,
   80.48615};
   Double_t _fex1133[13] = {
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
   Double_t _fey1133[13] = {
   0.04585026,
   0.04239588,
   0.04279231,
   0.04407304,
   0.0308322,
   0.03843551,
   0.03664713,
   0.03640739,
   0.02850039,
   0.02804315,
   0.02723881,
   0.08559549,
   0.07952004};
   gre = new TGraphErrors(13,_fx1133,_fy1133,_fex1133,_fey1133);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1133 = new TH1F("Graph_Graph1133","",100,550,5950);
   Graph_Graph1133->SetMinimum(80.07236);
   Graph_Graph1133->SetMaximum(82.30205);
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
   
   
   TF1 *mean_func1134 = new TF1("mean_func","pol4",1000,5500);
   mean_func1134->SetBit(TF1::kNotDraw);
   mean_func1134->SetFillColor(19);
   mean_func1134->SetFillStyle(0);
   mean_func1134->SetLineColor(2);
   mean_func1134->SetLineWidth(2);
   mean_func1134->SetChisquare(140.7569);
   mean_func1134->SetNDF(8);
   mean_func1134->GetXaxis()->SetLabelFont(42);
   mean_func1134->GetXaxis()->SetLabelOffset(0.007);
   mean_func1134->GetXaxis()->SetLabelSize(0.05);
   mean_func1134->GetXaxis()->SetTitleSize(0.06);
   mean_func1134->GetXaxis()->SetTitleOffset(0.9);
   mean_func1134->GetXaxis()->SetTitleFont(42);
   mean_func1134->GetYaxis()->SetLabelFont(42);
   mean_func1134->GetYaxis()->SetLabelOffset(0.007);
   mean_func1134->GetYaxis()->SetLabelSize(0.05);
   mean_func1134->GetYaxis()->SetTitleSize(0.06);
   mean_func1134->GetYaxis()->SetTitleOffset(1.25);
   mean_func1134->GetYaxis()->SetTitleFont(42);
   mean_func1134->SetParameter(0,91.65219);
   mean_func1134->SetParError(0,0.3073382);
   mean_func1134->SetParLimits(0,0,0);
   mean_func1134->SetParameter(1,-0.01599743);
   mean_func1134->SetParError(1,0.0004901672);
   mean_func1134->SetParLimits(1,0,0);
   mean_func1134->SetParameter(2,7.972145e-06);
   mean_func1134->SetParError(2,2.680871e-07);
   mean_func1134->SetParLimits(2,0,0);
   mean_func1134->SetParameter(3,-1.622883e-09);
   mean_func1134->SetParError(3,6.021863e-11);
   mean_func1134->SetParLimits(3,0,0);
   mean_func1134->SetParameter(4,1.156886e-13);
   mean_func1134->SetParError(4,4.748194e-15);
   mean_func1134->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1134);
   gre->Draw("p");
   
   TF1 *mean_func1135 = new TF1("mean_func","pol4",0,13000);
   mean_func1135->SetFillColor(19);
   mean_func1135->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   mean_func1135->SetMarkerColor(ci);
   mean_func1135->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   mean_func1135->SetLineColor(ci);
   mean_func1135->SetLineWidth(3);
   mean_func1135->SetChisquare(140.7569);
   mean_func1135->SetNDF(8);
   mean_func1135->GetXaxis()->SetLabelFont(42);
   mean_func1135->GetXaxis()->SetLabelOffset(0.007);
   mean_func1135->GetXaxis()->SetLabelSize(0.05);
   mean_func1135->GetXaxis()->SetTitleSize(0.06);
   mean_func1135->GetXaxis()->SetTitleOffset(0.9);
   mean_func1135->GetXaxis()->SetTitleFont(42);
   mean_func1135->GetYaxis()->SetLabelFont(42);
   mean_func1135->GetYaxis()->SetLabelOffset(0.007);
   mean_func1135->GetYaxis()->SetLabelSize(0.05);
   mean_func1135->GetYaxis()->SetTitleSize(0.06);
   mean_func1135->GetYaxis()->SetTitleOffset(1.25);
   mean_func1135->GetYaxis()->SetTitleFont(42);
   mean_func1135->SetParameter(0,91.65219);
   mean_func1135->SetParError(0,0.3073382);
   mean_func1135->SetParLimits(0,0,0);
   mean_func1135->SetParameter(1,-0.01599743);
   mean_func1135->SetParError(1,0.0004901672);
   mean_func1135->SetParLimits(1,0,0);
   mean_func1135->SetParameter(2,7.972145e-06);
   mean_func1135->SetParError(2,2.680871e-07);
   mean_func1135->SetParLimits(2,0,0);
   mean_func1135->SetParameter(3,-1.622883e-09);
   mean_func1135->SetParError(3,6.021863e-11);
   mean_func1135->SetParLimits(3,0,0);
   mean_func1135->SetParameter(4,1.156886e-13);
   mean_func1135->SetParError(4,4.748194e-15);
   mean_func1135->SetParLimits(4,0,0);
   mean_func1135->Draw("Csame");
   
   TF1 *mean_func1136 = new TF1("mean_func","pol4",0,13000);
   mean_func1136->SetFillColor(19);
   mean_func1136->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   mean_func1136->SetMarkerColor(ci);
   mean_func1136->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   mean_func1136->SetLineColor(ci);
   mean_func1136->SetLineWidth(3);
   mean_func1136->SetLineStyle(9);
   mean_func1136->SetChisquare(47.12329);
   mean_func1136->SetNDF(8);
   mean_func1136->GetXaxis()->SetLabelFont(42);
   mean_func1136->GetXaxis()->SetLabelOffset(0.007);
   mean_func1136->GetXaxis()->SetLabelSize(0.05);
   mean_func1136->GetXaxis()->SetTitleSize(0.06);
   mean_func1136->GetXaxis()->SetTitleOffset(0.9);
   mean_func1136->GetXaxis()->SetTitleFont(42);
   mean_func1136->GetYaxis()->SetLabelFont(42);
   mean_func1136->GetYaxis()->SetLabelOffset(0.007);
   mean_func1136->GetYaxis()->SetLabelSize(0.05);
   mean_func1136->GetYaxis()->SetTitleSize(0.06);
   mean_func1136->GetYaxis()->SetTitleOffset(1.25);
   mean_func1136->GetYaxis()->SetTitleFont(42);
   mean_func1136->SetParameter(0,88.16136);
   mean_func1136->SetParError(0,0.354083);
   mean_func1136->SetParLimits(0,0,0);
   mean_func1136->SetParameter(1,-0.01184536);
   mean_func1136->SetParError(1,0.0005890122);
   mean_func1136->SetParLimits(1,0,0);
   mean_func1136->SetParameter(2,5.666411e-06);
   mean_func1136->SetParError(2,3.353682e-07);
   mean_func1136->SetParLimits(2,0,0);
   mean_func1136->SetParameter(3,-1.12941e-09);
   mean_func1136->SetParError(3,7.814887e-11);
   mean_func1136->SetParLimits(3,0,0);
   mean_func1136->SetParameter(4,7.992578e-14);
   mean_func1136->SetParError(4,6.372347e-15);
   mean_func1136->SetParLimits(4,0,0);
   mean_func1136->Draw("Csame");
   
   Double_t _fx1135[13] = {
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
   Double_t _fy1135[13] = {
   85.22595,
   84.35787,
   83.70712,
   82.6477,
   83.07128,
   82.85423,
   82.72197,
   82.99536,
   83.32754,
   82.66557,
   82.87965,
   83.0222,
   83.1924};
   Double_t _fex1135[13] = {
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
   Double_t _fey1135[13] = {
   0.1474594,
   0.1485285,
   0.1500991,
   0.1424434,
   0.1568381,
   0.1495612,
   0.1525646,
   0.1634419,
   0.2590686,
   0.2041229,
   0.2243344,
   0.2402613,
   0.2237248};
   gre = new TGraphErrors(13,_fx1135,_fy1135,_fex1135,_fey1135);
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
   
   TH1F *Graph_Graph1135 = new TH1F("Graph_Graph1135","",100,550,5950);
   Graph_Graph1135->SetMinimum(82.17025);
   Graph_Graph1135->SetMaximum(85.66461);
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
   
   
   TF1 *mean_func1136 = new TF1("mean_func","pol4",1000,5500);
   mean_func1136->SetBit(TF1::kNotDraw);
   mean_func1136->SetFillColor(19);
   mean_func1136->SetFillStyle(0);
   mean_func1136->SetLineColor(2);
   mean_func1136->SetLineWidth(2);
   mean_func1136->SetChisquare(20.40168);
   mean_func1136->SetNDF(8);
   mean_func1136->GetXaxis()->SetLabelFont(42);
   mean_func1136->GetXaxis()->SetLabelOffset(0.007);
   mean_func1136->GetXaxis()->SetLabelSize(0.05);
   mean_func1136->GetXaxis()->SetTitleSize(0.06);
   mean_func1136->GetXaxis()->SetTitleOffset(0.9);
   mean_func1136->GetXaxis()->SetTitleFont(42);
   mean_func1136->GetYaxis()->SetLabelFont(42);
   mean_func1136->GetYaxis()->SetLabelOffset(0.007);
   mean_func1136->GetYaxis()->SetLabelSize(0.05);
   mean_func1136->GetYaxis()->SetTitleSize(0.06);
   mean_func1136->GetYaxis()->SetTitleOffset(1.25);
   mean_func1136->GetYaxis()->SetTitleFont(42);
   mean_func1136->SetParameter(0,96.43559);
   mean_func1136->SetParError(0,1.243233);
   mean_func1136->SetParLimits(0,0,0);
   mean_func1136->SetParameter(1,-0.01823279);
   mean_func1136->SetParError(1,0.00206722);
   mean_func1136->SetParLimits(1,0,0);
   mean_func1136->SetParameter(2,8.621559e-06);
   mean_func1136->SetParError(2,1.165156e-06);
   mean_func1136->SetParLimits(2,0,0);
   mean_func1136->SetParameter(3,-1.71024e-09);
   mean_func1136->SetParError(3,2.659023e-10);
   mean_func1136->SetParLimits(3,0,0);
   mean_func1136->SetParameter(4,1.211689e-13);
   mean_func1136->SetParError(4,2.103829e-14);
   mean_func1136->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1136);
   gre->Draw("p");
   
   Double_t _fx1137[13] = {
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
   Double_t _fy1137[13] = {
   85.93948,
   85.00532,
   84.3371,
   84.05194,
   83.88532,
   83.84136,
   84.38721,
   84.59243,
   84.52144,
   84.5375,
   84.30329,
   84.25799,
   84.4152};
   Double_t _fex1137[13] = {
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
   Double_t _fey1137[13] = {
   0.1454152,
   0.1292482,
   0.124255,
   0.1263602,
   0.1168694,
   0.1178006,
   0.1125365,
   0.117855,
   0.1258549,
   0.1324323,
   0.1400335,
   0.1415963,
   0.1463303};
   gre = new TGraphErrors(13,_fx1137,_fy1137,_fex1137,_fey1137);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1137 = new TH1F("Graph_Graph1137","",100,550,5950);
   Graph_Graph1137->SetMinimum(83.48743);
   Graph_Graph1137->SetMaximum(86.32103);
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
   
   
   TF1 *mean_func1138 = new TF1("mean_func","pol4",1000,5500);
   mean_func1138->SetBit(TF1::kNotDraw);
   mean_func1138->SetFillColor(19);
   mean_func1138->SetFillStyle(0);
   mean_func1138->SetLineColor(2);
   mean_func1138->SetLineWidth(2);
   mean_func1138->SetChisquare(9.592436);
   mean_func1138->SetNDF(8);
   mean_func1138->GetXaxis()->SetLabelFont(42);
   mean_func1138->GetXaxis()->SetLabelOffset(0.007);
   mean_func1138->GetXaxis()->SetLabelSize(0.05);
   mean_func1138->GetXaxis()->SetTitleSize(0.06);
   mean_func1138->GetXaxis()->SetTitleOffset(0.9);
   mean_func1138->GetXaxis()->SetTitleFont(42);
   mean_func1138->GetYaxis()->SetLabelFont(42);
   mean_func1138->GetYaxis()->SetLabelOffset(0.007);
   mean_func1138->GetYaxis()->SetLabelSize(0.05);
   mean_func1138->GetYaxis()->SetTitleSize(0.06);
   mean_func1138->GetYaxis()->SetTitleOffset(1.25);
   mean_func1138->GetYaxis()->SetTitleFont(42);
   mean_func1138->SetParameter(0,96.71255);
   mean_func1138->SetParError(0,0.9988644);
   mean_func1138->SetParLimits(0,0,0);
   mean_func1138->SetParameter(1,-0.01823306);
   mean_func1138->SetParError(1,0.00159684);
   mean_func1138->SetParLimits(1,0,0);
   mean_func1138->SetParameter(2,9.086086e-06);
   mean_func1138->SetParError(2,8.710054e-07);
   mean_func1138->SetParLimits(2,0,0);
   mean_func1138->SetParameter(3,-1.850791e-09);
   mean_func1138->SetParError(3,1.940464e-10);
   mean_func1138->SetParLimits(3,0,0);
   mean_func1138->SetParameter(4,1.323849e-13);
   mean_func1138->SetParError(4,1.508888e-14);
   mean_func1138->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1138);
   gre->Draw("p");
   
   TF1 *mean_func1139 = new TF1("mean_func","pol4",0,13000);
   mean_func1139->SetFillColor(19);
   mean_func1139->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   mean_func1139->SetMarkerColor(ci);
   mean_func1139->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   mean_func1139->SetLineColor(ci);
   mean_func1139->SetLineWidth(3);
   mean_func1139->SetChisquare(9.592436);
   mean_func1139->SetNDF(8);
   mean_func1139->GetXaxis()->SetLabelFont(42);
   mean_func1139->GetXaxis()->SetLabelOffset(0.007);
   mean_func1139->GetXaxis()->SetLabelSize(0.05);
   mean_func1139->GetXaxis()->SetTitleSize(0.06);
   mean_func1139->GetXaxis()->SetTitleOffset(0.9);
   mean_func1139->GetXaxis()->SetTitleFont(42);
   mean_func1139->GetYaxis()->SetLabelFont(42);
   mean_func1139->GetYaxis()->SetLabelOffset(0.007);
   mean_func1139->GetYaxis()->SetLabelSize(0.05);
   mean_func1139->GetYaxis()->SetTitleSize(0.06);
   mean_func1139->GetYaxis()->SetTitleOffset(1.25);
   mean_func1139->GetYaxis()->SetTitleFont(42);
   mean_func1139->SetParameter(0,96.71255);
   mean_func1139->SetParError(0,0.9988644);
   mean_func1139->SetParLimits(0,0,0);
   mean_func1139->SetParameter(1,-0.01823306);
   mean_func1139->SetParError(1,0.00159684);
   mean_func1139->SetParLimits(1,0,0);
   mean_func1139->SetParameter(2,9.086086e-06);
   mean_func1139->SetParError(2,8.710054e-07);
   mean_func1139->SetParLimits(2,0,0);
   mean_func1139->SetParameter(3,-1.850791e-09);
   mean_func1139->SetParError(3,1.940464e-10);
   mean_func1139->SetParLimits(3,0,0);
   mean_func1139->SetParameter(4,1.323849e-13);
   mean_func1139->SetParError(4,1.508888e-14);
   mean_func1139->SetParLimits(4,0,0);
   mean_func1139->Draw("Csame");
   
   TF1 *mean_func1140 = new TF1("mean_func","pol4",0,13000);
   mean_func1140->SetFillColor(19);
   mean_func1140->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   mean_func1140->SetMarkerColor(ci);
   mean_func1140->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   mean_func1140->SetLineColor(ci);
   mean_func1140->SetLineWidth(3);
   mean_func1140->SetLineStyle(9);
   mean_func1140->SetChisquare(20.40168);
   mean_func1140->SetNDF(8);
   mean_func1140->GetXaxis()->SetLabelFont(42);
   mean_func1140->GetXaxis()->SetLabelOffset(0.007);
   mean_func1140->GetXaxis()->SetLabelSize(0.05);
   mean_func1140->GetXaxis()->SetTitleSize(0.06);
   mean_func1140->GetXaxis()->SetTitleOffset(0.9);
   mean_func1140->GetXaxis()->SetTitleFont(42);
   mean_func1140->GetYaxis()->SetLabelFont(42);
   mean_func1140->GetYaxis()->SetLabelOffset(0.007);
   mean_func1140->GetYaxis()->SetLabelSize(0.05);
   mean_func1140->GetYaxis()->SetTitleSize(0.06);
   mean_func1140->GetYaxis()->SetTitleOffset(1.25);
   mean_func1140->GetYaxis()->SetTitleFont(42);
   mean_func1140->SetParameter(0,96.43559);
   mean_func1140->SetParError(0,1.243233);
   mean_func1140->SetParLimits(0,0,0);
   mean_func1140->SetParameter(1,-0.01823279);
   mean_func1140->SetParError(1,0.00206722);
   mean_func1140->SetParLimits(1,0,0);
   mean_func1140->SetParameter(2,8.621559e-06);
   mean_func1140->SetParError(2,1.165156e-06);
   mean_func1140->SetParLimits(2,0,0);
   mean_func1140->SetParameter(3,-1.71024e-09);
   mean_func1140->SetParError(3,2.659023e-10);
   mean_func1140->SetParLimits(3,0,0);
   mean_func1140->SetParameter(4,1.211689e-13);
   mean_func1140->SetParError(4,2.103829e-14);
   mean_func1140->SetParLimits(4,0,0);
   mean_func1140->Draw("Csame");
   
   Double_t _fx1139[13] = {
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
   Double_t _fy1139[13] = {
   91.46846,
   90.68921,
   90.32336,
   89.96038,
   89.69219,
   89.54551,
   89.52882,
   89.63296,
   89.7273,
   89.55677,
   89.80869,
   89.93352,
   89.94142};
   Double_t _fex1139[13] = {
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
   Double_t _fey1139[13] = {
   0.04248879,
   0.03710154,
   0.0364944,
   0.03738847,
   0.03860594,
   0.03837203,
   0.03918336,
   0.04444953,
   0.04709329,
   0.05416653,
   0.1830227,
   0.2105432,
   0.1955226};
   gre = new TGraphErrors(13,_fx1139,_fy1139,_fex1139,_fey1139);
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
   
   TH1F *Graph_Graph1139 = new TH1F("Graph_Graph1139","",100,550,5950);
   Graph_Graph1139->SetMinimum(89.28751);
   Graph_Graph1139->SetMaximum(91.71308);
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
   
   
   TF1 *mean_func1140 = new TF1("mean_func","pol4",1000,5500);
   mean_func1140->SetBit(TF1::kNotDraw);
   mean_func1140->SetFillColor(19);
   mean_func1140->SetFillStyle(0);
   mean_func1140->SetLineColor(2);
   mean_func1140->SetLineWidth(2);
   mean_func1140->SetChisquare(16.5775);
   mean_func1140->SetNDF(8);
   mean_func1140->GetXaxis()->SetLabelFont(42);
   mean_func1140->GetXaxis()->SetLabelOffset(0.007);
   mean_func1140->GetXaxis()->SetLabelSize(0.05);
   mean_func1140->GetXaxis()->SetTitleSize(0.06);
   mean_func1140->GetXaxis()->SetTitleOffset(0.9);
   mean_func1140->GetXaxis()->SetTitleFont(42);
   mean_func1140->GetYaxis()->SetLabelFont(42);
   mean_func1140->GetYaxis()->SetLabelOffset(0.007);
   mean_func1140->GetYaxis()->SetLabelSize(0.05);
   mean_func1140->GetYaxis()->SetTitleSize(0.06);
   mean_func1140->GetYaxis()->SetTitleOffset(1.25);
   mean_func1140->GetYaxis()->SetTitleFont(42);
   mean_func1140->SetParameter(0,98.96069);
   mean_func1140->SetParError(0,0.395386);
   mean_func1140->SetParLimits(0,0,0);
   mean_func1140->SetParameter(1,-0.0120723);
   mean_func1140->SetParError(1,0.0006816474);
   mean_func1140->SetParLimits(1,0,0);
   mean_func1140->SetParameter(2,5.566212e-06);
   mean_func1140->SetParError(2,4.02785e-07);
   mean_func1140->SetParLimits(2,0,0);
   mean_func1140->SetParameter(3,-1.092255e-09);
   mean_func1140->SetParError(3,9.692884e-11);
   mean_func1140->SetParLimits(3,0,0);
   mean_func1140->SetParameter(4,7.742398e-14);
   mean_func1140->SetParError(4,8.083454e-15);
   mean_func1140->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1140);
   gre->Draw("p");
   
   Double_t _fx1141[13] = {
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
   Double_t _fy1141[13] = {
   92.75786,
   92.01109,
   91.40749,
   91.2157,
   90.86337,
   90.83214,
   91.03894,
   91.37893,
   91.37146,
   91.27611,
   91.21,
   91.29031,
   91.298};
   Double_t _fex1141[13] = {
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
   Double_t _fey1141[13] = {
   0.03857747,
   0.03633071,
   0.0369585,
   0.03535767,
   0.03659085,
   0.03461903,
   0.03424442,
   0.03710619,
   0.03850814,
   0.04249043,
   0.1163708,
   0.1207004,
   0.1236866};
   gre = new TGraphErrors(13,_fx1141,_fy1141,_fex1141,_fey1141);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1141 = new TH1F("Graph_Graph1141","",100,550,5950);
   Graph_Graph1141->SetMinimum(90.59763);
   Graph_Graph1141->SetMaximum(92.99633);
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
   
   
   TF1 *mean_func1142 = new TF1("mean_func","pol4",1000,5500);
   mean_func1142->SetBit(TF1::kNotDraw);
   mean_func1142->SetFillColor(19);
   mean_func1142->SetFillStyle(0);
   mean_func1142->SetLineColor(2);
   mean_func1142->SetLineWidth(2);
   mean_func1142->SetChisquare(32.34981);
   mean_func1142->SetNDF(8);
   mean_func1142->GetXaxis()->SetLabelFont(42);
   mean_func1142->GetXaxis()->SetLabelOffset(0.007);
   mean_func1142->GetXaxis()->SetLabelSize(0.05);
   mean_func1142->GetXaxis()->SetTitleSize(0.06);
   mean_func1142->GetXaxis()->SetTitleOffset(0.9);
   mean_func1142->GetXaxis()->SetTitleFont(42);
   mean_func1142->GetYaxis()->SetLabelFont(42);
   mean_func1142->GetYaxis()->SetLabelOffset(0.007);
   mean_func1142->GetYaxis()->SetLabelSize(0.05);
   mean_func1142->GetYaxis()->SetTitleSize(0.06);
   mean_func1142->GetYaxis()->SetTitleOffset(1.25);
   mean_func1142->GetYaxis()->SetTitleFont(42);
   mean_func1142->SetParameter(0,102.374);
   mean_func1142->SetParError(0,0.3397165);
   mean_func1142->SetParLimits(0,0,0);
   mean_func1142->SetParameter(1,-0.01593669);
   mean_func1142->SetParError(1,0.0005769133);
   mean_func1142->SetParLimits(1,0,0);
   mean_func1142->SetParameter(2,7.796732e-06);
   mean_func1142->SetParError(2,3.34953e-07);
   mean_func1142->SetParLimits(2,0,0);
   mean_func1142->SetParameter(3,-1.577127e-09);
   mean_func1142->SetParError(3,7.921952e-11);
   mean_func1142->SetParLimits(3,0,0);
   mean_func1142->SetParameter(4,1.128456e-13);
   mean_func1142->SetParError(4,6.496852e-15);
   mean_func1142->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(mean_func1142);
   gre->Draw("p");
   
   TF1 *mean_func1143 = new TF1("mean_func","pol4",0,13000);
   mean_func1143->SetFillColor(19);
   mean_func1143->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   mean_func1143->SetMarkerColor(ci);
   mean_func1143->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   mean_func1143->SetLineColor(ci);
   mean_func1143->SetLineWidth(3);
   mean_func1143->SetChisquare(32.34981);
   mean_func1143->SetNDF(8);
   mean_func1143->GetXaxis()->SetLabelFont(42);
   mean_func1143->GetXaxis()->SetLabelOffset(0.007);
   mean_func1143->GetXaxis()->SetLabelSize(0.05);
   mean_func1143->GetXaxis()->SetTitleSize(0.06);
   mean_func1143->GetXaxis()->SetTitleOffset(0.9);
   mean_func1143->GetXaxis()->SetTitleFont(42);
   mean_func1143->GetYaxis()->SetLabelFont(42);
   mean_func1143->GetYaxis()->SetLabelOffset(0.007);
   mean_func1143->GetYaxis()->SetLabelSize(0.05);
   mean_func1143->GetYaxis()->SetTitleSize(0.06);
   mean_func1143->GetYaxis()->SetTitleOffset(1.25);
   mean_func1143->GetYaxis()->SetTitleFont(42);
   mean_func1143->SetParameter(0,102.374);
   mean_func1143->SetParError(0,0.3397165);
   mean_func1143->SetParLimits(0,0,0);
   mean_func1143->SetParameter(1,-0.01593669);
   mean_func1143->SetParError(1,0.0005769133);
   mean_func1143->SetParLimits(1,0,0);
   mean_func1143->SetParameter(2,7.796732e-06);
   mean_func1143->SetParError(2,3.34953e-07);
   mean_func1143->SetParLimits(2,0,0);
   mean_func1143->SetParameter(3,-1.577127e-09);
   mean_func1143->SetParError(3,7.921952e-11);
   mean_func1143->SetParLimits(3,0,0);
   mean_func1143->SetParameter(4,1.128456e-13);
   mean_func1143->SetParError(4,6.496852e-15);
   mean_func1143->SetParLimits(4,0,0);
   mean_func1143->Draw("Csame");
   
   TF1 *mean_func1144 = new TF1("mean_func","pol4",0,13000);
   mean_func1144->SetFillColor(19);
   mean_func1144->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   mean_func1144->SetMarkerColor(ci);
   mean_func1144->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   mean_func1144->SetLineColor(ci);
   mean_func1144->SetLineWidth(3);
   mean_func1144->SetLineStyle(9);
   mean_func1144->SetChisquare(16.5775);
   mean_func1144->SetNDF(8);
   mean_func1144->GetXaxis()->SetLabelFont(42);
   mean_func1144->GetXaxis()->SetLabelOffset(0.007);
   mean_func1144->GetXaxis()->SetLabelSize(0.05);
   mean_func1144->GetXaxis()->SetTitleSize(0.06);
   mean_func1144->GetXaxis()->SetTitleOffset(0.9);
   mean_func1144->GetXaxis()->SetTitleFont(42);
   mean_func1144->GetYaxis()->SetLabelFont(42);
   mean_func1144->GetYaxis()->SetLabelOffset(0.007);
   mean_func1144->GetYaxis()->SetLabelSize(0.05);
   mean_func1144->GetYaxis()->SetTitleSize(0.06);
   mean_func1144->GetYaxis()->SetTitleOffset(1.25);
   mean_func1144->GetYaxis()->SetTitleFont(42);
   mean_func1144->SetParameter(0,98.96069);
   mean_func1144->SetParError(0,0.395386);
   mean_func1144->SetParLimits(0,0,0);
   mean_func1144->SetParameter(1,-0.0120723);
   mean_func1144->SetParError(1,0.0006816474);
   mean_func1144->SetParLimits(1,0,0);
   mean_func1144->SetParameter(2,5.566212e-06);
   mean_func1144->SetParError(2,4.02785e-07);
   mean_func1144->SetParLimits(2,0,0);
   mean_func1144->SetParameter(3,-1.092255e-09);
   mean_func1144->SetParError(3,9.692884e-11);
   mean_func1144->SetParLimits(3,0,0);
   mean_func1144->SetParameter(4,7.742398e-14);
   mean_func1144->SetParError(4,8.083454e-15);
   mean_func1144->SetParLimits(4,0,0);
   mean_func1144->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("mean_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mean_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mean_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mean_func","G_{B}#rightarrow ZZ","L");

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
