void Signal_mjetl2_alpha2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:25 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(445.6571,-0.927835,5728.514,5.515464);
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
   
   Double_t _fx1181[12] = {
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
   Double_t _fy1181[12] = {
   2.317219,
   2.096434,
   2.21939,
   2.422009,
   2.848931,
   2.406838,
   2.071034,
   2.024771,
   2.017153,
   1.958707,
   1.967147,
   1.928148};
   Double_t _fex1181[12] = {
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
   Double_t _fey1181[12] = {
   0.1717043,
   0.1002097,
   0.1064421,
   0.1536345,
   0.219811,
   0.1076282,
   0.08523175,
   0.09333529,
   0.07003428,
   0.07061982,
   0.08594786,
   0.1147065};
   TGraphErrors *gre = new TGraphErrors(12,_fx1181,_fy1181,_fex1181,_fey1181);
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
   
   TH1F *Graph_Graph1181 = new TH1F("Graph_Graph1181","",100,770,5930);
   Graph_Graph1181->SetMinimum(0);
   Graph_Graph1181->SetMaximum(5);
   Graph_Graph1181->SetDirectory(0);
   Graph_Graph1181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1181->SetLineColor(ci);
   Graph_Graph1181->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1181->GetXaxis()->SetRange(7,92);
   Graph_Graph1181->GetXaxis()->SetNdivisions(209);
   Graph_Graph1181->GetXaxis()->SetLabelFont(42);
   Graph_Graph1181->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1181->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1181->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1181->GetXaxis()->SetTitleFont(42);
   Graph_Graph1181->GetYaxis()->SetTitle("alpha2 (GeV)");
   Graph_Graph1181->GetYaxis()->SetNdivisions(504);
   Graph_Graph1181->GetYaxis()->SetLabelFont(42);
   Graph_Graph1181->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1181->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1181->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1181->GetYaxis()->SetTitleFont(42);
   Graph_Graph1181->GetZaxis()->SetLabelFont(42);
   Graph_Graph1181->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1181->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1181);
   
   
   TF1 *pol31182 = new TF1("pol3","pol3",1200,5500);
   pol31182->SetFillColor(19);
   pol31182->SetFillStyle(0);
   pol31182->SetLineColor(2);
   pol31182->SetLineWidth(2);
   pol31182->SetChisquare(14.73032);
   pol31182->SetNDF(8);
   pol31182->GetXaxis()->SetLabelFont(42);
   pol31182->GetXaxis()->SetLabelOffset(0.007);
   pol31182->GetXaxis()->SetLabelSize(0.05);
   pol31182->GetXaxis()->SetTitleSize(0.06);
   pol31182->GetXaxis()->SetTitleOffset(0.9);
   pol31182->GetXaxis()->SetTitleFont(42);
   pol31182->GetYaxis()->SetLabelFont(42);
   pol31182->GetYaxis()->SetLabelOffset(0.007);
   pol31182->GetYaxis()->SetLabelSize(0.05);
   pol31182->GetYaxis()->SetTitleSize(0.06);
   pol31182->GetYaxis()->SetTitleOffset(1.25);
   pol31182->GetYaxis()->SetTitleFont(42);
   pol31182->SetParameter(0,1.384124);
   pol31182->SetParError(0,0.5274225);
   pol31182->SetParLimits(0,0,0);
   pol31182->SetParameter(1,0.00104257);
   pol31182->SetParError(1,0.0005650062);
   pol31182->SetParLimits(1,0,0);
   pol31182->SetParameter(2,-3.630347e-07);
   pol31182->SetParError(2,1.792188e-07);
   pol31182->SetParLimits(2,0,0);
   pol31182->SetParameter(3,3.522091e-11);
   pol31182->SetParError(3,1.750695e-11);
   pol31182->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31182);
   gre->Draw("ap");
   
   Double_t _fx1183[12] = {
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
   Double_t _fy1183[12] = {
   1.989908,
   2.060189,
   2.038971,
   1.975096,
   2.129192,
   2.059526,
   2.022039,
   2.068937,
   1.944629,
   2.039898,
   1.75787,
   1.686977};
   Double_t _fex1183[12] = {
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
   Double_t _fey1183[12] = {
   0.04829552,
   0.05187303,
   0.04411679,
   0.0690539,
   0.04863212,
   0.04602655,
   0.04995142,
   0.1076331,
   0.05228589,
   0.04624639,
   0.0382489,
   0.03596648};
   gre = new TGraphErrors(12,_fx1183,_fy1183,_fex1183,_fey1183);
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
   
   TH1F *Graph_Graph1183 = new TH1F("Graph_Graph1183","",100,770,5930);
   Graph_Graph1183->SetMinimum(1.598329);
   Graph_Graph1183->SetMaximum(2.230505);
   Graph_Graph1183->SetDirectory(0);
   Graph_Graph1183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1183->SetLineColor(ci);
   Graph_Graph1183->GetXaxis()->SetLabelFont(42);
   Graph_Graph1183->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1183->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1183->GetXaxis()->SetTitleFont(42);
   Graph_Graph1183->GetYaxis()->SetLabelFont(42);
   Graph_Graph1183->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1183->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1183->GetYaxis()->SetTitleFont(42);
   Graph_Graph1183->GetZaxis()->SetLabelFont(42);
   Graph_Graph1183->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1183->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1183);
   
   
   TF1 *pol31184 = new TF1("pol3","pol3",1200,5500);
   pol31184->SetFillColor(19);
   pol31184->SetFillStyle(0);
   pol31184->SetLineColor(2);
   pol31184->SetLineWidth(2);
   pol31184->SetChisquare(14.78802);
   pol31184->SetNDF(8);
   pol31184->GetXaxis()->SetLabelFont(42);
   pol31184->GetXaxis()->SetLabelOffset(0.007);
   pol31184->GetXaxis()->SetLabelSize(0.05);
   pol31184->GetXaxis()->SetTitleSize(0.06);
   pol31184->GetXaxis()->SetTitleOffset(0.9);
   pol31184->GetXaxis()->SetTitleFont(42);
   pol31184->GetYaxis()->SetLabelFont(42);
   pol31184->GetYaxis()->SetLabelOffset(0.007);
   pol31184->GetYaxis()->SetLabelSize(0.05);
   pol31184->GetYaxis()->SetTitleSize(0.06);
   pol31184->GetYaxis()->SetTitleOffset(1.25);
   pol31184->GetYaxis()->SetTitleFont(42);
   pol31184->SetParameter(0,1.933128);
   pol31184->SetParError(0,0.2127024);
   pol31184->SetParLimits(0,0,0);
   pol31184->SetParameter(1,6.708391e-05);
   pol31184->SetParError(1,0.0002317452);
   pol31184->SetParLimits(1,0,0);
   pol31184->SetParameter(2,8.078683e-09);
   pol31184->SetParError(2,7.45118e-08);
   pol31184->SetParLimits(2,0,0);
   pol31184->SetParameter(3,-5.23348e-12);
   pol31184->SetParError(3,7.31914e-12);
   pol31184->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31184);
   gre->Draw("p");
   
   Double_t _fx1185[12] = {
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
   Double_t _fy1185[12] = {
   2.317219,
   2.096434,
   2.21939,
   2.422009,
   2.848931,
   2.406838,
   2.071034,
   2.024771,
   2.017153,
   1.958707,
   1.967147,
   1.928148};
   Double_t _fex1185[12] = {
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
   Double_t _fey1185[12] = {
   0.1717043,
   0.1002097,
   0.1064421,
   0.1536345,
   0.219811,
   0.1076282,
   0.08523175,
   0.09333529,
   0.07003428,
   0.07061982,
   0.08594786,
   0.1147065};
   gre = new TGraphErrors(12,_fx1185,_fy1185,_fex1185,_fey1185);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11811185 = new TH1F("Graph_Graph_Graph11811185","",100,770,5930);
   Graph_Graph_Graph11811185->SetMinimum(0);
   Graph_Graph_Graph11811185->SetMaximum(5);
   Graph_Graph_Graph11811185->SetDirectory(0);
   Graph_Graph_Graph11811185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11811185->SetLineColor(ci);
   Graph_Graph_Graph11811185->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph11811185->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph11811185->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11811185->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11811185->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11811185->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11811185->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11811185->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11811185->GetYaxis()->SetTitle("alpha2 (GeV)");
   Graph_Graph_Graph11811185->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11811185->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11811185->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11811185->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11811185->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11811185->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11811185->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11811185->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11811185->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11811185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11811185);
   
   
   TF1 *pol31186 = new TF1("pol3","pol3",1200,5500);
   pol31186->SetFillColor(19);
   pol31186->SetFillStyle(0);
   pol31186->SetLineColor(2);
   pol31186->SetLineWidth(2);
   pol31186->SetChisquare(14.73032);
   pol31186->SetNDF(8);
   pol31186->GetXaxis()->SetLabelFont(42);
   pol31186->GetXaxis()->SetLabelOffset(0.007);
   pol31186->GetXaxis()->SetLabelSize(0.05);
   pol31186->GetXaxis()->SetTitleSize(0.06);
   pol31186->GetXaxis()->SetTitleOffset(0.9);
   pol31186->GetXaxis()->SetTitleFont(42);
   pol31186->GetYaxis()->SetLabelFont(42);
   pol31186->GetYaxis()->SetLabelOffset(0.007);
   pol31186->GetYaxis()->SetLabelSize(0.05);
   pol31186->GetYaxis()->SetTitleSize(0.06);
   pol31186->GetYaxis()->SetTitleOffset(1.25);
   pol31186->GetYaxis()->SetTitleFont(42);
   pol31186->SetParameter(0,1.384124);
   pol31186->SetParError(0,0.5274225);
   pol31186->SetParLimits(0,0,0);
   pol31186->SetParameter(1,0.00104257);
   pol31186->SetParError(1,0.0005650062);
   pol31186->SetParLimits(1,0,0);
   pol31186->SetParameter(2,-3.630347e-07);
   pol31186->SetParError(2,1.792188e-07);
   pol31186->SetParLimits(2,0,0);
   pol31186->SetParameter(3,3.522091e-11);
   pol31186->SetParError(3,1.750695e-11);
   pol31186->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31186);
   gre->Draw("p");
   
   TF1 *pol31187 = new TF1("pol3","pol3",0,13000);
   pol31187->SetBit(TF1::kNotDraw);
   pol31187->SetFillColor(19);
   pol31187->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol31187->SetMarkerColor(ci);
   pol31187->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol31187->SetLineColor(ci);
   pol31187->SetLineWidth(3);
   pol31187->SetChisquare(14.73032);
   pol31187->SetNDF(8);
   pol31187->GetXaxis()->SetLabelFont(42);
   pol31187->GetXaxis()->SetLabelOffset(0.007);
   pol31187->GetXaxis()->SetLabelSize(0.05);
   pol31187->GetXaxis()->SetTitleSize(0.06);
   pol31187->GetXaxis()->SetTitleOffset(0.9);
   pol31187->GetXaxis()->SetTitleFont(42);
   pol31187->GetYaxis()->SetLabelFont(42);
   pol31187->GetYaxis()->SetLabelOffset(0.007);
   pol31187->GetYaxis()->SetLabelSize(0.05);
   pol31187->GetYaxis()->SetTitleSize(0.06);
   pol31187->GetYaxis()->SetTitleOffset(1.25);
   pol31187->GetYaxis()->SetTitleFont(42);
   pol31187->SetParameter(0,1.384124);
   pol31187->SetParError(0,0.5274225);
   pol31187->SetParLimits(0,0,0);
   pol31187->SetParameter(1,0.00104257);
   pol31187->SetParError(1,0.0005650062);
   pol31187->SetParLimits(1,0,0);
   pol31187->SetParameter(2,-3.630347e-07);
   pol31187->SetParError(2,1.792188e-07);
   pol31187->SetParLimits(2,0,0);
   pol31187->SetParameter(3,3.522091e-11);
   pol31187->SetParError(3,1.750695e-11);
   pol31187->SetParLimits(3,0,0);
   pol31187->Draw("Csame");
   
   TF1 *pol31188 = new TF1("pol3","pol3",0,13000);
   pol31188->SetBit(TF1::kNotDraw);
   pol31188->SetFillColor(19);
   pol31188->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol31188->SetMarkerColor(ci);
   pol31188->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol31188->SetLineColor(ci);
   pol31188->SetLineWidth(3);
   pol31188->SetLineStyle(9);
   pol31188->SetChisquare(14.78802);
   pol31188->SetNDF(8);
   pol31188->GetXaxis()->SetLabelFont(42);
   pol31188->GetXaxis()->SetLabelOffset(0.007);
   pol31188->GetXaxis()->SetLabelSize(0.05);
   pol31188->GetXaxis()->SetTitleSize(0.06);
   pol31188->GetXaxis()->SetTitleOffset(0.9);
   pol31188->GetXaxis()->SetTitleFont(42);
   pol31188->GetYaxis()->SetLabelFont(42);
   pol31188->GetYaxis()->SetLabelOffset(0.007);
   pol31188->GetYaxis()->SetLabelSize(0.05);
   pol31188->GetYaxis()->SetTitleSize(0.06);
   pol31188->GetYaxis()->SetTitleOffset(1.25);
   pol31188->GetYaxis()->SetTitleFont(42);
   pol31188->SetParameter(0,1.933128);
   pol31188->SetParError(0,0.2127024);
   pol31188->SetParLimits(0,0,0);
   pol31188->SetParameter(1,6.708391e-05);
   pol31188->SetParError(1,0.0002317452);
   pol31188->SetParLimits(1,0,0);
   pol31188->SetParameter(2,8.078683e-09);
   pol31188->SetParError(2,7.45118e-08);
   pol31188->SetParLimits(2,0,0);
   pol31188->SetParameter(3,-5.23348e-12);
   pol31188->SetParError(3,7.31914e-12);
   pol31188->SetParLimits(3,0,0);
   pol31188->Draw("Csame");
   
   Double_t _fx1187[12] = {
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
   Double_t _fy1187[12] = {
   1.641664,
   1.839027,
   1.685122,
   1.713547,
   1.766776,
   1.906995,
   1.83419,
   1.812778,
   1.79995,
   1.925036,
   1.615431,
   1.594819};
   Double_t _fex1187[12] = {
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
   Double_t _fey1187[12] = {
   0.04304589,
   0.03575728,
   0.03409746,
   0.035556,
   0.03795966,
   0.03480453,
   0.03347661,
   0.03291309,
   0.03483235,
   0.03575832,
   0.03029574,
   0.03084628};
   gre = new TGraphErrors(12,_fx1187,_fy1187,_fex1187,_fey1187);
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
   
   TH1F *Graph_Graph1187 = new TH1F("Graph_Graph1187","",100,770,5930);
   Graph_Graph1187->SetMinimum(1.524291);
   Graph_Graph1187->SetMaximum(2.000476);
   Graph_Graph1187->SetDirectory(0);
   Graph_Graph1187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1187->SetLineColor(ci);
   Graph_Graph1187->GetXaxis()->SetLabelFont(42);
   Graph_Graph1187->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1187->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1187->GetXaxis()->SetTitleFont(42);
   Graph_Graph1187->GetYaxis()->SetLabelFont(42);
   Graph_Graph1187->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1187->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1187->GetYaxis()->SetTitleFont(42);
   Graph_Graph1187->GetZaxis()->SetLabelFont(42);
   Graph_Graph1187->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1187->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1187);
   
   
   TF1 *pol31188 = new TF1("pol3","pol3",1200,5500);
   pol31188->SetFillColor(19);
   pol31188->SetFillStyle(0);
   pol31188->SetLineColor(2);
   pol31188->SetLineWidth(2);
   pol31188->SetChisquare(49.72837);
   pol31188->SetNDF(8);
   pol31188->GetXaxis()->SetLabelFont(42);
   pol31188->GetXaxis()->SetLabelOffset(0.007);
   pol31188->GetXaxis()->SetLabelSize(0.05);
   pol31188->GetXaxis()->SetTitleSize(0.06);
   pol31188->GetXaxis()->SetTitleOffset(0.9);
   pol31188->GetXaxis()->SetTitleFont(42);
   pol31188->GetYaxis()->SetLabelFont(42);
   pol31188->GetYaxis()->SetLabelOffset(0.007);
   pol31188->GetYaxis()->SetLabelSize(0.05);
   pol31188->GetYaxis()->SetTitleSize(0.06);
   pol31188->GetYaxis()->SetTitleOffset(1.25);
   pol31188->GetYaxis()->SetTitleFont(42);
   pol31188->SetParameter(0,1.558369);
   pol31188->SetParError(0,0.1682494);
   pol31188->SetParLimits(0,0,0);
   pol31188->SetParameter(1,0.0001050725);
   pol31188->SetParError(1,0.0001816266);
   pol31188->SetParLimits(1,0,0);
   pol31188->SetParameter(2,1.634508e-08);
   pol31188->SetParError(2,5.817699e-08);
   pol31188->SetParLimits(2,0,0);
   pol31188->SetParameter(3,-6.361486e-12);
   pol31188->SetParError(3,5.700382e-12);
   pol31188->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31188);
   gre->Draw("p");
   
   Double_t _fx1189[12] = {
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
   Double_t _fy1189[12] = {
   2.254632,
   2.336663,
   2.251123,
   2.186327,
   2.197006,
   2.211903,
   1.99474,
   1.847601,
   2.14949,
   1.862211,
   1.849711,
   1.779644};
   Double_t _fex1189[12] = {
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
   Double_t _fey1189[12] = {
   0.1403197,
   0.3145492,
   0.109164,
   0.09155107,
   0.09548386,
   0.1129169,
   0.08616472,
   0.05526148,
   0.07467416,
   0.06437887,
   0.05845698,
   0.06464652};
   gre = new TGraphErrors(12,_fx1189,_fy1189,_fex1189,_fey1189);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1189 = new TH1F("Graph_Graph1189","",100,770,5930);
   Graph_Graph1189->SetMinimum(1.621376);
   Graph_Graph1189->SetMaximum(2.744834);
   Graph_Graph1189->SetDirectory(0);
   Graph_Graph1189->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1189->SetLineColor(ci);
   Graph_Graph1189->GetXaxis()->SetLabelFont(42);
   Graph_Graph1189->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1189->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1189->GetXaxis()->SetTitleFont(42);
   Graph_Graph1189->GetYaxis()->SetLabelFont(42);
   Graph_Graph1189->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1189->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1189->GetYaxis()->SetTitleFont(42);
   Graph_Graph1189->GetZaxis()->SetLabelFont(42);
   Graph_Graph1189->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1189->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1189);
   
   
   TF1 *pol31190 = new TF1("pol3","pol3",1200,5500);
   pol31190->SetFillColor(19);
   pol31190->SetFillStyle(0);
   pol31190->SetLineColor(2);
   pol31190->SetLineWidth(2);
   pol31190->SetChisquare(15.8466);
   pol31190->SetNDF(8);
   pol31190->GetXaxis()->SetLabelFont(42);
   pol31190->GetXaxis()->SetLabelOffset(0.007);
   pol31190->GetXaxis()->SetLabelSize(0.05);
   pol31190->GetXaxis()->SetTitleSize(0.06);
   pol31190->GetXaxis()->SetTitleOffset(0.9);
   pol31190->GetXaxis()->SetTitleFont(42);
   pol31190->GetYaxis()->SetLabelFont(42);
   pol31190->GetYaxis()->SetLabelOffset(0.007);
   pol31190->GetYaxis()->SetLabelSize(0.05);
   pol31190->GetYaxis()->SetTitleSize(0.06);
   pol31190->GetYaxis()->SetTitleOffset(1.25);
   pol31190->GetYaxis()->SetTitleFont(42);
   pol31190->SetParameter(0,2.814835);
   pol31190->SetParError(0,0.494245);
   pol31190->SetParLimits(0,0,0);
   pol31190->SetParameter(1,-0.0005159865);
   pol31190->SetParError(1,0.0005006901);
   pol31190->SetParLimits(1,0,0);
   pol31190->SetParameter(2,1.110978e-07);
   pol31190->SetParError(2,1.529564e-07);
   pol31190->SetParLimits(2,0,0);
   pol31190->SetParameter(3,-9.319067e-12);
   pol31190->SetParError(3,1.446137e-11);
   pol31190->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31190);
   gre->Draw("p");
   
   TF1 *pol31191 = new TF1("pol3","pol3",0,13000);
   pol31191->SetBit(TF1::kNotDraw);
   pol31191->SetFillColor(19);
   pol31191->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol31191->SetMarkerColor(ci);
   pol31191->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol31191->SetLineColor(ci);
   pol31191->SetLineWidth(3);
   pol31191->SetChisquare(15.8466);
   pol31191->SetNDF(8);
   pol31191->GetXaxis()->SetLabelFont(42);
   pol31191->GetXaxis()->SetLabelOffset(0.007);
   pol31191->GetXaxis()->SetLabelSize(0.05);
   pol31191->GetXaxis()->SetTitleSize(0.06);
   pol31191->GetXaxis()->SetTitleOffset(0.9);
   pol31191->GetXaxis()->SetTitleFont(42);
   pol31191->GetYaxis()->SetLabelFont(42);
   pol31191->GetYaxis()->SetLabelOffset(0.007);
   pol31191->GetYaxis()->SetLabelSize(0.05);
   pol31191->GetYaxis()->SetTitleSize(0.06);
   pol31191->GetYaxis()->SetTitleOffset(1.25);
   pol31191->GetYaxis()->SetTitleFont(42);
   pol31191->SetParameter(0,2.814835);
   pol31191->SetParError(0,0.494245);
   pol31191->SetParLimits(0,0,0);
   pol31191->SetParameter(1,-0.0005159865);
   pol31191->SetParError(1,0.0005006901);
   pol31191->SetParLimits(1,0,0);
   pol31191->SetParameter(2,1.110978e-07);
   pol31191->SetParError(2,1.529564e-07);
   pol31191->SetParLimits(2,0,0);
   pol31191->SetParameter(3,-9.319067e-12);
   pol31191->SetParError(3,1.446137e-11);
   pol31191->SetParLimits(3,0,0);
   pol31191->Draw("Csame");
   
   TF1 *pol31192 = new TF1("pol3","pol3",0,13000);
   pol31192->SetBit(TF1::kNotDraw);
   pol31192->SetFillColor(19);
   pol31192->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol31192->SetMarkerColor(ci);
   pol31192->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol31192->SetLineColor(ci);
   pol31192->SetLineWidth(3);
   pol31192->SetLineStyle(9);
   pol31192->SetChisquare(49.72837);
   pol31192->SetNDF(8);
   pol31192->GetXaxis()->SetLabelFont(42);
   pol31192->GetXaxis()->SetLabelOffset(0.007);
   pol31192->GetXaxis()->SetLabelSize(0.05);
   pol31192->GetXaxis()->SetTitleSize(0.06);
   pol31192->GetXaxis()->SetTitleOffset(0.9);
   pol31192->GetXaxis()->SetTitleFont(42);
   pol31192->GetYaxis()->SetLabelFont(42);
   pol31192->GetYaxis()->SetLabelOffset(0.007);
   pol31192->GetYaxis()->SetLabelSize(0.05);
   pol31192->GetYaxis()->SetTitleSize(0.06);
   pol31192->GetYaxis()->SetTitleOffset(1.25);
   pol31192->GetYaxis()->SetTitleFont(42);
   pol31192->SetParameter(0,1.558369);
   pol31192->SetParError(0,0.1682494);
   pol31192->SetParLimits(0,0,0);
   pol31192->SetParameter(1,0.0001050725);
   pol31192->SetParError(1,0.0001816266);
   pol31192->SetParLimits(1,0,0);
   pol31192->SetParameter(2,1.634508e-08);
   pol31192->SetParError(2,5.817699e-08);
   pol31192->SetParLimits(2,0,0);
   pol31192->SetParameter(3,-6.361486e-12);
   pol31192->SetParError(3,5.700382e-12);
   pol31192->SetParLimits(3,0,0);
   pol31192->Draw("Csame");
   
   Double_t _fx1191[12] = {
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
   Double_t _fy1191[12] = {
   2.179687,
   2.256919,
   2.253251,
   2.344869,
   2.485656,
   2.533267,
   2.669215,
   2.498477,
   2.540067,
   2.535831,
   2.289684,
   2.161576};
   Double_t _fex1191[12] = {
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
   Double_t _fey1191[12] = {
   0.04502254,
   0.0464941,
   0.04448675,
   0.06151342,
   0.04938323,
   0.05691167,
   0.06459666,
   0.06504853,
   0.05475459,
   0.06158866,
   0.09526216,
   0.05282694};
   gre = new TGraphErrors(12,_fx1191,_fy1191,_fex1191,_fey1191);
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
   
   TH1F *Graph_Graph1191 = new TH1F("Graph_Graph1191","",100,770,5930);
   Graph_Graph1191->SetMinimum(2.046243);
   Graph_Graph1191->SetMaximum(2.796318);
   Graph_Graph1191->SetDirectory(0);
   Graph_Graph1191->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1191->SetLineColor(ci);
   Graph_Graph1191->GetXaxis()->SetLabelFont(42);
   Graph_Graph1191->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1191->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1191->GetXaxis()->SetTitleFont(42);
   Graph_Graph1191->GetYaxis()->SetLabelFont(42);
   Graph_Graph1191->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1191->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1191->GetYaxis()->SetTitleFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1191->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1191->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1191);
   
   
   TF1 *pol31192 = new TF1("pol3","pol3",1200,5500);
   pol31192->SetFillColor(19);
   pol31192->SetFillStyle(0);
   pol31192->SetLineColor(2);
   pol31192->SetLineWidth(2);
   pol31192->SetChisquare(8.801464);
   pol31192->SetNDF(8);
   pol31192->GetXaxis()->SetLabelFont(42);
   pol31192->GetXaxis()->SetLabelOffset(0.007);
   pol31192->GetXaxis()->SetLabelSize(0.05);
   pol31192->GetXaxis()->SetTitleSize(0.06);
   pol31192->GetXaxis()->SetTitleOffset(0.9);
   pol31192->GetXaxis()->SetTitleFont(42);
   pol31192->GetYaxis()->SetLabelFont(42);
   pol31192->GetYaxis()->SetLabelOffset(0.007);
   pol31192->GetYaxis()->SetLabelSize(0.05);
   pol31192->GetYaxis()->SetTitleSize(0.06);
   pol31192->GetYaxis()->SetTitleOffset(1.25);
   pol31192->GetYaxis()->SetTitleFont(42);
   pol31192->SetParameter(0,1.520855);
   pol31192->SetParError(0,0.2344497);
   pol31192->SetParLimits(0,0,0);
   pol31192->SetParameter(1,0.0006569936);
   pol31192->SetParError(1,0.0002637791);
   pol31192->SetParLimits(1,0,0);
   pol31192->SetParameter(2,-1.0254e-07);
   pol31192->SetParError(2,8.674033e-08);
   pol31192->SetParLimits(2,0,0);
   pol31192->SetParameter(3,7.775447e-13);
   pol31192->SetParError(3,8.645227e-12);
   pol31192->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31192);
   gre->Draw("p");
   
   Double_t _fx1193[12] = {
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
   Double_t _fy1193[12] = {
   5.936385,
   3.275114,
   2.743477,
   3.002425,
   6.911671,
   2.840377,
   2.888314,
   2.568827,
   2.406859,
   2.629213,
   3.026285,
   2.237776};
   Double_t _fex1193[12] = {
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
   Double_t _fey1193[12] = {
   5.266151,
   0.3149913,
   0.1830994,
   0.2075805,
   6.278118,
   0.1375465,
   0.19441,
   0.1027134,
   0.07790469,
   0.1131725,
   0.1804254,
   0.07326144};
   gre = new TGraphErrors(12,_fx1193,_fy1193,_fex1193,_fey1193);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1193 = new TH1F("Graph_Graph1193","",100,770,5930);
   Graph_Graph1193->SetMinimum(0);
   Graph_Graph1193->SetMaximum(14.44541);
   Graph_Graph1193->SetDirectory(0);
   Graph_Graph1193->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1193->SetLineColor(ci);
   Graph_Graph1193->GetXaxis()->SetLabelFont(42);
   Graph_Graph1193->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1193->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1193->GetXaxis()->SetTitleFont(42);
   Graph_Graph1193->GetYaxis()->SetLabelFont(42);
   Graph_Graph1193->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1193->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1193->GetYaxis()->SetTitleFont(42);
   Graph_Graph1193->GetZaxis()->SetLabelFont(42);
   Graph_Graph1193->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1193->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1193->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1193);
   
   
   TF1 *pol31194 = new TF1("pol3","pol3",1200,5500);
   pol31194->SetFillColor(19);
   pol31194->SetFillStyle(0);
   pol31194->SetLineColor(2);
   pol31194->SetLineWidth(2);
   pol31194->SetChisquare(22.05072);
   pol31194->SetNDF(8);
   pol31194->GetXaxis()->SetLabelFont(42);
   pol31194->GetXaxis()->SetLabelOffset(0.007);
   pol31194->GetXaxis()->SetLabelSize(0.05);
   pol31194->GetXaxis()->SetTitleSize(0.06);
   pol31194->GetXaxis()->SetTitleOffset(0.9);
   pol31194->GetXaxis()->SetTitleFont(42);
   pol31194->GetYaxis()->SetLabelFont(42);
   pol31194->GetYaxis()->SetLabelOffset(0.007);
   pol31194->GetYaxis()->SetLabelSize(0.05);
   pol31194->GetYaxis()->SetTitleSize(0.06);
   pol31194->GetYaxis()->SetTitleOffset(1.25);
   pol31194->GetYaxis()->SetTitleFont(42);
   pol31194->SetParameter(0,4.277926);
   pol31194->SetParError(0,1.09113);
   pol31194->SetParLimits(0,0,0);
   pol31194->SetParameter(1,-0.001232504);
   pol31194->SetParError(1,0.001056626);
   pol31194->SetParLimits(1,0,0);
   pol31194->SetParameter(2,3.13165e-07);
   pol31194->SetParError(2,3.100057e-07);
   pol31194->SetParLimits(2,0,0);
   pol31194->SetParameter(3,-2.812635e-11);
   pol31194->SetParError(3,2.815804e-11);
   pol31194->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31194);
   gre->Draw("p");
   
   TF1 *pol31195 = new TF1("pol3","pol3",0,13000);
   pol31195->SetBit(TF1::kNotDraw);
   pol31195->SetFillColor(19);
   pol31195->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol31195->SetMarkerColor(ci);
   pol31195->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol31195->SetLineColor(ci);
   pol31195->SetLineWidth(3);
   pol31195->SetChisquare(22.05072);
   pol31195->SetNDF(8);
   pol31195->GetXaxis()->SetLabelFont(42);
   pol31195->GetXaxis()->SetLabelOffset(0.007);
   pol31195->GetXaxis()->SetLabelSize(0.05);
   pol31195->GetXaxis()->SetTitleSize(0.06);
   pol31195->GetXaxis()->SetTitleOffset(0.9);
   pol31195->GetXaxis()->SetTitleFont(42);
   pol31195->GetYaxis()->SetLabelFont(42);
   pol31195->GetYaxis()->SetLabelOffset(0.007);
   pol31195->GetYaxis()->SetLabelSize(0.05);
   pol31195->GetYaxis()->SetTitleSize(0.06);
   pol31195->GetYaxis()->SetTitleOffset(1.25);
   pol31195->GetYaxis()->SetTitleFont(42);
   pol31195->SetParameter(0,4.277926);
   pol31195->SetParError(0,1.09113);
   pol31195->SetParLimits(0,0,0);
   pol31195->SetParameter(1,-0.001232504);
   pol31195->SetParError(1,0.001056626);
   pol31195->SetParLimits(1,0,0);
   pol31195->SetParameter(2,3.13165e-07);
   pol31195->SetParError(2,3.100057e-07);
   pol31195->SetParLimits(2,0,0);
   pol31195->SetParameter(3,-2.812635e-11);
   pol31195->SetParError(3,2.815804e-11);
   pol31195->SetParLimits(3,0,0);
   pol31195->Draw("Csame");
   
   TF1 *pol31196 = new TF1("pol3","pol3",0,13000);
   pol31196->SetBit(TF1::kNotDraw);
   pol31196->SetFillColor(19);
   pol31196->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol31196->SetMarkerColor(ci);
   pol31196->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol31196->SetLineColor(ci);
   pol31196->SetLineWidth(3);
   pol31196->SetLineStyle(9);
   pol31196->SetChisquare(8.801464);
   pol31196->SetNDF(8);
   pol31196->GetXaxis()->SetLabelFont(42);
   pol31196->GetXaxis()->SetLabelOffset(0.007);
   pol31196->GetXaxis()->SetLabelSize(0.05);
   pol31196->GetXaxis()->SetTitleSize(0.06);
   pol31196->GetXaxis()->SetTitleOffset(0.9);
   pol31196->GetXaxis()->SetTitleFont(42);
   pol31196->GetYaxis()->SetLabelFont(42);
   pol31196->GetYaxis()->SetLabelOffset(0.007);
   pol31196->GetYaxis()->SetLabelSize(0.05);
   pol31196->GetYaxis()->SetTitleSize(0.06);
   pol31196->GetYaxis()->SetTitleOffset(1.25);
   pol31196->GetYaxis()->SetTitleFont(42);
   pol31196->SetParameter(0,1.520855);
   pol31196->SetParError(0,0.2344497);
   pol31196->SetParLimits(0,0,0);
   pol31196->SetParameter(1,0.0006569936);
   pol31196->SetParError(1,0.0002637791);
   pol31196->SetParLimits(1,0,0);
   pol31196->SetParameter(2,-1.0254e-07);
   pol31196->SetParError(2,8.674033e-08);
   pol31196->SetParLimits(2,0,0);
   pol31196->SetParameter(3,7.775447e-13);
   pol31196->SetParError(3,8.645227e-12);
   pol31196->SetParLimits(3,0,0);
   pol31196->Draw("Csame");
   
   Double_t _fx1195[12] = {
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
   Double_t _fy1195[12] = {
   1.795866,
   1.964068,
   1.921187,
   2.007991,
   2.065944,
   2.262472,
   2.279486,
   2.203123,
   2.145976,
   2.267478,
   2.139796,
   2.205947};
   Double_t _fex1195[12] = {
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
   Double_t _fey1195[12] = {
   0.0291057,
   0.03548676,
   0.02976176,
   0.03374613,
   0.03506139,
   0.03783265,
   0.04068345,
   0.04205568,
   0.03771449,
   0.03956881,
   0.03680025,
   0.05790119};
   gre = new TGraphErrors(12,_fx1195,_fy1195,_fex1195,_fey1195);
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
   
   TH1F *Graph_Graph1195 = new TH1F("Graph_Graph1195","",100,770,5930);
   Graph_Graph1195->SetMinimum(1.71142);
   Graph_Graph1195->SetMaximum(2.375511);
   Graph_Graph1195->SetDirectory(0);
   Graph_Graph1195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1195->SetLineColor(ci);
   Graph_Graph1195->GetXaxis()->SetLabelFont(42);
   Graph_Graph1195->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1195->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1195->GetXaxis()->SetTitleFont(42);
   Graph_Graph1195->GetYaxis()->SetLabelFont(42);
   Graph_Graph1195->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1195->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1195->GetYaxis()->SetTitleFont(42);
   Graph_Graph1195->GetZaxis()->SetLabelFont(42);
   Graph_Graph1195->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1195->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1195);
   
   
   TF1 *pol31196 = new TF1("pol3","pol3",1200,5500);
   pol31196->SetFillColor(19);
   pol31196->SetFillStyle(0);
   pol31196->SetLineColor(2);
   pol31196->SetLineWidth(2);
   pol31196->SetChisquare(22.65027);
   pol31196->SetNDF(8);
   pol31196->GetXaxis()->SetLabelFont(42);
   pol31196->GetXaxis()->SetLabelOffset(0.007);
   pol31196->GetXaxis()->SetLabelSize(0.05);
   pol31196->GetXaxis()->SetTitleSize(0.06);
   pol31196->GetXaxis()->SetTitleOffset(0.9);
   pol31196->GetXaxis()->SetTitleFont(42);
   pol31196->GetYaxis()->SetLabelFont(42);
   pol31196->GetYaxis()->SetLabelOffset(0.007);
   pol31196->GetYaxis()->SetLabelSize(0.05);
   pol31196->GetYaxis()->SetTitleSize(0.06);
   pol31196->GetYaxis()->SetTitleOffset(1.25);
   pol31196->GetYaxis()->SetTitleFont(42);
   pol31196->SetParameter(0,0.8699346);
   pol31196->SetParError(0,0.1594293);
   pol31196->SetParLimits(0,0,0);
   pol31196->SetParameter(1,0.001057129);
   pol31196->SetParError(1,0.0001815733);
   pol31196->SetParLimits(1,0,0);
   pol31196->SetParameter(2,-2.640652e-07);
   pol31196->SetParError(2,6.113049e-08);
   pol31196->SetParLimits(2,0,0);
   pol31196->SetParameter(3,2.095404e-11);
   pol31196->SetParError(3,6.294443e-12);
   pol31196->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31196);
   gre->Draw("p");
   
   Double_t _fx1197[12] = {
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
   Double_t _fy1197[12] = {
   2.201313,
   2.252133,
   2.522181,
   2.483913,
   2.588974,
   2.178937,
   2.266723,
   2.215981,
   2.110697,
   2.042076,
   2.056801,
   1.943406};
   Double_t _fex1197[12] = {
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
   Double_t _fey1197[12] = {
   0.1264827,
   0.1471317,
   0.1208698,
   0.1071436,
   0.11874,
   0.07312925,
   0.07527446,
   0.06404251,
   0.05400242,
   0.05360514,
   0.04853334,
   0.04375559};
   gre = new TGraphErrors(12,_fx1197,_fy1197,_fex1197,_fey1197);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1197 = new TH1F("Graph_Graph1197","",100,770,5930);
   Graph_Graph1197->SetMinimum(1.818844);
   Graph_Graph1197->SetMaximum(2.788521);
   Graph_Graph1197->SetDirectory(0);
   Graph_Graph1197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1197->SetLineColor(ci);
   Graph_Graph1197->GetXaxis()->SetLabelFont(42);
   Graph_Graph1197->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1197->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1197->GetXaxis()->SetTitleFont(42);
   Graph_Graph1197->GetYaxis()->SetLabelFont(42);
   Graph_Graph1197->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1197->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1197->GetYaxis()->SetTitleFont(42);
   Graph_Graph1197->GetZaxis()->SetLabelFont(42);
   Graph_Graph1197->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1197->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1197);
   
   
   TF1 *pol31198 = new TF1("pol3","pol3",1200,5500);
   pol31198->SetFillColor(19);
   pol31198->SetFillStyle(0);
   pol31198->SetLineColor(2);
   pol31198->SetLineWidth(2);
   pol31198->SetChisquare(14.29326);
   pol31198->SetNDF(8);
   pol31198->GetXaxis()->SetLabelFont(42);
   pol31198->GetXaxis()->SetLabelOffset(0.007);
   pol31198->GetXaxis()->SetLabelSize(0.05);
   pol31198->GetXaxis()->SetTitleSize(0.06);
   pol31198->GetXaxis()->SetTitleOffset(0.9);
   pol31198->GetXaxis()->SetTitleFont(42);
   pol31198->GetYaxis()->SetLabelFont(42);
   pol31198->GetYaxis()->SetLabelOffset(0.007);
   pol31198->GetYaxis()->SetLabelSize(0.05);
   pol31198->GetYaxis()->SetTitleSize(0.06);
   pol31198->GetYaxis()->SetTitleOffset(1.25);
   pol31198->GetYaxis()->SetTitleFont(42);
   pol31198->SetParameter(0,2.193809);
   pol31198->SetParError(0,0.4077813);
   pol31198->SetParLimits(0,0,0);
   pol31198->SetParameter(1,0.0002524564);
   pol31198->SetParError(1,0.0004080271);
   pol31198->SetParLimits(1,0,0);
   pol31198->SetParameter(2,-1.040041e-07);
   pol31198->SetParError(2,1.232372e-07);
   pol31198->SetParLimits(2,0,0);
   pol31198->SetParameter(3,9.18601e-12);
   pol31198->SetParError(3,1.152084e-11);
   pol31198->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31198);
   gre->Draw("p");
   
   TF1 *pol31199 = new TF1("pol3","pol3",0,13000);
   pol31199->SetBit(TF1::kNotDraw);
   pol31199->SetFillColor(19);
   pol31199->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol31199->SetMarkerColor(ci);
   pol31199->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol31199->SetLineColor(ci);
   pol31199->SetLineWidth(3);
   pol31199->SetChisquare(14.29326);
   pol31199->SetNDF(8);
   pol31199->GetXaxis()->SetLabelFont(42);
   pol31199->GetXaxis()->SetLabelOffset(0.007);
   pol31199->GetXaxis()->SetLabelSize(0.05);
   pol31199->GetXaxis()->SetTitleSize(0.06);
   pol31199->GetXaxis()->SetTitleOffset(0.9);
   pol31199->GetXaxis()->SetTitleFont(42);
   pol31199->GetYaxis()->SetLabelFont(42);
   pol31199->GetYaxis()->SetLabelOffset(0.007);
   pol31199->GetYaxis()->SetLabelSize(0.05);
   pol31199->GetYaxis()->SetTitleSize(0.06);
   pol31199->GetYaxis()->SetTitleOffset(1.25);
   pol31199->GetYaxis()->SetTitleFont(42);
   pol31199->SetParameter(0,2.193809);
   pol31199->SetParError(0,0.4077813);
   pol31199->SetParLimits(0,0,0);
   pol31199->SetParameter(1,0.0002524564);
   pol31199->SetParError(1,0.0004080271);
   pol31199->SetParLimits(1,0,0);
   pol31199->SetParameter(2,-1.040041e-07);
   pol31199->SetParError(2,1.232372e-07);
   pol31199->SetParLimits(2,0,0);
   pol31199->SetParameter(3,9.18601e-12);
   pol31199->SetParError(3,1.152084e-11);
   pol31199->SetParLimits(3,0,0);
   pol31199->Draw("Csame");
   
   TF1 *pol31200 = new TF1("pol3","pol3",0,13000);
   pol31200->SetBit(TF1::kNotDraw);
   pol31200->SetFillColor(19);
   pol31200->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol31200->SetMarkerColor(ci);
   pol31200->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol31200->SetLineColor(ci);
   pol31200->SetLineWidth(3);
   pol31200->SetLineStyle(9);
   pol31200->SetChisquare(22.65027);
   pol31200->SetNDF(8);
   pol31200->GetXaxis()->SetLabelFont(42);
   pol31200->GetXaxis()->SetLabelOffset(0.007);
   pol31200->GetXaxis()->SetLabelSize(0.05);
   pol31200->GetXaxis()->SetTitleSize(0.06);
   pol31200->GetXaxis()->SetTitleOffset(0.9);
   pol31200->GetXaxis()->SetTitleFont(42);
   pol31200->GetYaxis()->SetLabelFont(42);
   pol31200->GetYaxis()->SetLabelOffset(0.007);
   pol31200->GetYaxis()->SetLabelSize(0.05);
   pol31200->GetYaxis()->SetTitleSize(0.06);
   pol31200->GetYaxis()->SetTitleOffset(1.25);
   pol31200->GetYaxis()->SetTitleFont(42);
   pol31200->SetParameter(0,0.8699346);
   pol31200->SetParError(0,0.1594293);
   pol31200->SetParLimits(0,0,0);
   pol31200->SetParameter(1,0.001057129);
   pol31200->SetParError(1,0.0001815733);
   pol31200->SetParLimits(1,0,0);
   pol31200->SetParameter(2,-2.640652e-07);
   pol31200->SetParError(2,6.113049e-08);
   pol31200->SetParLimits(2,0,0);
   pol31200->SetParameter(3,2.095404e-11);
   pol31200->SetParError(3,6.294443e-12);
   pol31200->SetParLimits(3,0,0);
   pol31200->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol3","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol3","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol3","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol3","G_{B}#rightarrow ZZ","L");

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
